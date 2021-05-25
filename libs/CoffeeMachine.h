#pragma once

#include "Machine.h"

class CoffeeMachine : public Machine
{
private:
	map<string, int> coffee_ingredients;
public:
	CoffeeMachine();
	bool AddIngredient(string ingredient, int value);
	bool TakeIngredient(string ingredient, int value);
	string Check();
};