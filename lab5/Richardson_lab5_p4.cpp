#include <iostream>
using namespace std;
double * extend(double*, double*);
double * extend(double* price, double* quantity)
{
	static double foofoo[10];
	for (int i = 0; i < 10; i++)
	{
		foofoo[i] = price[i] * quantity[i];
	}
	return foofoo;
}
int main()
{
	double price[10] = { 10.22, 12.87, 19.31, 64.21, 23.9, 67.27, 91.31, 13.75, 3.99, 51.95 };
	double	quantity[10] = {3, 7, 18, 4, 91, 62, 23, 71, 50, 32};
	double * amount;
	amount = extend(price, quantity);
	cout << "The amount array is as follows \n";
	for (int i = 0; i < 10;i++)
	{
		cout << " || " <<amount[i];

	 }
	cout << "\n";

	

	system("pause");
	return 0;


}
