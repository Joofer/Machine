#pragma once

#include "Wallet.h"
#include "CoffeeMachine.h"
#include "BeverageMachine.h"
#include "WendingMachine.h"

using namespace std;

enum class Error
{
	NOT_FOUND,
	NO_MONEY
};

class RuntimeListener
{
private:
public:
	RuntimeListener();
	int Buy(Wallet* wallet, Machine* machine, string item);
	void ThrowError(Error error);
	void PrintMoney(Wallet* wallet);
	void PrintSubtraction(MachineItem* item);
	void PrintMain();
	void PrintCoffee(Machine* machine);
};