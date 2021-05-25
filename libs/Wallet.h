#pragma once

#include <iostream>
#include <string>

using namespace std;

class Wallet
{
private:
	long money;
	string holder;
public:
	Wallet();
	Wallet(long m, string h);
	void SetMoneyValue(long value);
	long GetMoneyValue();
	void TakeMoney(long value);
	void SetHolder(string name);
	string GetHolder();
};