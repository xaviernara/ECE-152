#include <iostream>
using namespace std;
int avg_range(int x[6], int size)
{
    int max;
    int min;
    double avg;
    for (int i; i<6; i++)
    {
        x[i];
        if(i==9)
        {
            max=x[i];
        }
        if ( i==1 )
        {
            min= x[i];
        }

    }
    int range= max-min;
    avg=  (6+ 2+ 4+ 7+ 1+ 9)/size;
    cout << "Your average is:  " << avg<< endl;
    return avg;
}
int main() 
{
	// Q1: Write a program that has a declaration in main() to store the following numbers into an array
    //named rates: 6, 2, 4, 7, 1, 9. There should be a function called avg_range() that accepts the
    //rates array and its size and then returns the average and the range of the array. Display the average
    //and range of the array in main().
    
    int rates[6]={6, 2, 4, 7, 1, 9};
    int size =sizeof(rates);
    for (int i; i<6; i++)
    {
        rates[i];
    }
    avg_range(rates, size );
    system ("pause");
	return 0;
}
