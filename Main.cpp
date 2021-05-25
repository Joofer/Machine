#include "libs/CoffeeMachine.h"
#include "libs/Wallet.h"

using namespace std;

int main()
{
	Machine* machine1 = new CoffeeMachine();
	Wallet* wallet = new Wallet();

	machine1->SetName("CoffeeMachine X");
	cout << machine1->GetName() << endl;
	wallet->SetMoneyValue(100000);
	cout << "Wallet: " << wallet->GetMoneyValue() << endl;
}