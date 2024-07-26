# Project Overview
This project implements a simple store management system in C++. 

## Project structure:
The project is structured as follows:
- store.h: containing the declaration of the store class
- store.cpp: containing the method definition of the class.
- main.cpp: containing the main function.

## Store class functions:
The store class has the following functions:
- isOpen(): checks if the store is open
- setOpen(): specifies if the store is opened or closed
- GetPrice(): returns the price of the item
- SetPrice(): set price of the item
- GetStock(): returns the stock amount of the item
- SetStock(): sets the stock amount of the item
- AddStock(): adds a specified amount of stock
- RemoveStock(): removes a specified amount of stock 
- BuyItem(): simulates a client buying items

## Compiling and running the code:
To compile the code write this command:
```bash
g++ -o store store.cpp main.cpp
```

To run the code write this command:
```bash
./store
```

