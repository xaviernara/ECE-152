#include <iostream>
#include <cmath>										//include <cmath> is used to use the pow function (i.e to raise a number to a power) 
using namespace std;									//double * is the same as saying  double grades [] (i.e double * will accept arrays from the main()  )
double avg(double *);									//function title to calc the avg 
double devi(double grades, double avg);					//function title to calc the deviation  
double varies(double *);								//function title to calc the variance
double varies(double *deviation )						//this function accepts the deviation array from the main and specifacally this    
{
	double vnum = 0;									//this variable is used to collect the devation array and divide the sum of the squared deviations by the number of deviations
	double ktotal = 0;									//this variable is used to collect the sum totals of the squared deviations 
	double squarespot[15] = { 0 };						//this variable is used to divide the totals of the squared deviations by the number of elements in the deviation array
	
	for (int kboogie = 0; kboogie < 15; kboogie++)
	{
		squarespot[kboogie] = pow(deviation[kboogie], 2);		//this variable is used to square the individual elements in the deviation array 
	}
	for (int jelly = 0; jelly < 15; jelly++)
	{
		ktotal = ktotal + squarespot[jelly];
	}
	vnum = ktotal / 15; 
	return vnum;
}

double devi(double grades, double avg)					//function to calc the deviation from the function variable named levi
{
	
	double levi ;
	levi = grades - avg;								// the deviation of each individual # in the grades array agaisnt the avg is calculated by this
	return levi;
	
}
	
double avg(double * grades)								//function to collect the total number (xtotal) from the avg and calc avg (xavg)
{
	double xavg, xtotal;
	xtotal = 0;
	
	for (int i=0; i < 15; i++)
	{
		
		xtotal = xtotal+ grades[i];						//xtotal collects the #s in the grades array by adding the the to xtotal=0 #s in the grades array
	}
	xavg = xtotal / 15;
	return xavg;
}

int main()
{
	double  grades[15] = { 98,93,72,86,99,61,89,77,91,73,79,71, 86,74,19 };
	double avg12;
	double deviation[15] = {0};							//initalizing the the 15 space devi array to zero to erase the content in those spots and  
	avg12 = avg(grades);
	
	for (int g=0; g < 15; g++)						
	{
		deviation[g] = devi(grades[g], avg12);				//this part calls the function devi of the code that calculates the deviation from the function devi and also sends the individual #s from grades array and sending in to the devi function and process it and send it back and puts into a array  (i.e running this 15 times to fill the array up). 
	}
	for (int y = 0; y < 15; y++)
	{
		cout << " For the element  " << y + 1 << " the deviation is  " << deviation[y] << " and the value it corresponds to " << grades[y] << endl;  //the (y+1)  in the cout staement is becuase the array starts at 0 instead of 1 so the display will be from 1-15 instead of 0-14  
		cout << endl;
	}
	
	
	cout << "\nThe variance  is : " << varies(deviation) << endl;

	for (int y = 0; y < 15; y++)							//for loop to show the actual values thats averaged //
	{
	cout << " || "<< grades[y];								
	}
	cout << "\nAverage is : " << avg12<<endl;

system("pause");
return 0;
	
	
	

	

	
}