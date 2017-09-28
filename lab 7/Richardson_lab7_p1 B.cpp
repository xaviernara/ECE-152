#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
void display(char *); 
void display(char* q,)
{
	/*int n;
	if (n != NULL)
	{
	size_t n = std::strlen(q);
	std::strcpy(q, q + n);
	*/
	while (*q != '\0')
	{
		cout << *q++ << endl;
	}


	//return q;
}
/*int main()
{
int quote[];
char quote []= "We must accept finite disappointment, but we must never lose infinite hope. —— Mattin Luther King";
//string str1 = "We must accept finite disappointment, but we must never lose infinite hope. —— Mattin Luther King";
/* char *q = std::strstr(quote);

if (q != NULL)
{
size_t n= std::strlen(quote);
std::strcpy(q, q + n);
}
cout << str1 << endl;

system("pause");
}
*/
int main()
{
	char quote[] = { "We must accept finite disappointment, but we must never lose infinite hope. -- Mattin Luther King " };
	//int *P = NULL;
	//int quotesize = strlen(quote);
	display(quote);
	//cin.get();
	system("pause");
	return 0;
}