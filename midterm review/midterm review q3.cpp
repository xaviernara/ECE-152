#include <iostream>
int maximum(int, int, int);
int maximum(int x, int y , int z)
{
	int max; 
	if (x > y && x > z)
	{
		max = x;
		if (y > x && y > z)
		{
			max = y;
		if(z > x && z > y)
		{
			max = z;
		}
		}
	}
	return max;
}
using namespace std;
int main()
{
	int maxi, g, h, y;
	cout << "Please enter your first number " << endl;
	cin >> g;
	cout << "Please enter your second number " <<  endl;
	cin >> h;
	cout << "Please enter your third number " <<  endl;
	cin >> y;
	maxi = maximum(g, h, y);
	cout << "Out of the three numbers you entered this is greatest  " << maxi << endl;
	system("pause");
	return 0;

}
