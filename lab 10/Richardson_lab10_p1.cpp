#include <iostream>
//#include<time.h>
using namespace std;
struct  date
{ 
int month; 
int day;
int year; 
};

int main()
{	
	date days;
	//time_t  rawtime;
	//days.month = tm.mon;
	//days.day= tm.mday;
	//days.year= tm.year;
	cout << "Please enter a month number: " << endl;
	cin >> days.month;

	if (days.month >= 13)
	{
		cout << "Please enter a month thats <= 12: " << endl;
		cin >> days.month;
	}
	


	cout << "Please enter a day: " << endl;
	cin >> days.day;
	if (days.day >= 31 )
	{
		cout << "Please enter a day of the year thats <= 30." << endl;
		cin >> days.day;
	}
	

	cout << "Please enter a year: " << endl;
	cin >> days.year;
	if ( days.year <= 1900)
	{
		cout << "Please enter a year thats greater than 1900. : " << endl;
		cin >> days.year;
	}
	

	int monthtime = (days.month -1)*30;
	int yeartime = (days.year - 1900) * 360;
	int daytime = days.day -1;
	int totoal_days = monthtime + yeartime + daytime;

	cout << "This is how many days from January 1, 1900 your date is: " << totoal_days<< endl;
	system("pause");
	return 0;
}