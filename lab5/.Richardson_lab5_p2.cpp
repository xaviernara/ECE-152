#include <iostream>
using namespace std;

int main()
{
	int fmax[10];
	int max;
	int i;
	int y=0;
	
	for (i = 0;i < 10;i++)
	{
		cout << "Please Enter a number: ";
		cin >> fmax[i]; 
		if (i == 0) 
		{ 
			max = fmax[0]; 
		}

		if ((i >= 0) && (fmax[i] > max))
		{
			max = fmax[i];
			y = i;
		}
	}
	cout << "The maximum number is: " << max << endl;
	cout << "This is element number " << y+1 << "in the list of numbers " << endl;
	system("pause");
	return 0;
}