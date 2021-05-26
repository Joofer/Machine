#pragma once

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "MachineItem.h"

using namespace std;

class Machine
{
private:

protected:
	string name;
	vector<MachineItem> items;
	unsigned int money;
public:
	Machine();
	~Machine();
	virtual void SetName(string name);
	virtual string GetName();
	virtual void Add(MachineItem item);
	virtual void Add(vector<MachineItem>::iterator start, vector<MachineItem>::iterator end);
	virtual bool Take(string item);
	virtual bool Delete(string item);
	virtual bool Change(string item, int value);
	virtual int Find(string item);
	virtual MachineItem FindItem(string item);
	virtual string Check();
};