/*
#include <iostream>
using namespace std;
int main()
{
	int digits[9] = { 1,2,3,4,5,6,7,8,9 };
	int j = 0;
	int *pt = digits;
	for (int j = 0; j <= 8; j++) 
	{
		for (int i=0;i <= 8-j ;i++)
		{
			
		}
	}
	return 0;
	system("pause");
}

*/

#include <iostream>
using namespace std;
int main()
{
	int digits[9] = {1,2,3,4,5,6,7,8,9}, coef = 1, space, i, j;
	cout << "Enter number of rows: ";
	cin >> rows;
	for (i = 0;i < rows;i++)
	{
		for (space = 1;space <= rows - i;space++)
			cout << "  ";
		for (j = 0;j <= i;j++)
		{
			if (j == 0 || i == 0)
				coef = 1;
			else
				coef = coef*(i - j + 1) / j;
			cout << "    " << coef;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}