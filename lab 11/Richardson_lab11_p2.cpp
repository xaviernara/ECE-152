#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
	int i = 0;
	ofstream outFile;
	outFile.open("user.txt");
	string str;
	getline(cin, str);
	outFile << str;
		while (str!="")
		{
			getline(cin, str);
			outFile << str<<endl;
		}
	outFile.close();

	ifstream inFile;
	inFile.open("user.txt");
	if (inFile.is_open())
	{ 
		
		while (!inFile.eof())
		{
			getline(inFile, str);
			//cout << str;
			cout <<i++  <<" "<< str<<'\n';
		}
	}
	else
	{
		cout <<"Open file fail!" << endl;
	}
	inFile.close();
	system("pause");
	return 0;
}