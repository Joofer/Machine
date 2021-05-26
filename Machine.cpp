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
void Machine::Add(MachineItem item)
{
	items.push_back(item);
}
void Machine::Add(vector<MachineItem>::iterator start, vector<MachineItem>::iterator end)
{
	items.insert(items.end(), start, end);
}
bool Machine::Take(string item)
{
	if (FindItem(item).Get() != "N/A")
	{
		if (FindItem(item).GetQuantity() >= 1)
		{
			FindItem(item).DecreaseQuantity();
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
bool Machine::Delete(string item)
{
	if (Find(item) != -1)
	{
		for (vector<MachineItem>::iterator i = items.begin(); i != items.end(); i++)
		{
			if (i->Get() == item)
			{
				items.erase(i);
				break;
			}
		}
		return true;
	}
	else
	{
		return false;
	}
}
bool Machine::Change(string item, int value)
{
	if (Find(item) != -1)
	{
		FindItem(item).SetQuantity(value);
		return true;
	}
	else
	{
		return false;
	}
}
int Machine::Find(string item)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i].Get() == item)
		{
			return i;
		}
	}
	return -1;
}
MachineItem Machine::FindItem(string item)
{
	map<string, int> tmap = { };
	MachineItem* temp = new MachineItem("N/A", -1, -1);

	for (int i = 0; i < items.size(); i++)
	{
		if (items[i].Get() == item)
		{
			return items[i];
		}
	}
	return *temp;
}
string Machine::Check()
{
	for (vector<MachineItem>::iterator i = items.begin(); i != items.end(); i++)
	{
		if (i->GetQuantity() <= 0)
			return i->Get();
	}
	return "";
}