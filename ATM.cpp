#include <iostream>
using namespace std;

int main()
{
    // Initialize account variables
    int balance = 10000;      // Initial account balance
    int pin = 1234, pin2 = 0; // Set default and user-entered PIN
    int option = 0;           // User menu option
    int amount;               // Amount for transactions

    // Display welcome message
    cout << "*********************************************" << endl;
    cout << "*****  Welcome to the Bank ATM  *****" << endl;
    cout << "*********************************************" << endl;

    // Prompt user for PIN
    cout << "Please enter your PIN to proceed." << endl;
    cin >> pin2;

    // Check if entered PIN is correct
    if (pin2 != pin)
    {
        cout << "Wrong PIN code. Please try again." << endl;
        cin >> pin2;
        if (pin2 != pin)
        {
            cout << "Wrong PIN code. Please try again." << endl;
            cin >> pin2;
            if (pin2 != pin)
            {
                cout << "Wrong PIN code. Please try again." << endl;
                return 0;
            }
            else
                ;
        }
        else
            ;
    }

    // Main menu loop
    while (option != -1)
    {
        // Display main menu options
        cout << "*********************************************" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Transfer" << endl;
        cout << "5. Fast Cash" << endl;
        cout << "6. Exit (Type -1)" << endl;
        cout << "*********************************************" << endl;
        cout << "Choose an option: ";
        cin >> option;

        // Switch based on user's menu option
        switch (option)
        {
        case 1:
            // Display account balance
            cout << "*********************************************" << endl;
            cout << "Your current balance is: $" << balance << endl;
            break;

        case 2:
            // Withdraw funds
            cout << "*********************************************" << endl;
            cout << "Enter the amount to withdraw: $";
            cin >> amount;
            if (amount > balance)
            {
                cout << "Insufficient funds. Transaction failed." << endl;
            }
            else
            {
                balance -= amount;
                cout << "Amount $" << amount << " withdrawn successfully." << endl;
                cout << "Remaining balance: $" << balance << endl;
            }
            break;

        case 3:
            // Deposit funds
            cout << "*********************************************" << endl;
            cout << "Enter the amount to deposit: $";
            cin >> amount;
            balance += amount;
            cout << "Amount $" << amount << " deposited successfully." << endl;
            cout << "Updated balance: $" << balance << endl;
            break;

        case 4:
            // Transfer funds to another account
            cout << "*********************************************" << endl;
            cout << "Enter the amount to transfer: $";
            cin >> amount;
            if (amount > balance)
            {
                cout << "Insufficient funds. Transfer failed." << endl;
            }
            else
            {
                balance -= amount;
                cout << "Amount $" << amount << " transferred successfully." << endl;
                cout << "Remaining balance: $" << balance << endl;
            }
            break;

        case 5:
            // Fast cash withdrawal
            cout << "*********************************************" << endl;
            cout << "Fast Cash" << endl;
            cout << "*********************************************" << endl;
            cout << "1. $20" << endl;
            cout << "2. $50" << endl;
            cout << "3. $100" << endl;
            cout << "Choose an option: ";
            cin >> amount;
            if (amount == 1)
            {
                balance -= 20;
                cout << "Fast cash of $20 withdrawn. Your new balance is: $" << balance << endl;
            }
            else if (amount == 2)
            {
                balance -= 50;
                cout << "Fast cash of $50 withdrawn. Your new balance is: $" << balance << endl;
            }
            else if (amount == 3)
            {
                balance -= 100;
                cout << "Fast cash of $100 withdrawn. Your new balance is: $" << balance << endl;
            }
            else
            {
                cout << "Invalid option" << endl;
            }
            break;

        case 6:
            // Exit the program
            cout << "*********************************************" << endl;
            cout << "Thank you for using the Bank ATM" << endl;
            cout << "*********************************************" << endl;
            option = -1; // Set option to -1 to exit the while loop
            break;

        default:
            // Invalid menu option
            cout << "Error, Wrong Option\n";
        }
    }

    return 0;
}