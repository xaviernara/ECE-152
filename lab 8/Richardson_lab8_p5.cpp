#include <iostream>
#include <string>
using namespace std;
struct bikes
{
	double bikenum[5] = { 17, 21 ,42,57,69 };
	double miles[5] = { 1230, 3660 ,1771,2960,2113 };
	double gallons[5] = { 60,139,64,101,76 };

};
int main()
{
	bikes input;
	double totalmiles = 0;
	double totalgallons = 0;
	double bigavg;
	for (int t = 0;t < 5;t++)
	{
		cout << "Motorcycle Number for  "<< (t+1) << ":"<< input.bikenum[t] << endl;
		totalmiles = totalmiles + input.bikenum[t];
	}
	for (int t = 0;t < 5;t++)
	{
		cout << "Miles driven by motorcycle " << (t+1) << ":"<< input.miles[t] << endl;
		totalgallons = totalgallons + input.miles[t];
	}
	for (int t = 0;t < 5;t++)
	{
		cout << "Gallons used by motorcycle  " << (t + 1) << ":" << input.gallons[t] << endl;
	}
	for (int t = 0;t < 5;t++)
	{
		cout << "Miles per gallon for motorcyle " << (t + 1) << "=" << (input.miles[t] / input.gallons[t]) << endl; //"\n";
	}
	bigavg = totalmiles / totalgallons;
	cout << "Avg Miles per gallon for all motorcyles = " << bigavg << endl; 
	system("pause");
	return 0;
}