#include "libs/CoffeeMachine.h"

CoffeeMachine::CoffeeMachine()
{
	coffee_ingredients = {
	{"coffee_beans", 0},
	{"milk", 0},
	{"sugar", 0},
	{"water", 0}
	};
}
bool CoffeeMachine::Take(MachineItem item)
{
	if (Check() == "")
	{
		for (map<string, int>::iterator i = item.ingredients_needed.begin(); i != item.ingredients_needed.end(); i++)
		{
			coffee_ingredients[i->first] -= i->second;
		}
		return true;
	}
	else
	{
		return false;
	}
}
bool CoffeeMachine::AddIngredient(string ingredient, int value)
{
	if (coffee_ingredients.count(ingredient))
	{
		coffee_ingredients[ingredient] += value;
		return true;
	}
	else
	{
		return false;
	}
}
bool CoffeeMachine::TakeIngredient(string ingredient, int value)
{
	if (coffee_ingredients.count(ingredient))
	{
		if (coffee_ingredients[ingredient] >= value)
		{
			coffee_ingredients[ingredient] -= value;
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
string CoffeeMachine::Check()
{
	for (vector<MachineItem>::iterator i = items.begin(); i != items.end(); i++)
	{
		if (i->GetQuantity() <= 0)
			return i->Get();
	}
	for (map<string, int>::iterator i = coffee_ingredients.begin(); i != coffee_ingredients.end(); i++)
	{
		if (i->second <= 0)
		{
			return i->first;
		}
	}
	return "";
}