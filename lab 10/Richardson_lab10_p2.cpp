#include <iostream>
//#include<time.h>
using namespace std;
struct  date
{
	int month;
	int day;
	int year;
};
void greaterthan(date *,int &);
void greaterthan(date * input,int &dif)
{
	//int greater;
	//int start_dif = 0;
	int dif1 = 0;
	int dif2 = 0;
	date tempdate;
	tempdate.month = 1;
	tempdate.day = 1;
	tempdate.year = 1;

	for (int i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			dif1 = ((input[i].month - tempdate.month) * 30) + ((input[i].day - tempdate.day) * 1) + ((input[i].year - tempdate.year) * 360);
			//cout << "First month:"<< input[i].month;
			//cout << "day 1 is Greater";

		}
		if (i == 1)
		{
			dif2 = (input[i].month - tempdate.month) * 30 + (input[i].day - tempdate.day) * 1 + (input[i].year - tempdate.year) * 360;
			//cout << "day 2 is Greater";
		}
	}


	if (dif1 > dif2)
	{
		//greater = 0;
		//start_dif = dif1;
		dif = dif1 - dif2;
		//cout << "day 1 is Greater";
	}
	else if (dif2 > dif1)
	{
		//greater = 1;
		//start_dif = dif2;
		dif = dif2 - dif1;
		//cout << "day 2 is Greater";
	}



	//return greater;
}
void difdays(date * user_date)
{
	int diff;
	int greatest;
    greaterthan(user_date,diff);
	
	cout << "This is the difference between your two days: " << diff << " days." << endl;
	//for (int i = 0;i < 2;i++)
	//{
	//	if (greatest ==  0)
	//	{
			//diff = (((month1[i - 1] - 1) * 30) + (year1[i - 1] * 360) + (day1[i - 1] - 1)) - (((month1[1 - i] - 1) * 30) + (year1[1 - i] * 360) + (day1[1 - i] - 1));
			
	/*	}
		if (greatest == 1)
		{*/
			//diff = (((month1[1 - i] - 1) * 30) + (year1[1 - i] * 360) + (day1[1 - i] - 1)) - (((month1[i - 1] - 1) * 30) + (year1[i - 1] * 360) + (day1[i - 1] - 1));
		/*	cout << "This is the difference between your two days: " << diff << "days." << endl;
		}*/
	//}
	/*for (int i = 0;i < 2;i++)
	{
		if (month1[i - 1] && day1[i - 1] && year1[i - 1] > month1[1 - i] && day1[1 - i] && year1[1 - i])
		{
			diff[i] = (((month1[i - 1] - 1) * 30) + (year1[i - 1] * 360) + (day1[i - 1] - 1)) - (((month1[1 - i] - 1) * 30) + (year1[1 - i] * 360) + (day1[1 - i] - 1));
			cout << "This is the difference between your two days: " << diff[i] << "days." << endl;
		}
		if (month1[1 - i] && day1[1 - i] && year1[i - 1] > month1[i - 1] && day1[i - 1] && year1[i - 1])
		{
			diff[i] = (((month1[1 - i] - 1) * 30) + (year1[1 - i] * 360) + (day1[1 - i] - 1)) - (((month1[i - 1] - 1) * 30) + (year1[i - 1] * 360) + (day1[i - 1] - 1));
			cout << "This is the difference between your two days: " << diff[i] << "days." << endl;
		}
	}*/
	//return diff;
}

int main()
{
	date days[2];

	//cout << "Please enter the 1st and 2nd month number  : " << '\n';
	for (int i= 0;i < 2;i++)
	{
		cout << "Please enter month"<<i + 1<<" thats <= 12: " << '\n';
		cin >> days[i].month;
		if (days[i].month > 13)
		{
			int tempmonth = 1;
			cout << "Invalid input: ";
			//validity check for month input
			while (tempmonth = 1)
			{
				cout << "/nPlease enter a month/months thats <= 12:" << endl;
				cin >> days[i].month;
				if (days[i].month < 13)
				{
					//tempmonth = 0;
					break;
				}

			}
		
		}

	}

	
	for (int i= 0;i < 2;i++)
	{
		cout << "Please enter year "<<i + 1<< '\n';
        cin >> days[i].year;
	}
	
	for (int i=0;i < 2;i++)
	{
		
		//system("pause");
		
		cout << "Please enter day "<<i + 1<<" that is less than 31 : " << '\n';
		 cin >> days[i].day;
		 if (days[i].day > 31)
		 {
			 int tempday = 1;
			 cout << "Invalid input: ";
			 //validity check for month input
			 while (tempday = 1)
			 {
				 cout << "/nPlease enter day " << i + 1 << " that is less than 31 : " << endl;
				 cin >> days[i].day;
				 if (days[i].day < 31)
				 {
					 
					 break;
				 }
			 }
		 }
	}

	difdays(days);

/*
	int monthtime = (days.month - 1) * 30;
	int yeartime = (days.year - 1900) * 360;
	int daytime = days.day - 1;
	int totoal_days = monthtime + yeartime + daytime;

	cout << "This is how many days from January 1, 1900 your date is: " << totoal_days << endl;
 */
	system("pause");
	return 0;
}