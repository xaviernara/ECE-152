#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	for (int x = 1; x <= 4; x++)
	{
		
		a = rand() % 101;
		b = rand() % 101;
		int y = 1;
		int correct, inanswer;
		while (y)
		{
			correct = a*b;
			cout << "How much is " << a << " times " << b << endl;
			cin >> inanswer;
			if (inanswer == correct)
			{
				cout << "Very good!" << endl;

				y = 0;
			}
			else 
			{
				cout << "No. Please try again." << endl;
			}
		}
	}
	cout << "Congrats you got 4 answers correct!!!" << endl;
	system("pause");
	return 0;
	
}