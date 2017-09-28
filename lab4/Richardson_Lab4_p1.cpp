#include <iostream> 
using namespace std;

int main()
{
	double exchange, usdollars,rupee;

	cout << "Type in today’s exchange rate between US dollars and Indian rupees: "<< endl;
	cin>>exchange;


	while (cin>>usdollars) 
	{
		if (usdollars == 0)
		{
			break;
		}
		else
		{
			rupee = exchange*usdollars;
			cout << usdollars << " US Dollar equals " << rupee << " Indian Rupee "<<endl;
			cout << "Your amount in rupee's when exchanged is "<<exchange<< endl;
		}
	}


	system("pause");
	return 0;
}