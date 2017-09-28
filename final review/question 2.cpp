#include <iostream>
using namespace std;
void larger (int day, int  month,int year, int day2, int month2, int year2)
{
    int xday;
    int ymonth;
    int zyear;
    if ( day > day2)
    {
        xday=day;
    }
    else
    {
         xday=day2;
    }
    if ( month > month2)
    {
        ymonth=month;
    }
     else
    {
         ymonth=month2;
    }
     if ( year > year2)
    {
        zyear=year;
        cout<< "The larger date is the first one "<<endl; 
    }
     else
    {
         zyear=year 2;
         cout<< "The larger date is the second one "<<endl;
    }
    if (year == year2)
    {
        cout << "The dates are the same so... no one is larger"<< endl;
        
    }
}

struct date
{
    int day;
    int month;
    int year;
    int day2;
    int month2;
    int year2;
};
int main()
{
	//Write a function called larger() that returns the latter of any two dates passed to it. For
    //example, if the dates 10/9/2005 and 11/3/2005 were passed to larger(), the second date would be
    //returned. Date structure:
    date input;
    cout << "Please enter day 1: "<< endl;
    cin >> input.day;
    cout << "Please enter day 2: "<< endl;
    cin >> input.day2;
    cout << "Please enter month 1: "<< endl;
    cin >> input.month;
    cout << "Please enter month 2: "<< endl;
    cin >> input.month2;
    cout << "Please enter year 1: "<< endl;
    cin >> input.year;
    cout << "Please enter year 2: "<< endl;
    cin >> input.year2;
    
    
    system ("pause");
	return 0;
}
