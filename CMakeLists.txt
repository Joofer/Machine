# CMakeList.txt : CMake project for Machine, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Machine")

# Add source to this project's executable.
add_executable (Machine   "Machine.cpp" "libs/Machine.h" "libs/Wallet.h" "Main.cpp" "Wallet.cpp" "libs/CoffeeMachine.h" "libs/WendingMachine.h" "CoffeeMachine.cpp" "WendingMachine.cpp" "libs/Runtime.h" "Runtime.cpp" "MachineItem.cpp" "libs/MachineItem.h")

# TODO: Add tests and install targets if needed.
