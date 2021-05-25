#include "libs/Machine.h"

Machine::Machine()
{
	name = "Unnamed Machine";
	money = 0;
}
Machine::~Machine()
{

}
void Machine::SetName(string n)
{
	name = n;
}
string Machine::GetName()
{
	return name;
}
void Machine::Add(string item, int value)
{
	items.insert({ item, value });
}
bool Machine::Take(string item, int value)
{
	if (items[item])
	{
		if (items[item] >= value)
		{
			items[item] -= value;
			return true;
		}
		else
		{
			return false;
		}
	}
}
bool Machine::Delete(string item)
{
	if (items.count(item))
	{
		items.erase(item);
		return true;
	}
	else
	{
		return false;
	}
}
bool Machine::Change(string item, int value)
{
	if (items.count(item))
	{
		items[item] = value;
		return true;
	}
	else
	{
		return false;
	}
}
int Machine::Find(string item)
{
	if (items.count(item))
	{
		return items[item];
	}
	else
	{
		return -1;
	}
}
string Machine::Check()
{
	for (map<string, int>::iterator i = items.begin(); i != items.end(); i++)
	{
		if (i->second <= 0)
		{
			return i->first;
		}
	}
	return "";
}