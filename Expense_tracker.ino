
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cctype>
using namespace std;

// Structure to store expense details
struct Expense {
    string category;
    string description;
    double amount;
};

// Function to convert text into lowercase
string toLowerCase(string text) {
    for (char &ch : text) {
        ch = tolower(static_cast<unsigned char>(ch));
    }
    return text;
}

// Function to read a valid menu choice
int readChoice() {
    string line;
    int choice;
    char extra;

    while (true) {
        cout << "Enter your choice: ";
        getline(cin, line);

        stringstream ss(line);

        if (ss >> choice && !(ss >> extra)) {
            return choice;
        }

        cout << "Invalid input! Enter a number.\n";
    }
}

// Function to read a valid positive amount
double readAmount() {
    string line;
    double amount;
    char extra;

    while (true) {
        cout << "Enter amount: ";
        getline(cin, line);

        stringstream ss(line);

        if (ss >> amount && !(ss >> extra) &&
            isfinite(amount) && amount > 0) {
            return amount;
        }

        cout << "Invalid amount! Enter a positive number.\n";
    }
}

// Function to add an expense
void addExpense(vector<Expense>& expenses) {
    Expense e;

    cout << "\nEnter category: ";
    getline(cin, e.category);

    if (e.category.empty()) {
        cout << "Category cannot be empty!\n";
        return;
    }

    cout << "Enter description: ";
    getline(cin, e.description);

    if (e.description.empty()) {
        cout << "Description cannot be empty!\n";
        return;
    }

    e.amount = readAmount();

    expenses.push_back(e);

    cout << "\nExpense added successfully!\n";
}

// Function to display all expenses
void listExpenses(const vector<Expense>& expenses) {
    if (expenses.empty()) {
        cout << "\nNo expenses recorded yet.\n";
        return;
    }

    cout << "\n========== ALL EXPENSES ==========\n";

    cout << left << setw(18) << "Category"
         << setw(25) << "Description"
         << "Amount\n";

    cout << "---------------------------------------------\n";

    for (const Expense& e : expenses) {
        cout << left << setw(18) << e.category
             << setw(25) << e.description
             << fixed << setprecision(2) << e.amount << "\n";
    }
}

// Function to calculate category-wise total
void categoryTotal(const vector<Expense>& expenses) {
    string category;

    cout << "\nEnter category to search: ";
    getline(cin, category);

    double total = 0;
    bool found = false;

    for (const Expense& e : expenses) {
        if (toLowerCase(e.category) == toLowerCase(category)) {
            total += e.amount;
            found = true;
        }
    }

    if (found) {
        cout << "\nTotal expense in " << category
             << ": Rs. " << fixed << setprecision(2)
             << total << "\n";
    } else {
        cout << "\nNo expenses found in this category.\n";
    }
}

// Function to calculate overall total
void overallTotal(const vector<Expense>& expenses) {
    double total = 0;

    for (const Expense& e : expenses) {
        total += e.amount;
    }

    cout << "\nOverall expense: Rs. "
         << fixed << setprecision(2) << total << "\n";
}

// Main function
int main() {
    vector<Expense> expenses;
    int choice;

    do {
        cout << "\n================================\n";
        cout << "         EXPENSE TRACKER\n";
        cout << "================================\n";
        cout << "1. Add Expense\n";
        cout << "2. View All Expenses\n";
        cout << "3. Category-wise Total\n";
        cout << "4. Overall Expense Total\n";
        cout << "5. Exit\n";
        cout << "================================\n";

        choice = readChoice();

        switch (choice) {
            case 1:
                addExpense(expenses);
                break;

            case 2:
                listExpenses(expenses);
                break;

            case 3:
                categoryTotal(expenses);
                break;

            case 4:
                overallTotal(expenses);
                break;

            case 5:
                cout << "\nThank you for using Expense Tracker!\n";
                break;

            default:
                cout << "\nInvalid choice! Select 1 to 5.\n";
        }

    } while (choice != 5);

    return 0;
}
