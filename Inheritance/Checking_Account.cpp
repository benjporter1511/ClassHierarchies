#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
	: Account{ name,balance } {
}

std::ostream& operator<<(std::ostream& os, const Checking_Account& account) {
	os << "[Checking_Account: " << account.name << ": " << account.balance << "]";
	return os;
}

bool Checking_Account::withdraw(double amount) {
	amount += withdraw_fee;
	return Account::withdraw(amount);
}
