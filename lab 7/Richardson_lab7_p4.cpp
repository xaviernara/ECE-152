#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
void display(char *, int); // 
void display(char* q, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(q + i);
	}
	//return q;
}
int main()
{
	char * str[] = {"Victory won't come to me unless I go to it. /0”};
	int *P = str;
	int quotesize = strlen(str);
	display(p, quotesize);
	//cin.get();
	system("pause");
	return 0;
}