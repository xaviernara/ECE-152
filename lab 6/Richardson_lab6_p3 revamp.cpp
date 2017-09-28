#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

using namespace std;

int main()
{
	int stugrades[3][4];
	int lab, quiz, exam;
	double fin;
	srand(time(NULL));
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			stugrades[i][j] = rand() % 60 + 40;
		}
	}
	cout << "             " << "Lab" << "  " << "Quiz" << "  " << "Exam" << "  " << "Final";
	for (int i = 0; i < 3; i++)
	{
		cout << "\nStudent " << i + 1;
		for (int j = 0; j < 4; j++)
		{

			if (j == 0)
			{
				lab = stugrades[i][j];
			}
			else if (j == 1)
			{
				quiz = stugrades[i][j];

			}
			else if (j == 2)
			{
				exam = stugrades[i][j];
			}
		}

		fin = lab * .3 + quiz * .3 + exam * .4;
		cout << " || " << lab << " || " << quiz << " || " << exam << " || " << fin;
	}


	system("pause");
	return 0;