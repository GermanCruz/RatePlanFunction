// This is a menu driven program that makes a function call
// for each selection the user makes.
// The selections will be four T-mobile rate plans.
// The plans are the following Magenta, Magenta Max
// Essentials and 55+.
// The point of this program is to test the functionality
// of functions pertaining to T-Mobile.

#include <iostream>
#include <iomanip>
using namespace std;


// function prototypes
void showMenu();
void showFees(double, int);

int main()
{
    int choice; // to hold a menu choice
    int months; // to hold a number of months

    // constants for the menu choices
    const int MAGENTA_CHOICE = 1,
              MAX_CHOICE = 2,
              ESSENTIALS_CHOICE = 3,
              SENIOR_CHOICE = 4,
              QUIT_CHOICE = 5;

    // Constants for membership rates
    const double MAGENTA = 75.0,
                 MAX = 90.0,
                 ESSENTIALS = 65.0,
                 SENIOR = 55.0;

    // Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    do
    {
        // Display the menu and get the user's choice.
        showMenu();
        cin >> choice;

        // Validate the menu selection.
        while (choice < MAGENTA_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }

        // if the user does not want to quit, proceed.
        if (choice != QUIT_CHOICE)
        {
            // Get the number of months.
            cout << "For how many months? ";
            cin >> months;

            // Display the membership fees.
            switch (choice)
            {
                case    MAGENTA_CHOICE:
                        showFees(MAGENTA, months);
                        break;
                case    MAX_CHOICE:
                        showFees(MAX, months);
                        break;
                case    ESSENTIALS_CHOICE:
                        showFees(ESSENTIALS, months);
                        break;
                case    SENIOR_CHOICE:
                        showFees(SENIOR, months);


            }
        }

    } while (choice != QUIT_CHOICE);
    return 0;
}

// ***********************************************************
// Definition of function showMenu which displays the menu.
// ***********************************************************

void showMenu()
{
    cout << "\n\t\tT-Mobile Rate Plans Menu\n\n"
         << "1. Magenta Rate Plan\n"
         << "2. Magenta Max Rate Plan\n"
         << "3. Essentials Rate Plan\n"
         << "4. 55+ Rate plan\n"
         << "5. Quit the program\n\n"
         << "Enter your choice: ";
}
void showFees(double planRate, int months)
{
    cout << "The total charges are $"
         << (planRate * months) << endl;
}

