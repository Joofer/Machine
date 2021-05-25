#pragma once

#include <iostream>
#include <cstring>
#include <map>
#include <vector>

using namespace std;

class Machine
{
private:

protected:
	string name;
	map<string, int> items;
	unsigned int money;
public:
	Machine();
	~Machine();
	virtual void SetName(string name);
	virtual string GetName();
	virtual void Add(string item, int value);
	virtual bool Take(string item, int value);
	virtual bool Delete(string item);
	virtual bool Change(string item, int value);
	virtual int Find(string item);
	virtual string Check();
};