#include <iostream>
using namespace std;
int main()
{
	double prices[7] = { 12.11, 12.61, 19.42, 16.78, 8.28, 13.33, 19.16 };
	for (int i = 0; i < 7;i++)
	{
		*prices = prices[i];
		cout << *prices << ", ";
	}
	system("pause");
	return 0;
}