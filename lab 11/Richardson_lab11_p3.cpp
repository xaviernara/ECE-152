#include <iostream>
#include <fstream>

using namespace std;
struct vechile
{
	int carnum;
	int miles;
	int gallons;
};

int main()
{
	vechile  cars[5];
	ifstream openfile; //for reading a file also ifstream is like a type (i.e int, double, etc...) 
	openfile.open("car.txt");
	int i = 0;
	int t = 0;
	int total1 = 0;
	int total2 = 0;
	int mpg;
	double mpgtotal = 0;
	double avg;

	if (openfile.is_open())
	{
		while (!openfile.eof())
		{
			openfile >> cars[i].carnum >> cars[i].miles >> cars[i].gallons;
			//openfile >> cars[i].miles;
			//openfile >> cars[i].gallons;
			cout << "Car number: "  << cars[i].carnum << endl;
			cout << " Car miles driven:" << cars[i].miles << endl;
			cout << " Car gallons used "  << cars[i].gallons << endl;
			mpg = cars[i].miles / cars[i].gallons;
			cout << "Miles per gallon for car is: " << mpg << endl;
			total1 = total1 + cars[i].miles;
			total2 = total2 + cars[i].gallons;
			mpgtotal = mpgtotal + mpg;
			i++;
		}
	}
	else
	{
		cout << "Open file failed" << endl;
	}

	openfile.close();
	avg = (mpgtotal/5);

	cout << "Total miles driven: " << total1 << "\nTotal gallons used: " << total2 << endl;
	cout << "Average miles per gallon for all the cars: " << avg << endl;

	system("pause");
	return 0;
}


