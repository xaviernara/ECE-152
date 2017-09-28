#include <iostream>
#include<time.h>    //this library is used to use the srand(time(NULL)) function
using namespace std;
void findmax(int x[10][15])
{
	int max;
	int maxrow;
	int maxcol;
	for (int i = 0;i < 10;i++) //this for statement prompts the user to enter 
	{
		
		for (int v = 0;v < 15;v++)  
		{
			if (i == 0 && v == 0)   //this if statement is used to make the max intially equal zero so the max can have a basis at 0 in the array
			{
				max = x[i][v];

			}
			if (max < x[i][v]) //this if statement replaces the max variable with the new maximum # in the array as it randomly inputs numbers from 0 -100 in to the 10by15 array from the main function
			{
				max = x[i][v];
			}

		}

	}

	cout << " Your Max is : " << max;
}
int main()
{
	int array[10][15];
	srand(time(NULL)); //this form of the random function is linked to the rand funtion used below and it makes the rand func below produce new random numbers everytime it runs instead the same set of random numbers like the one below

	for (int i = 0;i < 10;i++) //this for loop tells the computer to input rand #s into all the rows of the array (i.e the  floor 1 room 1, room 2, room3... etc hotel) for example this for loop runs as many times as there is rows in this instance it runs 10 times 
	{
		for (int v = 0;v < 15;v++) //this for loop inputs rand numbers into all the columns (i.e floor 1 room 1, floor 2 room 1... etc hotel) for example this for loop runs as many times as there is columns in this instance it runs 15 times 
		{
			array[i][v] = rand() % 101;  //<---remember this set up to assign the rand numbers to the row and columns row by row and column by column 
			cout << array[i][v] << " || ";
		}
		cout << "\n";
		
	}
	findmax(array);
	system("pause");
	return 0;
}
	
	