#include <iostream>
using namespace std;
int main()
{
	double hours, pay;
	hours = 0;
	cout << "please input your money" << endl;
	cin >> hours;

	if (hours <= 45)
	{
		pay = 10 * hours;
		cout << "Based on the hours you worked your paycheck is $ " << pay << endl;
	}
		
	if (hours >= 46)
	{
	pay = 450 + ((hours-45) * 16);
		cout << "Since you worked over 45 hours your paycheck is $ " << pay << endl;

	}
		
	
	system("pause");
	return 0;
}
			






