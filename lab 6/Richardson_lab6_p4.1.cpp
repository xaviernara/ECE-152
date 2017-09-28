#include <iostream>
using namespace std;
/*double declaration(double *);
double declaration(double *x[7]);
{
	for (int i; i < 7;i++)
	{
		cout << *x[i] << "||" << endl;
	}
	return x;
}
*/
int main()
{
	double prices[7] = { 12.11, 12.61, 19.42, 16.78, 8.28, 13.33, 19.16 }; 
	//int x[7] = { 12.11, 12.61, 19.42, 16.78, 8.28, 13.33, 19.16 }; -- Has to be initialized as a double because all of these numbers in the array are double.
	//int *prices;
	//prices = &x[7];
	/* prices++;
	 *prices = 12.11;
	*prices = 12.61;
	*prices = 19.42;
	*prices = 16.78;
	*prices = 8.28;
	*prices = 13.33;
	*prices = 19.16;*/

	for (int i=0; i < 7;i++) 
	{
		*prices = prices[i];
		cout << *prices << ", ";
		//x=*prices[i]
		//cout << x[i] << "||";
	}
	//declaration(&prices);
	system("pause");
	return 0;
}