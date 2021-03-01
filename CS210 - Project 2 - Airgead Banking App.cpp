// CS210 - Project 2 - Airgead Banking App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <string>
#include <ios>
#include <iomanip>
using namespace std;
//Include YearlyCompoundInterest.h file to be able to implement class within main function
#include "YearlyCompoundInterest.h"
//#include "YCIs.h"

int main()
{
    //Create a char variable to be able to read in user input and to enter loop
	char answer;
    cout << "Would you like to calculate your Yearly Compound Interest? (Y or N): ";
    cin >> answer;
    cout << endl;

	//While loop is used to be able to test data and print out data for yearly compound interest. It also allows you to test new data if you would like.
    while (answer == 'Y' || answer == 'y') {

		double invAmt;
		double monDep;
		int annInt;
		int NoY;
		char chk;
		int j;

		cout << "**********************************" << endl;
		cout << "********** Data Input ************" << endl;
		cout << "Initial Investment Amount: $";
		cin >> invAmt;
		cout << endl;
		cout << "Montly Deposit: $";
		cin >> monDep;
		cout << endl;
		cout << "Annual Interest: %";
		cin >> annInt;
		cout << endl;
		cout << "Number of Years: ";
		cin >> NoY;
		cout << endl;
		cout << "Press any key to continue . . .";
		chk = _getch();
		j = chk;
		for (int i = 1; i <= 256; i++)
			if (i == j)
				break;
		cout << string(100, '\n');

		cout << "**********************************" << endl;
		cout << "********** Data Input ************" << endl;
		cout << "Initial Investment Amount: $";
		cout << fixed << setprecision(2) << invAmt;
		cout << endl;
		cout << "Montly Deposit: $";
		cout << fixed << setprecision(2) << monDep;
		cout << endl;
		cout << "Annual Interest: %";
		cout << annInt;
		cout << endl;
		cout << "Number of Years: ";
		cout << NoY;
		cout << endl;
		cout << "Press any key to continue . . .";
		chk = _getch();
		j = chk;
		for (int i = 1; i <= 256; i++)
			if (i == j)
				break;
		cout << string(100, '\n');
	

        YearlyCompoundInterest PersonalData(invAmt, monDep, annInt, NoY);

        PersonalData.Print();
        PersonalData.PrintWithDeposit();
        cout << endl;

        cout << "Would you like to recalculate your Yearly Compound Interest with new data? (Y or N): ";
        cin >> answer;
        if (answer == 'Y' || answer == 'y') {
            cout << string(100, '\n');
        }
    }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
