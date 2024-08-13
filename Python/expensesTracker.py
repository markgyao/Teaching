import os
import matplotlib.pyplot as plt

def load_expenses(file_name):
    expenses = []
    if os.path.exists(file_name):
        with open(file_name, 'r') as file:
            for line in file:
                line = line.strip()
                if line:
                    parts = line.split(',')
                    expense = {
                        'date': parts[0].strip(),
                        'category': parts[1].strip(),
                        'description': parts[2].strip(),
                        'amount': float(parts[3].strip())
                    }
                    expenses.append(expense)
    return expenses

def save_expenses(file_name, expenses):
    with open(file_name, 'w') as file:
        for expense in expenses:
            file.write(f"{expense['date']}, {expense['category']}, {expense['description']}, {expense['amount']}\n")

def add_expense(expenses):
    date = input("Enter the date (YYYY-MM-DD): ")
    category = input("Enter the category (e.g., food, transport, entertainment): ")
    description = input("Enter the description: ")
    amount = float(input("Enter the amount spent: "))
    expenses.append({'date': date, 'category': category, 'description': description, 'amount': amount})
    print("Expense added successfully!\n")

def view_expenses(expenses):
    if not expenses:
        print("No expenses recorded.\n")
    else:
        print("Expenses:")
        for expense in expenses:
            print(f"Date: {expense['date']}, Category: {expense['category']}, Description: {expense['description']}, Amount: ${expense['amount']:.2f}")
        print()

def view_expenses_by_category(expenses):
    category = input("Enter the category to filter by: ").lower()
    filtered_expenses = [expense for expense in expenses if expense['category'].lower() == category]
    if not filtered_expenses:
        print(f"No expenses found for category '{category}'.\n")
    else:
        print(f"Expenses in category '{category}':")
        for expense in filtered_expenses:
            print(f"Date: {expense['date']}, Description: {expense['description']}, Amount: ${expense['amount']:.2f}")
        print()

def view_total_spending(expenses):
    total = sum(expense['amount'] for expense in expenses)
    print(f"Total spending: ${total:.2f}\n")

def view_total_spending_with_category(expenses):
    total_expense_by_cate={}
    for exp in expenses:
        cate=exp['category']
        if(cate in total_expense_by_cate):
            total_expense_by_cate[cate]+=exp['amount']
        else:
            total_expense_by_cate[cate]=exp['amount']
    return total_expense_by_cate

def view_plot_expense_pie_chart(expenses):
    category_totals = view_total_spending_with_category(expenses)

    if not category_totals:
        print("No expenses to plot.")
        return

    categories = list(category_totals.keys())
    totals = list(category_totals.values())

    plt.figure(figsize=(8, 8))
    plt.pie(totals, labels=categories, autopct='%1.1f%%', startangle=140)
    plt.title('Total Expenses by Category')
    plt.show()


def main():
    file_name = 'Python/expensesData.txt'
    expenses = load_expenses(file_name)
    print(view_total_spending_with_category(expenses))
    view_plot_expense_pie_chart(expenses)
    while True:
        print("1. Add a new expense")
        print("2. View all expenses")
        print("3. View expenses by category")
        print("4. View total spending")
        print("5. Exit")
        
        option = input("Select an option: ")
        if option == '1':
            add_expense(expenses)
        elif option == '2':
            view_expenses(expenses)
        elif option == '3':
            view_expenses_by_category(expenses)
        elif option == '4':
            view_total_spending(expenses)
        elif option == '5':
            save_expenses(file_name, expenses)
            print("Expenses saved. Goodbye!")
            break
        else:
            print("Invalid option, please try again.\n")

if __name__ == "__main__":
    main()
