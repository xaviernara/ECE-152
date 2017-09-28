#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1, x2, y1, y2;
	double distance;
	x1 = -20.0;
	y1 = -83.0;
	x2 = 24.0;
	y2 = 9.0;
	distance = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
	cout << "distance = " << distance << "\n";
	system("pause");
	return 0;


}