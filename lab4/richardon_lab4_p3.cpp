#include <iostream> 
#include<cmath>
using namespace std;

int polySec(int aa, int bb, int cc, int xx) 
{
	int yy;
	yy = aa*pow(xx, 2) + bb*xx + cc;
	return (yy);
}


int main()
{
	int a, b, c, x, y;
	cout << "Please enter a value for a" << endl;
	cin >> a;
	cout << "Please enter a value for b" << endl;
	cin >> b;
	cout << "Please enter a value for c" << endl;
	cin >> c;
	cout << "Please enter a value for x" << endl;
	cin >> x;
	y = polySec(a, b, c, x);
	cout << " Your second degree polynomial =  " << y << endl;
	
	system ("pause");
	return 0;
}
