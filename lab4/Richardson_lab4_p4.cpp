#include <iostream>
using namespace std;
void converttime(int sec, int &hours, int &min, int &seconds)

{
	hours = sec / 3600;
	min = (sec % 3600) / 60;
	seconds = (sec % 3600) % 60;

}


int main()

{
	int insect, hours, min,	seconds;
	int x = 1;

	while (x)
	{
	
	cout << "How many seconds? " << endl;
	cin >> insect;

		converttime(insect, hours, min, seconds);
		cout << " Hours=  " << hours << " Mins= " << min << " Secs= " << seconds << endl;
		cout << "Enter 1 if your would like to try again or 0 if you would want to quit" << endl;
		cin >> x;
	}
	
	return 0;

}
