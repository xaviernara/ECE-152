#include <iostream>
using namespace std;
void extend(double *, double *, double *);
void extend(double *quant, double *prices, double *amounts)
{
	for (int i=0; i < 10; i++)
	{
		cout << quant[i] << "||";
	}
	for (int x=0; x < 10; x++)
	{
		cout << prices[x] << "||";
	} 
	for (int y=0; y < 10; y++)
	{
		*(amounts + y) = *(prices+y)**(quant+y); //notation used when you want to multiply the elments of other arrays and populate another array using pointers 
	}
}
int main()
{
	double price[10] = { 10.24, 12.83, 13.71, 67.31, 21.8, 63.16, 97.13, 17.71, 3.99, 68.26 }; 
	double quantity[10] = { 3,9,13,4,91,67,30,68,45,71 };
	double amount[10] = { 0 };
	extend(price, quantity, amount);
	cout << endl;
	for (int y=0; y < 10; y++)
	{
		cout << amount[y] << "||";
	}
	system("pause");
	return 0;

	
}