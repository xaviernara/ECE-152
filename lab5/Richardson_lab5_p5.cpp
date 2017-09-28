#include<iostream>
using namespace std;
void inraw(double*);
double inraw(double raw, double sorted)
{
	double goose[10] = { 0 };
	double unsorted1 [10] = { 0 };
	double unsorted2[10] = { 0 };
	double insort[10] = { 0 };

		for (int x = 0; x < 10; x++)
		{
			goose[10] = unsorted1[x];
			for (int y = x + 1; y < 10; y++)
			{
				if (goose > unsorted2[y])
				{
					unsorted1[x] = unsorted2[y];
					unsorted2[y] = goose;
					goose[10] = unsorted1[x];
				}
			}
			insort[x] = goose[10];
		}

		return insort[10];

}

int main()
{
	double raw[10];
	double sorted[10];
	for (int c = 0; c < 10; c++)
	{
		cout << "Please enter a number" << endl;
		cin >> raw[10];
		sorted[c]= inraw (raw[c], sorted[c])
	}
	cout << "This is your raw array sorted from lowest to greatest!!!" << sorted[10] << endl;
	system("pause");
	return 0;
}