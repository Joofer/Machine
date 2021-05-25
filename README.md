# Wending Machine Libraries
This is a pack of libraries made to create and test wending machine.
It contains of multiple wending machine types:
+ Coffee Machine
+ Beverage Machine
+ Wending Machine
______
# Basic usage
To create a machine type ```Machine* machine1 = new BeverageMachine();```.
Now we have a machine of type ```BeverageMachine``` and we can control it with some of the functions below:
``` C++
machine1->SetName("some name"); // Set the name for created machine
machine1->GetName(); // Returns the name of machine. Default name is "Unnamed Machine"
machine1->Check(); // Check if all of the ingredients needed are in sufficient quantity. Returns the string containing ingredient name which is missing and "" if there are enough ingredients
```
# Full list of functions
Machine() - Create a new machine
CoffeeMachine(), BeverageMachine(), WendingMachine() - Create a new specific machine
| Set | Get |
|----------------|---------|
| SetName(string) - Set name for machine. Arguments: name | GetName() - Get name of machine. Return: string |
| Add(string, int) - Add a new item to machine. Arguments: item, value (count) | Find(string) - Get item's value (count). Arguments: name. Return: int |
| Take(string, int) - Take some items. Arguments: item, value (count). Return: true/false (bool) | Check() - Check ingredients to be in an enough amount. Return: string (which of the ingredients is missing, key of items map) |
| Delete(string) - Delete an item. Arguments: name. Return true/false (bool) |  |
| Change(string, int) - Change item count. Arguments: item, value (count). Return: true/false (bool) |  |
______
# TO DO
+ Buy system
