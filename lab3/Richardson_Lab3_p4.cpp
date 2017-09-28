#include <iostream> 
using namespace std;
int main()
{
	double deposit, cash, years;
	deposit = 3000;
	cash = deposit;

	for (years = 1 ; years <= 10 ; years++)
	{
		cash = cash + (cash*0.054);
		cout << "Year "<<years << "\nThe amount of cash available is " << cash<< endl;
	}

	system("pause");
	return 0;
}
