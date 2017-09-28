#include <iostream>

//#include<cstdlib>
using namespace std;
void display(int *);
void display(int *f)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter a interger values: " << endl;
		cin >> f[i];
	}
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << f[i] << "||";
	}

}

int main()
{
	int fiveuser[5] = { 0 };
	//int *fivepoint;
	display(fiveuser);
	system("pause");
	return 0;
}