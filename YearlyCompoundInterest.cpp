#include <iostream>
#include <iomanip>
using namespace std;
//Include the YearlyCompoundInterest.h file to the cpp 
#include "YearlyCompoundInterest.h"

//Created a constructor to initialize the parameters
YearlyCompoundInterest::YearlyCompoundInterest(double investAmt = 0.0, double monthlyDep = 0.0, int annualInt = 0, int numYears = 0) {
	investAmount = investAmt;
	monthlyDeposit = monthlyDep;
	annualInterest = annualInt;
	numberOfYears = numYears;
}

//Set function in the event I would like to change the value of variable
void YearlyCompoundInterest::SetInvestmentAmount(double investAmt) {
	investAmount = investAmt;
}

//Set function in the event I would like to change the value of variable
void YearlyCompoundInterest::SetMonthlyDeposit(double monthlyDep) {
	monthlyDeposit = monthlyDep;
}

//Set function in the event I would like to change the value of variable
void YearlyCompoundInterest::SetAnnualInterest(int annualInt) {
	annualInterest = annualInt;
}

//Set function in the event I would like to change the value of variable
void YearlyCompoundInterest::SetNumberOfYears(int numYears) {
	numberOfYears = numYears;
}

//Get function in the event I wanted to get a single variable value returned back to me
double YearlyCompoundInterest::GetInvestmentAmount() const {
	return investAmount;
}

//Get function in the event I wanted to get a single variable value returned back to me
double YearlyCompoundInterest::GetMonthlyDeposit() const {
	return monthlyDeposit;
}

//Get function in the event I wanted to get a single variable value returned back to me
int YearlyCompoundInterest::GetAnnualInterest() const {
	return annualInterest;
}

//Get function in the event I wanted to get a single variable value returned back to me
int YearlyCompoundInterest::GetNumberOfYears() const {
	return numberOfYears;
}

//Print function in order to show the Yearly Compound Interest with no montly deposit.
void YearlyCompoundInterest::Print() {
	int i;
	int months = numberOfYears * 12;
	double openingAmount = GetInvestmentAmount();
	double closingBalanceTotal = openingAmount;
	double interestTotal = 0.0;
	int rate = annualInterest;

	cout << "     Balance and Interest Without Additional Monthly Deposits   " << endl;
	cout << "================================================================" << endl;
	cout << setw(5) << right << "Year";
	cout << setw(30) << right << "Year End Balance";
	cout << setw(30) << right << "Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;


	for (i = 1; i <= months; ++i) {
		double interest = ((openingAmount) * ((static_cast<double>(rate) / 100) / 12));
		openingAmount += interest;
		interestTotal += interest;
		closingBalanceTotal += interest;

		if ((i % 12) == 0) {
			int year = i / 12;
			cout << setw(5) << right << year;
			cout << setw(20) << right;
			cout << fixed << setprecision(2) << "$" << closingBalanceTotal;
			cout << setw(20) << right;
			cout << fixed << setprecision(2) << "$" << interestTotal << endl;
			interestTotal = 0.0;
		}
	}
}

//Print function in order to show the Yearly Compound Interest with montly deposit.
void YearlyCompoundInterest::PrintWithDeposit() {

	int i;
	int months = numberOfYears * 12;
	double openingAmount = GetInvestmentAmount();
	double closingBalanceTotal = 0.0;
	double interestTotal = 0.0;
	int rate = GetAnnualInterest();
	double monthlyDep = GetMonthlyDeposit();

	cout << endl;
	cout << "      Balance and Interest With Additional Monthly Deposits     " << endl;
	cout << "================================================================" << endl;
	cout << setw(5) << right << "Year";
	cout << setw(30) << right << "Year End Balance";
	cout << setw(30) << right << "Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;


	for (i = 1; i <= months; ++i) {
		closingBalanceTotal += monthlyDep;
		double interest = ((closingBalanceTotal) * ((static_cast<double>(rate) / 100) / 12));
		closingBalanceTotal += interest;
		interestTotal += interest;

		if ((i % 12) == 0) {
			int year = i / 12;
			cout << setw(5) << right << year;
			cout << setw(20) << right;
			cout << fixed << setprecision(2) << "$" << closingBalanceTotal;
			cout << setw(20) << right;
			cout << fixed << setprecision(2) << "$" << interestTotal << endl;
			interestTotal = 0.0;
		}
	}
}
	
