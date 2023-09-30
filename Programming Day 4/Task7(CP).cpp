#include <iostream>
using namespace std;
void flower(float price);
main (){
	int redRose;
	cout << "Red Rose: ";
	cin >> redRose;
	float price1;
	price1 = redRose * 2;
	int whiteRose;
	cout << "White Rose: ";
	cin >> whiteRose;
	float price2;
	price2 = whiteRose * 4.10;
	int tulips;
	cout << "Tulips: ";
	cin >> tulips;
	float price3;
	price3 = tulips * 2.50;
	float totalPrice;
	totalPrice = price1 + price2 + price3;
	cout << "Original Price: $" << totalPrice << endl;
	flower(totalPrice);
}
void flower(float price)
{
	if(price > 200)
   {
	float finalPrice;
	finalPrice = (price - (price*0.2));
	cout << "Price after Discount: $" << finalPrice;
   }
	if(price < 200)
   {
	cout << "No discount applied.";
   }
}

	

	