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
	int i=0;
	int total1=0;
	int total2=0;
	int avg;

	if (openfile.is_open())
	{
		while (!openfile.eof())
		{
			openfile >> cars[i].carnum;
			openfile >> cars[i].miles;
			openfile >> cars[i].gallons;

			cout << "Car number: " << cars[i].carnum ;
			cout << " Car miles driven:" << cars[i].miles;
			cout << " Car gallons used " << cars[i].gallons << endl;

			total1 = total1 + cars[i].miles;
			total2 = total2 + cars[i].gallons;
			i++;
		}
	}
	else
	{
	cout <<"Open file failed"<< endl;
	}

	openfile.close();	
	avg=(total1/total2);

	cout<< "Total miles driven: " << total1 << "Total gallons used: " << total2<<endl;
	cout<< "Average miles per gallon for all the cars: " << avg<<endl;

	system ("pause");
	return 0;
}
	

	