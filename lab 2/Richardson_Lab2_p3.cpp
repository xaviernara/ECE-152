#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double volume, length, width, height, volumeingallons, vol2;

	cout << "Enter the length of the water tank(ft) : " << endl;
	cin >> length;
	cout << "Enter the width of the water tank(ft) : " << endl;
	cin >> width;
	cout << "Enter the height of the water tank(ft) : " << endl;
	cin >> height;
	volume = length*width*height;
	volumeingallons = volume*7.48;
	vol2 = (volume / 1000)*4.13;
	cout <<"Volume = " <<volume << endl;
	cout <<"Volume in gallons = " <<volumeingallons << endl;
	cout <<"The water cost to fill the tank fully $ " <<vol2 << endl;

	system("pause");
	return 0;
}