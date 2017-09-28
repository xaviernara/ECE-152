#include <iostream>
using namespace std;
double mult(double, double);
double mult( double x, double s)
{
	double v;
	v = s*x;
	return v;
}
//void mult(double *, double,double );
//void mult(double *v, double s,double x)
//{
//	
//	*v = s*x;
//	
//}


int main()
{
	double multi, d, t;
	cout << "Please enter two number to be multiplication." << endl;
	cin >> d;
	cin >> t;
	multi = mult(d,t);

	
	/*mult(&multi, d, t);*/

	cout << "This is your number  " << d << "and" << t << " multiplied togerther:  " << multi << endl;
	system("pause");
	return 0;
	
}