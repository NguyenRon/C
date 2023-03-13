#include <iostream>
using namespace std;

class Inventory
{
	private:
		int itemNumber;
		int quantity;
		double cost;
	    double totalCost;
	public:
		Inventory()
		{
			itemNumber = 0;
			quantity = 0;
			cost = 0;
			totalCost = 0;

		}
		Inventory(int itemNumber, int quantity, double cost)
		{
			itemNumber = getItemNumber();
			quantity = getQuantity();
			cost = getCost();
			setTotalCost(quantity, cost);
		}

		void setItemNumber(int)
		{
			itemNumber = itemNumber;
		}
		void setQuantity(int)
		{
			quantity = quantity;
		}
		void setCost(double)
		{
			cost = cost;
		}
		void setTotalCost(int, double)
		{
			totalCost = quantity * cost;
		}

		int getItemNumber()
		{
			return itemNumber;
		}
		int getQuantity()
		{
			return quantity;
		}
		double getCost()
		{
			return cost;
		}
		double getTotalCost()
		{
			return totalCost;
		}
};


	int main()
{
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;

	cout << "Enter the Item Number: ";
	cin >> itemNumber;
	while (itemNumber < 0)
	{
		cout << "Please enter a positive value for the Item Number: ";
		cin >> itemNumber;
	}
	cout << "Enter the Quantity of the item: ";
	cin >> quantity;
	while (quantity < 0)
	{
		cout << "Please enter a positive value for the Quantity of the item: ";
		cin >> quantity;
	}
	cout << "Enter the Cost of the item: ";
	cin >> cost;
	while (cost < 0)
	{
		cout << "Please enter a positive value for the Cost of the item: ";
		cin >> cost;
	}

	Inventory information(itemNumber, quantity, cost);

	totalCost = information.getTotalCost();
	itemNumber = information.getItemNumber();
	cost = information.getCost();
	quantity = information.getQuantity();
	cout << "The Item Number is: " << itemNumber << endl;
	cout << "The Quantity is: " << quantity << endl;
	cout << "The Cost is: " << cost << endl;
	cout << "The Total Cost is: " << totalCost << endl;
	
	return 0;
}