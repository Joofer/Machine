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
