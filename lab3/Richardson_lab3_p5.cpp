#include <iostream> 
using namespace std;
int main()
{
	double deposit, cash, years,interest;
	cout << "Please enter the amount you would like to deposit and your interest rate: " << endl;
	cin >> deposit;
	cin >>interest;
	cash = deposit;

	for (years = 1; years <= 10; years++)
	{
		cash = cash + (cash* interest/100);
		cout << "Year " << years << "\nThe amount of cash available is " << cash << endl;
	}

	system("pause");
	return 0;
}
