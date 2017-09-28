#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int pop, Year;
	cout << "Enter the year :" << endl;
	cin >> Year;
	pop = 6.0*exp(0.02*(Year - 2000));
	cout << pop<< endl;
	system("pause");
	return 0;
 }