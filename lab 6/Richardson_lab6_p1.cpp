#include <iostream>
using namespace std;
int main()
{
	int grade[2][4];
	int total1 = 0;
	int total2 = 0;
	int ingrade1[4];
	int ingrade2[4];
	double avg1;
	double avg2;

	for (int y = 0; y < 4; y++)
	{
		cout << "Please enter numbers into the array" << endl;
		cin >> ingrade1[y];
		total1 = total1 + ingrade1[y];
	}
	avg1 = total1 / 4.0;

	for (int y = 0; y < 4; y++)
	{
		cout << "Please enter numbers into the array" << endl;
		cin >> ingrade2[y];
		total2 = total2 + ingrade2[y];

	}
	avg2 = total2 / 4.0;

	for (int i = 0; i < 2; i++)
	{
		for (int y = 0; y < 4; y++)
		{
			if (i == 0)
			{
				grade[i][y] = ingrade1[y];
			}
			if (i == 1)
			{
				grade[i][y] = ingrade2[y];
			}
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int y = 0; y < 4; y++)
		{
			cout << " || " << grade[i][y];
		
		}
			cout << "\n";
	}	
	cout << "The average for the first row is " << avg1 << endl;
	cout << "The average for the second row is " << avg2 << endl;
	system("pause");
	return 0;
}