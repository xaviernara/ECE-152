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
			if (i == 0 && v == 0)   //this if statement is used to make the max intially equal zero so the max can have a basis at 0 in the array (i.e 0 by 0 spot in the 10 by 15 array)
			{
				max = x[i][v];
				maxrow = i;      //to determine the excact row postion of where the max intial row spot of the array: in the if statment where the max is at [0][0] set maxrow variable equal to the row varible that'll be used to place the max at 0x0 so that the maxrow will equal max[0] 
				maxcol = v;		//to determine the excact col postion of where the max intial col spot of the array: in the if statment where the max is at [0][0] set maxcol variable equal to the row varible that'll be used to place the max at 0x0 so that the maxcol will equal max[0] 
			}
			if (max < x[i][v]) //this if statement replaces the max variable with the new maximum # in the array as it randomly inputs numbers from 0 -100 in to the 10by15 array from the main function
			{
				max = x[i][v];
				maxrow = i;      // to determine the excact row postion of where the max new row spot of the array: in the if statment where the max is at somewhere randmaly in the array set maxrow variable equal to the row varible that'll be used to place the max at a new row spotso that the maxrow will equal max[?][]
				maxcol = v;		//to determine the excact col postion of where the max new col spot of the array: in the if statment where the max is at [0][0] somewhere randmaly in the array set maxcol variable equal to the row varible that'll be used to place the max at a new col spot so that the maxcol will equal max[][?] 
			}

		}

	}

	cout << " Your Max is : " << max;	

	cout << "This is the row the max is in " << maxrow +1 << " and this is the column " << maxcol+1 << endl;
}
int main()
{
	int array[10][15];
	srand(time(NULL));

	for (int i = 0;i < 10;i++) //this for statement tells the computer to input rand #s into all the rows of the array (i.e the  floor 1 room 1, room 2, room3 etc hotel)for example this for loop runs as many times as there is rows in this instance it runs 10 times 
	{
		for (int v = 0;v < 15;v++) //this for loop inputs rand numbers into all the columns (i.e floor 1 room 1, floor 2 room 1 etc hotel) for example this for loop runs as many times as there is columns in this instance it runs 15 times 
		{
			array[i][v] = rand() % 101;  //<---remember to assign the rand numbers to the row and columns row by row and column by column 
			cout << array[i][v] << " || ";
		}
		cout << "\n";
		
	}
	findmax(array);
	system("pause");
	return 0;
}
	
	