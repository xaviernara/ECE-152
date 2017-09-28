#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct stocks
{
	string stockname;
	double stockshare=0;
	double stockprice=0;
};
int main()
{
	stocks result[4];
	for (int i = 0 ;i < 4; i++)
	{
		cout << "Enter your stock name: " << endl;
		cin>> result[i].stockname;
		cout << "Enter your share amount: " << endl;
		cin>> result[i].stockshare;
		cout << "Enter your earning: " << endl;
		cin>> result[i].stockprice;
		system("pause");
	}
	for (int i = 0;i < 4; i++)
	{
		cout << "This is your stock name: " << result[i].stockname << " and this is your stock ratio: " << result[i].stockshare * result[i].stockprice <<endl;
	}
	system("pause");
	return 0;
}