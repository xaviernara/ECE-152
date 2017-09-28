#include <iostream>
using namespace std;
void prices1array(double prices[9], double length);
void prices2array(double prices2[3][3], double length);


int main()
{
	
	double prices[9] = { 11.77, 18.36, 19.17, 13.22, 7.91, 32.13, 19.64, 3.45, 19.16 };
	double prices2[3][3] = { {11.77, 18.36, 19.17},
							{13.22,7.91,32.13},
							{19.64, 3.45, 19.16} };


	prices1array(prices, 9);
	prices2array(prices2, 3);
	system("pause");
	return 0;


}
// arrays as parameters

void prices1array(double prices[9], double length) 
{
	for (int x = 0; x < length; x++)
	{
		cout << prices[x] << ' ';
		
	}
	cout << "\n\n\n";
}
void prices2array(double prices2[3][3], double length)
	{
	for (int x = 0; x < length;x++ )
	{
		for (int y = 0; y < length; y++)
		{
		cout << prices2[x][y] << ' ';
		
	    } 
		cout << '\n';
	}

}

//int main()
//{
	//int firstarray[] = { 5, 10, 15 };
	//int secondarray[] = { 2, 4, 6, 8, 10 };
	//printarray(firstarray, 3);
	//printarray(secondarray, 5);
//}
