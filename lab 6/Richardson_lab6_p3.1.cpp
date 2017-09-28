#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

using namespace std;

int main()
{
	int stugrades[3][4];
	int lab, quiz, exam;//You must initialize a lab quiz and exam grade to store and calculate with 
	double fin; //you must create a variable to place your final Double/float grade 
	//int x = 1;
	srand(time(NULL));


	
	//for (int i = 0;i < 2;i++) --Remember format of for loop
	//{
		//for (int j = 0;i < 3;j++)
		//{
	/*Below is the function for entering in the grades of all of the 
	test scores lab scores and quiz scores ... we can talk about how this
	works if you don't understand it after looking at this.*/
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			
			//stugrades[i][j] = rand() % 100 + 1; --remember grades needs to be between 60 to 100 how you get that is below
			stugrades[i][j] = rand() % 60 + 40;

			//--Below is sort of the right idea but should be implemented not in this for loop nested like this
			/*for (int i = 0; i < 3; i++)
			{
				stugrades[i][j] = (((.3)*stugrades[i][0]) + (stugrades[i][1] * (.3)) + (stugrades[i][2] * (.4)));
				cout << stugrades[i][j] << " || ";
			}*/ 
		}
	}
	/*Below is a for loop  that takes your lab quiz and exam grades from the user and calculates there final grade and print everything in 
	nice and neat fasion ...... Look over the next couple of lines to understand it better*/
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
	//system("pause"); --Remmeber system pause can't go here must go before the return
}