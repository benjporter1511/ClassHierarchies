#pragma once
#include "Savings_Account.h"
class Trust_Account : public Savings_Account
{
	friend std::ostream& operator<<(std::ostream& os, const Trust_Account& account);
private:
	static constexpr const char* def_name = "Unnamed Savings Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
	static constexpr int def_number_of_withdrawals = 0;
protected:
	int number_of_withdrawals;
public:
	Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
	bool deposit(double amount);
	bool withdraw(double amount);
};

