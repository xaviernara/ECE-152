#include<iostream>
#include<string>
#include<ctype.h>
#include<stdio.h>
using namespace std;
void display(char *);
/*Cedrick Baker
ECE152
Lab7 Part4 b*/

void display(char *quote)
{
	char *PT = quote;
	int checkm = 0;
	int restofm = 0;
	int tempwhile = 0;
	int tempi;

	for(int i = 0; *quote != '\0';i++)
	{
		if (checkm == 1 || *quote == 'm')
		{
			tempi = i;
			//backtracking 
			while ( PT[i] != ' ' && tempwhile != 1 )
			{
				if (i == 0)
				{
					i--;
					break;
				}
				++restofm;
				i--;
				quote--;
			}
			tempwhile = 1;
			cout << PT[i + 1];
			checkm = 1;
		}	
		quote++;
	}
}

int main()
{

	char str[] = "Come all the faithfull loyal and triumphant";

	display(str);
	cout << endl;
	system("pause");
	return 0;
}