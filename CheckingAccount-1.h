#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "BankAccount.h"  //the class definition
using namespace std;
class CheckingAccount : public BankAccount
{
private:
	//declare member variables here
	double transactionFee();
public:
	//declare function prototypes
	CheckingAccount();
	void setTransactionFee(double trFee);
	double getTransactionFee();
	void deposit(double amount);
	void withdraw(double amount);
	void displayData();
}; //end of Checking Account Class

//Member function implementation section
//Implementation code for each funtion prototype declared

CheckingAccount::CheckingAccount() : BankAccount()
//constructor first calls the BankAccount constructor
//then initializes transactionFee
{
	double transactionFee = 1.00;
}
void CheckingAccount::setTransactionFee(double trFee)
{
	trFee;
}
double CheckingAccount::getTransactionFee()
{
	double transactionFee;
	return transactionFee;
}
void CheckingAccount::deposit(double amount) : getBalance()
{
	(amount + balance) - transactionFee;
}
void CheckingAccount::withdraw(double amount) : getBalance()
{
	(amount - balance) - transactionFee;
}
void CheckingAccount::displayData()
{
	//call the displayData function from BankAccount
	BankAccount::displayData();
	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe Checking Account data is\n";
	cout << " Deposit: " << setw(15) << deposit << endl;
	cout << " Withdraw: " << setw(15) << withdraw << endl;
	cout << " Transaction Fee: " << setw(15) << transactionFee << endl;
}