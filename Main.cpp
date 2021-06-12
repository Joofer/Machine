#include "libs/CoffeeMachine.h"
#include "libs/Wallet.h"
#include "libs/Runtime.h"

using namespace std;

int main()
{
	RuntimeListener* runtime = new RuntimeListener();
	Machine* machine = new CoffeeMachine();
	Wallet* wallet = new Wallet();
	MachineItem* temp_item;
	map<string, int> temp_ingredients;
	vector<MachineItem> items;
	string action = "";
	int error;

	wallet->SetMoney(100);

	temp_ingredients = { {"coffee_beans", 1}, {"water", 1} };
	temp_item = new MachineItem("espresso", 10, 1.19, temp_ingredients.begin(), temp_ingredients.end());
	items.push_back(*temp_item);
	delete temp_item;
	temp_ingredients = { {"coffee_beans", 1}, {"water", 2} };
	temp_item = new MachineItem("americano", 10, 1.99, temp_ingredients.begin(), temp_ingredients.end());
	items.push_back(*temp_item);
	delete temp_item;
	temp_ingredients = { {"coffee_beans", 1}, {"water", 1}, {"milk", 2} };
	temp_item = new MachineItem("cappuccino", 10, 4.99, temp_ingredients.begin(), temp_ingredients.end());
	items.push_back(*temp_item);
	delete temp_item;
	temp_ingredients = { {"coffee_beans", 1}, {"milk", 2} };
	temp_item = new MachineItem("latte", 10, 4.99, temp_ingredients.begin(), temp_ingredients.end());
	items.push_back(*temp_item);
	delete temp_item;
	machine->Add(items.begin(), items.end()); // Loading coffee machine

	while (action[0] != 'x')
	{
		runtime->PrintMain();
		cin >> action;

		switch (action[0])
		{
		case 'C':
			runtime->PrintCoffee(machine);
			cin >> action;
			error = runtime->Buy(wallet, machine, action);
			if (error != -1)
				runtime->ThrowError(Error(error));
			else
				runtime->PrintSubtraction(&machine->FindItem(action));
			runtime->PrintMoney(wallet);
			break;
		case 'H':
			break;
		default:
			break;
		}
	}
}