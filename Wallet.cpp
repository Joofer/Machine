#include "libs/Wallet.h"

Wallet::Wallet()
{
	money = 0;
	holder = "N/A";
}

Wallet::Wallet(long m, string h)
{
	money = m;
	holder = h;
}

void Wallet::SetMoneyValue(long value)
{
	money = value;
}

long Wallet::GetMoneyValue()
{
	return money;
}

void Wallet::TakeMoney(long value)
{
	money -= value;
}

void Wallet::SetHolder(string name)
{
	holder = name;
}

string Wallet::GetHolder()
{
	return holder;
}
