#include <iostream> 
using namespace std;
int main()
{
	int a, b, c, d,res1, res2, res3;
	a = 12;
	b = 3;
	c = 17;
	d = 2;

	res1 = a == 7;
	res2 = c*d == a*a;
	res3 = d%b*c > 31 || c%b*d < 8;
	cout <<res1 <<endl;
	cout << res2 <<endl;
	cout << res3 <<endl;
	system("pause");
	return 0;


}