//Attempted to use vectors to allow user to input different data to test and for old data to be saved. In the end it was not need to make the code function correctly. 

/*

#include <iostream>
#include <vector>
#include <conio.h>
#include <string>
#include <ios>
#include <iomanip>
using namespace std;

#include "YearlyCompoundInterest.h"
#include "YCIs.h"

void YCIs::InputData() {
	YearlyCompoundInterest currData();
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
	currData.SetInvestmentAmount(invAmt);
	cout << endl;
	cout << "Montly Deposit: $";
	cin >> monDep;
	currData.SetMonthlyDeposit(monDep);
	cout << endl;
	cout << "Annual Interest: %"; 
	cin >> annInt;
	currData.SetAnnualInterest(annInt);
	cout << endl;
	cout << "Number of Years: "; 
	cin >> NoY;
	currData.SetNumberOfYears(NoY);
	YCIData.push_back(currData);
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
}

void YCIs::Print() {
	YearlyCompoundInterest currData();
	int i;
	int months = currData.GetNumberOfYears() * 12;
	double closingBalanceTotal = 0.0;
	double interestTotal = 0.0;
	double openingAmount = currData.GetInvestmentAmount();
	int rate = currData.GetAnnualInterest();

	cout << "     Balance and Interest Without Additional Monthly Deposits   " << endl;
	cout << "================================================================" << endl;
	cout << setw(5) << right << "Year";
	cout << setw(30) << right << "Year End Balance";
	cout << setw(30) << right << "Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;


	for (i = 1; i <= months; ++i) {
		double interest = ((openingAmount + 0) * ((static_cast<double>(rate) / 100)/12));
		interestTotal += interest;
		openingAmount = openingAmount + interest;
		closingBalanceTotal += openingAmount;

		if ((i % 12) == 0) {
			int year = i / 12;
			cout << setw(5) << right << year;
			cout << setw(30) << right;
			cout << fixed << setprecision(2) << closingBalanceTotal;
			cout << setw(30) << right;
			cout << fixed << setprecision(2) << interestTotal << endl;
		}
	}
}

void YCIs::PrintWithDeposit() {
	YearlyCompoundInterest currData();
	int i;
	int months = currData.GetNumberOfYears() * 12;
	double closingBalanceTotal = 0.0;
	double interestTotal = 0.0;
	double openingAmount = currData.GetInvestmentAmount();
	int rate = currData.GetAnnualInterest();
	double monthlyDeposit = currData.GetMonthlyDeposit();

	cout << "      Balance and Interest With Additional Monthly Deposits     " << endl;
	cout << "================================================================" << endl;
	cout << setw(5) << right << "Year";
	cout << setw(30) << right << "Year End Balance";
	cout << setw(30) << right << "Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;


	for (i = 1; i <= months; ++i) {
		double interest = ((openingAmount + monthlyDeposit) * ((static_cast<double>(rate) / 100) / 12));
		interestTotal += interest;
		openingAmount = openingAmount + interest;
		closingBalanceTotal += openingAmount;

		if ((i % 12) == 0) {
			int year = i / 12;
			cout << setw(5) << right << year;
			cout << setw(30) << right;
			cout << fixed << setprecision(2) << closingBalanceTotal;
			cout << setw(30) << right;
			cout << fixed << setprecision(2) << interestTotal << endl;
		}
	}
}
*/
