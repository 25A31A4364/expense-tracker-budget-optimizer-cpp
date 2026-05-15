#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

class Transaction {
public:
    string type;
    string category;
    float amount;
};

vector<Transaction> transactions;

void saveTransaction(Transaction t) {
    ofstream file("transactions.txt", ios::app);

    file << t.type << " "
         << t.category << " "
         << t.amount << endl;

    file.close();
}

void addIncome() {
    Transaction t;

    t.type = "Income";

    cout << "Enter income category: ";
    cin >> t.category;

    cout << "Enter amount: ";
    cin >> t.amount;

    transactions.push_back(t);

    saveTransaction(t);

    cout << "Income added successfully!\n";
}

void addExpense() {
    Transaction t;

    t.type = "Expense";

    cout << "Enter expense category: ";
    cin >> t.category;

    cout << "Enter amount: ";
    cin >> t.amount;

    transactions.push_back(t);

    saveTransaction(t);

    cout << "Expense added successfully!\n";
}

void viewTransactions() {
    ifstream file("transactions.txt");

    string type, category;
    float amount;

    cout << "\n========== TRANSACTIONS ==========\n";

    while(file >> type >> category >> amount) {

        cout << left
             << setw(12) << type
             << setw(20) << category
             << amount << endl;
    }

    file.close();
}

void viewBalance() {

    ifstream file("transactions.txt");

    string type, category;
    float amount;

    float income = 0;
    float expense = 0;

    while(file >> type >> category >> amount) {

        if(type == "Income")
            income += amount;

        else
            expense += amount;
    }

    file.close();

    cout << "\n========== BALANCE REPORT ==========\n";

    cout << "Total Income  : " << income << endl;
    cout << "Total Expense : " << expense << endl;
    cout << "Balance       : " << income - expense << endl;
}

void suggestions() {

    ifstream file("transactions.txt");

    string type, category;
    float amount;

    vector<string> categories;
    vector<float> totals;

    while(file >> type >> category >> amount) {

        if(type == "Expense") {

            bool found = false;

            for(int i = 0; i < categories.size(); i++) {

                if(categories[i] == category) {

                    totals[i] += amount;
                    found = true;
                    break;
                }
            }

            if(!found) {

                categories.push_back(category);
                totals.push_back(amount);
            }
        }
    }

    file.close();

    cout << "\n========== SMART BUDGET ANALYSIS ==========\n";

    if(categories.size() == 0) {

        cout << "No expense data available.\n";
        return;
    }

    float totalExpense = 0;

    for(int i = 0; i < totals.size(); i++) {

        totalExpense += totals[i];
    }

    cout << "\n===== CATEGORY-WISE EXPENSE REPORT =====\n";

    for(int i = 0; i < categories.size(); i++) {

        float categoryPercentage =
            (totals[i] / totalExpense) * 100;

        cout << categories[i]
             << " : "
             << totals[i]
             << " ("
             << categoryPercentage
             << "%)\n";
    }

    int maxIndex = 0;
    int minIndex = 0;

    for(int i = 1; i < totals.size(); i++) {

        if(totals[i] > totals[maxIndex]) {

            maxIndex = i;
        }

        if(totals[i] < totals[minIndex]) {

            minIndex = i;
        }
    }

    cout << "\nHighest Spending Category : "
         << categories[maxIndex] << endl;

    cout << "Highest Amount Spent      : "
         << totals[maxIndex] << endl;

    cout << "\nLowest Spending Category  : "
         << categories[minIndex] << endl;

    cout << "Lowest Amount Spent       : "
         << totals[minIndex] << endl;

    float percentage =
        (totals[maxIndex] / totalExpense) * 100;

    cout << "\nHighest Expense Percentage : "
         << percentage
         << "%\n";

    if(percentage > 40)

        cout << "Suggestion: Try reducing expenses in "
             << categories[maxIndex]
             << ".\n";

    else

        cout << "Your spending is balanced.\n";

    if(totalExpense > 5000)

        cout << "Warning: Monthly spending is high!\n";

    int score = 100 - (totalExpense / 100);

    if(score < 0)
        score = 0;

    cout << "\nFinancial Health Score : "
         << score
         << "/100\n";

    if(score >= 80)

        cout << "Excellent Budget Management!\n";

    else if(score >= 60)

        cout << "Good Financial Habits!\n";

    else

        cout << "Needs Better Expense Control!\n";
}

int main() {

    int choice;

    do {

        cout << "\n============================================\n";
        cout << "   EXPENSE TRACKER & BUDGET OPTIMIZER\n";
        cout << "============================================\n";

        cout << "1. Add Income\n";
        cout << "2. Add Expense\n";
        cout << "3. View Transactions\n";
        cout << "4. View Balance\n";
        cout << "5. Smart Budget Analysis\n";
        cout << "6. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                addIncome();
                break;

            case 2:
                addExpense();
                break;

            case 3:
                viewTransactions();
                break;

            case 4:
                viewBalance();
                break;

            case 5:
                suggestions();
                break;

            case 6:
                cout << "\nThank you for using the system!\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while(choice != 6);

    return 0;
}