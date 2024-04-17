#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

int main(){
	string name;
	double price;
	int quantity;
	ItemToPurchase i1, i2;
	cout << "Item 1\nEnter the item name:" << endl;
	getline(cin, name);
	i1.SetName(name);
	cout << "Enter the item price:" << endl;
	cin >> price;
	i1.SetPrice(price);
	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	i1.SetQuantity(quantity);
	cin.ignore();

	cout << "\nItem 2\nEnter the item name:" << endl;
	getline(cin, name);
	i2.SetName(name);
	cout << "Enter the item price:" << endl;
	cin >> price;
	i2.SetPrice(price);
	cout << "Enter the item quantity:" << endl;
	cin >> quantity;
	i2.SetQuantity(quantity);

	cout << "\nTOTAL COST" << endl;
	cout << i1.GetName() << ' ' << i1.GetQuantity() << " @ $" << i1.GetPrice() << " = $" << i1.GetPrice() * i1.GetQuantity() << endl;
	cout << i2.GetName() << ' ' << i2.GetQuantity() << " @ $" << i2.GetPrice() << " = $" << i2.GetPrice() * i2.GetQuantity() << endl;
	cout << "\nTotal: $" << i1.GetPrice() * i1.GetQuantity() + i2.GetPrice() * i2.GetQuantity() << endl;

	return 0;
}
