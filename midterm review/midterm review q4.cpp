#include <iostream>
using namespace std;


double max_and_avg(int &, int , int, int,int *);

double max_and_avg(int &max, int x, int y, int z, int *value)
{
	double avg;
		if (x > y && x > z)
		{
			max = x;
			*value = 1;
			
		}
		if (y > x && y > z)
		{
			max = y;
			*value = 2;
		}
		if (z > y&& z >x)
		{ 
				max = z;
				*value = 3;
		}
	avg = max / 3;
	return avg;
}

int main()
{
	int maxi;
	double avg;
	int g;
	int h; 
	int y;
	int value;
	
	cout << "Please enter your first number " << endl;
	cin >> g;
	cout << "Please enter your second number " << endl;
	cin >> h;
	cout << "Please enter your third number " << endl;
	cin >> y;
	avg = max_and_avg(maxi, g, h ,y,&value);
	cout << "Out the three numbers you entered this the greatest  " << maxi << endl;
	cout << "Also, your average is : " << avg << " And this is value number"<< value << endl;
	system("pause");
	return 0;
	
}