#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter your grade percentage " << endl;

	int grades;
	cin >> grades;
	if (grades >= 90)
		cout << "Great job, your grade is an A!!!" <<endl;
	if (grades<90 && grades>=80 )
		cout << "Great job, your grade is an B!!!"<< endl;
	if (grades<80 && grades >= 70)
		cout << "You passed, your grade is an C!!!" <<endl;
	if (grades<70 && grades >= 60)
		cout << "You passed but do better, your grade is an D!!!"<< endl;
	if (grades<= 59)
		cout << "You didn't pass but do better, your grade is an D!!!" << endl;
	
	system("pause");
	return 0;
}
