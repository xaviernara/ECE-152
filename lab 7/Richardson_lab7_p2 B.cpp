#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
void display(int *f)
{
	int g[5] = { 0 };
	int temp;
	for (int i = 0;i < 5;i++)
	{
	
		cout << "Please enter a interger values: " << endl;
		cin >>f[i];
	}
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		temp = f[i];
		g[4 - i] = temp; // used to reverse the order of the user input array  

	}
	for (int i = 0; i < 5; i++)
	{
		cout << g[i] << "||";
	}


	//cout << "||" ;
}
int main()
{
	int fiveuser[5], n, temp, i, j;

	//int *fivepoint;
	display(fiveuser);
	system("pause");
	return 0;
}

/*int Arr[100], n, temp, i, j;

cout << "Enter number of elements you want to insert ";
cin >> n;

for (i = 0;i<n;i++)
{
	cout << "Enter element " << i + 1 << ":";
	cin >> Arr[i];
}

for (i = 0, j = n - 1;i<n / 2;i++, j--)
{
	temp = Arr[i];
	Arr[i] = Arr[j];
	Arr[j] = temp;
}

cout << "\nReverse array" << endl;

for (i = 0;i<n;i++)
	cout << Arr[i] << " ";
*/

