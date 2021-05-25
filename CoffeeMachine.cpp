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
bool CoffeeMachine::AddIngredient(string ingredient, int value)
{
	if (coffee_ingredients[ingredient])
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
	if (coffee_ingredients[ingredient])
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
}
string CoffeeMachine::Check()
{
	for (map<string, int>::iterator i = items.begin(); i != items.end(); i++)
	{
		if (i->second <= 0)
		{
			return i->first;
		}
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