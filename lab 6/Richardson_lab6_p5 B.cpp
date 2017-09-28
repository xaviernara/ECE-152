#include <iostream>
using namespace std;
double show(double*);
double show(double *x[9])
{
	for (int i = 0;i < 9;i++)
	{
		cout << &x[i] << "||";
	}
	return &x;
}

int main()
{
	double rates[9] = { 6.5, 7.2,7.5,8.7, 8.6,9.4,9.6,9.8,10.6 };
	int x;
	x=show(&rates);
	system("pause");
	return 0;
}
