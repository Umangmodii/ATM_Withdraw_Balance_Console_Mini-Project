// ATM balance with the ability to withdraw money.

#include <iostream>
#include <string>

using namespace std;

// Create a new class
class ATM
{
public:
    int balance;

    ATM(int balance)
    {
        // this used in Create a Instance of Class is called as Constructor
        // Instance = Objects
        
        this->balance = balance;
    }

    void Display_Balance(int balance)
    {
        cout << "The Current Balance is : " << balance << endl;
    }

    void Withdraw_Money(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful! " << balance << endl;
        }

        else
        {
            cout << "Balance is not Available! " << endl;
        }
    }

    void Check_Balance()
    {
        cout << "The Current Remaining Balance is : " << balance << endl;
    }
};

int main()
{
    // Create a new class Objects
    ATM a1 = ATM(1000);

    // string name;
    int balance = 1000;

    int choice;

    do
    {
        cout << "----ATM Operation----\n";
        cout << "1.Display Balance\n";
        cout << "2.Withdraw Money\n";
        cout << "3.Check Balance\n";
        cout << "4.Exit\n";

        int choice;
        int amount;

        cout << "Enter the Number : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Amount of Display Balance : \n";
            a1.Display_Balance(balance);
            break;

        case 2:
            cout << "Enter the amount Withdraw Money : \n";
            cin >> amount;
            a1.Withdraw_Money(amount);
            break;

        case 3:
            a1.Check_Balance();
            break;

        case 4:
            cout << "Thanks for using our ATM service.\n";
            break;
            exit;
        }

    }

    while (choice != 4);

    return 0;
}
