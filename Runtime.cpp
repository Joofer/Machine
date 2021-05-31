#include "libs\Runtime.h"

RuntimeListener::RuntimeListener()
{

}


int RuntimeListener::Buy(Wallet* wallet, Machine* machine, string item)
{
	if (machine->Find(item) != -1)
	{
		if (wallet->GetMoney() < machine->FindItem(item).GetPrice())
		{
			return 1;
		}
		else
		{
			machine->Take(item);
			wallet->TakeMoney(machine->FindItem(item).GetPrice());
			return -1;
		}
	}
	else
	{
		return 0;
	}
}

void RuntimeListener::ThrowError(Error error)
{
	cout << "Error: ";
	switch (error)
	{
	case Error::NOT_FOUND:
		cout << "Item not found." << endl;
		break;
	case Error::NO_MONEY:
		cout << "Not enough money" << endl;
		break;
	default:
		cout << "Error while processing." << endl;
		break;
	}
}

void RuntimeListener::PrintMoney(Wallet* wallet)
{
	cout << "You have " << wallet->GetMoney() << endl;
}

void RuntimeListener::PrintSubtraction(MachineItem* item)
{
	cout << " - " << item->GetPrice() << endl;
}

void RuntimeListener::PrintMain()
{
	cout << "=====================================" << endl
		<< "C\tBuy a cup of coffee" << endl
		<< "H\tBuy a cup of hot chocolate" << endl
		<< "" << endl
		<< "x\tExit coffee machine" << endl
		<< "=====================================" << endl;
}

void RuntimeListener::PrintCoffee(Machine* machine)
{
	cout << "=====================================" << endl
		<< "espresso\tBuy a cup of espresso\t" << machine->FindItem("espresso").GetPrice() << endl
		<< "americano\tBuy a cup of americano\t" << machine->FindItem("americano").GetPrice() << endl
		<< "cappuccino\tBuy a cup of cappuccino\t" << machine->FindItem("cappuccino").GetPrice() << endl
		<< "latte   \tBuy a cup of latte\t" << machine->FindItem("latte").GetPrice() << endl;
}