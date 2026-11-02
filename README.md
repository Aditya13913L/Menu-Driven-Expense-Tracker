# Menu-Driven-Expense-Tracker
Menu-Driven Expense Tracker Program 

# Reliable Command-Line Expense Tracker
A beginner-friendly, menu-driven expense tracker built with C++17. It allows a user to add expenses, view all recorded expenses, calculate a category-wise total, and calculate the overall total.

## Features
- Add an expense with a category, description, and positive amount.
- View all expenses in a formatted table.
- Calculate the total for a category (category matching is case-insensitive).
- Calculate the overall expense total.
- Validate menu choices and expense amounts.
- Handle an empty expense list and invalid menu entries.

## Technologies and C++ concepts
- Language: C++ (C++17)
- Standard library: `iostream`, `vector`, `string`, `sstream`, `iomanip`, `cmath`, and `cctype`
- Concepts: structures, functions, vectors, loops, conditionals, switch-case, references, and input validation.

## Project files
```
Expense-Tracker/
├── main.cpp
├── README.md
├── sample_output.txt
├── TESTING.md
└── Screenshots/
    ├── menu.png
    ├── expenses.png
    └── totals.png
```

## Requirements

- A C++ compiler that supports C++17 (for example, GCC or MinGW).
- A terminal or code editor such as Visual Studio Code.

## Compile and run

### Windows (MinGW)

```bash
g++ -std=c++17 main.cpp -o expense
expense.exe
```

### Linux / macOS

```bash
g++ -std=c++17 main.cpp -o expense
./expense
```

## How to use

1. Run the program.
2. Choose an option from the menu.
3. Select **Add Expense** and enter a category, description, and positive amount.
4. Select **View All Expenses** to display saved entries.
5. Select **Category-wise Total** and enter a category name to calculate its total.
6. Select **Overall Expense Total** to calculate all recorded expenses.
7. Select **Exit** to close the program.

## Sample data

| Category | Description | Amount |
|---|---|---:|
| Food | Lunch | 150.00 |
| Travel | Bus Ticket | 50.00 |
| Food | Snacks | 40.00 |

For this sample data:
- Food total: Rs. 190.00
- Travel total: Rs. 50.00
- Overall total: Rs. 240.00

## Input validation

- Menu input must be a whole number.
- The amount must be a finite number greater than zero.
- Empty category and description fields are rejected.
- An invalid menu number displays an error message.

## Current limitation

Expenses are stored in a `vector` in memory. They remain available only while the program is running and are cleared when the program exits. File storage can be added as a future improvement.

## Screenshots

The images in `Screenshots/` are illustrative terminal previews of the expected program flow. Run `main.cpp` locally and capture your own screenshots if your reviewer requires proof of an actual execution.

## Author
ADITYA PATTANAIK
Date: 02/11/2026
