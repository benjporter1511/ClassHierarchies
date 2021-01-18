#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
	: Savings_Account{ name,balance,int_rate }, number_of_withdrawals{ 0 } {
}

std::ostream& operator<<(std::ostream& os, const Trust_Account& account) {
	os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, " << account.number_of_withdrawals << "]";
	return os;
}

bool Trust_Account::deposit(double amount) {
	if (amount >= 5000.0) {
		amount += 50.0;
	}
	return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if (number_of_withdrawals >= 4 || amount >= (balance * 0.2)) {
		return false;
	}
	else {
		++number_of_withdrawals;
		return Savings_Account::withdraw(amount);
	}
}