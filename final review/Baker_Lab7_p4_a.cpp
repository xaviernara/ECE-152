#include<iostream>
#include<string>
using namespace std;
void display(char *);
/*Cedrick Baker
ECE152 
Lab7 Part4 a*/

void display(char *quote)
{
	char *PT = quote;

	
	for(int i = 0; quote[0] != '\0';i++)
	{
		cout << PT[i];
		quote++;
	}


}

int main()
{

	char str[] = "Victory won't come to me unless i go to it";

	display(str);
	cout << endl;
	system("pause");
	return 0;
}