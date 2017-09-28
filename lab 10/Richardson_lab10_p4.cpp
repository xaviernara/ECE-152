#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
struct employee
{
	double number[5];
	double rate[5];
	double hours[5];
	string name[5];
};
int main()
{
	employee input;
	int totalnum = 0;
	double totalrate = 0;
	int totalhours = 0;
	double bigtot = 0;
	int x;
	int totgross[5];
	//string names = input.name[5];
	for (int t = 0; t < 5;t++)
	{
		cout << "Enter the employee's name: " << endl;
		cin >> input.name[t];
		//getline(cin, input.name[t]);
	}
	for (int t = 0;t < 5;t++)
	{
		cout << "Number for employee  " << (t + 1) << ":" << endl;
		cin >> input.number[t];
		//totalnum = totalnum + input.number[t];
	}
	for (int t = 0;t < 5;t++)
	{
		cout << "Rate for employee " << (t+ 1) << ":" << endl;
		cin >> input.rate[t];
		//totalrate = totalrate + input.rate[t];
	}
	for (int t = 0;t < 5;t++)
	{
		cout << "Hours worked by employee  " << (t + 1) << ":" << endl;
		cin >> input.hours[t];
		//totalhours = totalhours + input.hours[t];
	}
	/*for (int t = 0;t < 5;t++)
	{
		cout<< 
	}*/
	cout << "Number      Name      Rate      Hour" << endl;

	for (int t = 0;t < 5;t++)
	{

		totgross[t] = input.hours[t] * input.rate[t];
		cout << input.number[t] << "         " << input.name[t] << "     " << input.rate[t] << "     " << input.hours[t] << "     " << totgross[t] << endl;

		//	cout << "Total gross pay for employee:  " << (t + 1) << "=" << totgross[t] << endl; //"\n";
	}
	//bigtot = ( totalrate) * totalhours;
	for (int t = 0;t < 5;t++)
	{
		bigtot = bigtot + totgross[t];
	
	}
	cout << "Total gross pay for all employees = " << bigtot << endl;
	system("pause");
	return 0;
}