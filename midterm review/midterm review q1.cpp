#include <iostream>
using namespace std;
int main()
{
	double input;
	double i = 0;
	double average;
	double total = 0;
	double temp;
	
	cout << "   Type in the total number of data values to be averaged:  " << endl;
	cin >> input;
	 
	cout << "Please enter " << input << " numbers. " << endl;
	while (i < input)
	{
		cin >> temp  ;
		total = total + temp;
		cout << "value of total :" << total <<endl;
			i++;

	}
	//for (i = 0; i < user; i++)
	/*{
		cin >> temp;


		total = total + temp;
		cout << "Value of TOTAL :" << total << endl;

	}*/
	average = total / input;
	cout << "Average : " << average << endl;

	system("pause");
	return 0;
}
