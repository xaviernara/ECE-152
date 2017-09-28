#include <iostream>
using namespace std;
int main()
{
	int code;
	cout << "Please enter a code number " << endl;
	cin >> code;
	switch (code)
	{
	case 1: cout << "Verbatim Corporation" << endl; system("pause"); break;
	case 2: cout << "Maxell Corporation" << endl; system("pause");  break;
	case 3: cout << "3M Corporation " << endl; system("pause"); break;
	case 4: cout << "Sony Corporation" << endl;system("pause"); break;
	default: cout << "Your code is invald please" << endl; system("pause"); break;
	}
	return 0;
}



			
