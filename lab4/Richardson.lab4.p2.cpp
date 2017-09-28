#include <iostream> 
#include<cmath>
using namespace std;
int main()
{
	int side1, side2, hypotenuse;

	for (side1 = 1; side1 <= 300; side1++)
	{
		for (side2 = 1; side2 <= 300; side2++)
		{
			for (hypotenuse = 1; hypotenuse <= 300; hypotenuse++)
			{
				if (pow(hypotenuse, 2) == pow(side1, 2) + pow(side2, 2))
				{
					cout <<side1<< "^2 + " <<side2<< "^2 = " << hypotenuse <<"^2"<< endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}


