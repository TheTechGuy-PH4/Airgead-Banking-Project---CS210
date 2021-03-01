//#pragma once
#ifndef YearlyCompoundInterest_H
#define YearlyCompoundInterest_H

//This is the decleration of the YearlyCompoundInterest class
using namespace std;

class YearlyCompoundInterest
{
	public:
		YearlyCompoundInterest(double investAmt, double monthlyDep, int annualInt, int numYears);
		void SetInvestmentAmount(double investAmt);
		void SetMonthlyDeposit(double monthlyDep);
		void SetAnnualInterest(int annualInt);
		void SetNumberOfYears(int numYears);
		double GetInvestmentAmount() const;
		double GetMonthlyDeposit() const;
		int GetAnnualInterest() const;
		int GetNumberOfYears() const;
		void Print();
		void PrintWithDeposit();

	private:
		double investAmount;
		double monthlyDeposit;
		int annualInterest;
		int numberOfYears;
};

#endif
