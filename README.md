# Expense Tracker & Budget Optimizer

## Project Description
This project is a console-based Expense Tracker & Budget Optimizer developed using the C++ programming language. It helps users manage income and expenses efficiently using file handling.

The system also provides smart spending analysis, category-wise expense percentages, financial health score calculation, and budget optimization suggestions to improve savings habits.

---

## Features
- Add income and expense details
- Dynamic expense categories
- Store transaction records permanently using file handling
- View all transaction history
- Calculate total income, expenses, and balance
- Display category-wise expense percentages
- Identify highest and lowest spending categories
- Generate smart budget optimization suggestions
- Calculate financial health score
- Stylish console-based interface

---

## Technologies Used
- C++ Programming Language
- File Handling
- Classes & Objects
- Vectors
- Conditional Statements
- Loops
- Functions

---

## How to Run the Project (All Operating Systems)

### Step 1: Open Terminal / Command Prompt
- Windows: Command Prompt or PowerShell
- macOS: Terminal
- Linux: Terminal

### Step 2: Navigate to the Project Folder
```bash
cd path_to_project_folder
```

Example:

```bash
cd Desktop/Expense_Tracker_Project
```

### Step 3: Compile the Program
```bash
g++ main.cpp -o app
```

### Step 4: Run the Program

#### On macOS / Linux:
```bash
./app
```

#### On Windows:
```bash
app
```

---

## Sample Input
```text
1
Salary
20000

2
Food
3000

2
Shopping
2500

5
```

---

## Sample Output
```text
============================================
   EXPENSE TRACKER & BUDGET OPTIMIZER
============================================

1. Add Income
2. Add Expense
3. View Transactions
4. View Balance
5. Smart Budget Analysis
6. Exit

Enter your choice: 1

Enter income category: Salary
Enter amount: 20000

Income added successfully!

Enter your choice: 2

Enter expense category: Food
Enter amount: 3000

Expense added successfully!

Enter your choice: 2

Enter expense category: Shopping
Enter amount: 2500

Expense added successfully!

Enter your choice: 5

========== SMART BUDGET ANALYSIS ==========

===== CATEGORY-WISE EXPENSE REPORT =====

Food : 3000 (54.5455%)
Shopping : 2500 (45.4545%)

Highest Spending Category : Food
Highest Amount Spent      : 3000

Lowest Spending Category  : Shopping
Lowest Amount Spent       : 2500

Highest Expense Percentage : 54.5455%

Suggestion: Try reducing expenses in Food.

Warning: Monthly spending is high!

Financial Health Score : 45/100

Needs Better Expense Control!
```

---

## Files in the Project
- main.cpp – Main source code
- transactions.txt – Stores transaction records (created automatically)
- README.md – Project documentation

---

## Notes
- This project is designed as a first-year academic project.
- Data is stored locally using file handling.
- Transaction records remain saved even after the program is closed.
- Users can add their own expense categories dynamically.

---

## Sample Expense Categories
- Food
- Travel
- Shopping
- Entertainment
- Medical
- Education

---

## Future Enhancements
- Add password protection for users
- Generate monthly financial reports
- Add graphical expense visualization
- Store data using databases
- Export reports as PDF or Excel files
- Add multiple user accounts
- Develop a GUI version of the application
- Add AI-based budget prediction system

---

## About
Smart Expense Tracker & Budget Optimizer using C++ and file handling to manage income, expenses, spending analysis, financial health score, and budget suggestions. Features dynamic expense categories, percentage analysis, and highest/lowest spending category detection.

---

## Team Members
- 25A31A4334 : SHAIK TAZMEEN RIDA
- 25A31A4318 : MOHAMMAD DHANIYA FATHIMA
- 25A31A4332 : SABBATHI PAVANI
- 25A31A4364 : VANASI GOWTHAM
- 25A31A4342 : JANAPAREDDY JASWANTH
