#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
	fstream inFile;
	ofstream outFile;
	inFile.open("employee.txt");
	outFile.open("employee.bak");
	string str;

	if (inFile.is_open() && outFile.is_open())
	{
		while (!inFile.eof())
		{
			getline(inFile, str);
			cout << str;
			outFile << str<<'\n';
		}
	}
	else
	{
		cout <<"Open file fail!" << endl;
	}
	
	system("pause");
	return 0;
}