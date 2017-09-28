#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int main()
{
	int stugrades[3][4];
	//int x = 1;
	srand(time(NULL));
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;i < 3;j++)
		{
			/*if (i == 0)
			{
				stugrades[i] =rand() % 100 + 40;
			}
			if (i == 1)
			{
				stugrades[j] = rand() % 100 + 40;
			}
			*/
			
			stugrades[i][j] = rand() % 100 + 1;

			//cout <<"Student " << x + 1 << stugrades[i] << "||";
			//cout <<"Student " << x + 1 << stugrades[j] << "||";
			for (int i = 0; i < 3; i++)
			{
				stugrades[i][j] = (((.3)*stugrades[i][0]) + (stugrades[i][1] * (.3)) + (stugrades[i][2] * (.4)));
				cout << stugrades[i][j] << " || ";
			}
		}
	}

	return 0;
system("pause");
}