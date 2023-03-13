#include <iostream>
#include <string>

class RetailItem
{
private:
	std::string description;
	int unitsOnHand;
	double price;

public:
	
	RetailItem() {
		description = "<Empty>";
		unitsOnHand = 0;
		price = 0;
	}

	RetailItem(std::string desc, int qty, double cost) {
		description = desc;
		unitsOnHand = qty;
		price = cost;
	}

	std::string getDescription() { return description; }
	int getUnits() { return unitsOnHand; }
	double getPrice() { return price;	}
	
	void SetDescription(std::string desc) { description = desc; }
	void SetUnits(int qty) { unitsOnHand = qty; }
	void SetPrice(double cost) { price = cost; }
};

int main()
{

	
	RetailItem Items[6];

	// like this...
	Items[0].SetDescription("Jacket");
	Items[0].SetUnits(12);
	Items[0].SetPrice(59.95);

    Items[1].SetDescription("Designer Jeans");
	Items[1].SetUnits(40);
	Items[1].SetPrice(34.95);

    Items[2].SetDescription("Shirt");
	Items[2].SetUnits(20);
	Items[2].SetPrice(24.95);

	
	RetailItem Item1("Jacket", 12, 59.95);
	RetailItem Item2("Designer Jeans", 20, 20);
	RetailItem Item3("Shirt",20, 24.95);

	
	for (int i = 0; i <= 2; i++)
		std::cout << "Item: " << Items[i].getDescription() << ", Qty: " <<
		Items[i].getUnits() << ", Price: " << Items[i].getPrice() << std::endl;

	
	std::cout << std::endl << "Item: " << Item1.getDescription() << ", Qty: " <<
		Item1.getUnits() << ", Price: " << Item1.getPrice() << std::endl;

	return 0;
}