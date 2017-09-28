
#include <iostream>
#include <fstream>
#include<string>
using namespace std;
// void removespaces(string & space)

// {
	// while (space.at(0) == ' ')
	// {
		// space = space.substr(1);
	// }
// }
int main()
{
	// ifstream infile;
	// infile.open("verse.txt");
	// ofstream outfile;
	// outfile.open("newverse.txt");
	// string versetext;
	string inputname("verse.txt");
	string outputname("newverse.txt");
	ifstream infile;
	ofstream outfile;
	outfile.open(outputname);
	infile.open(inputname);
	int line = 0;
	char temp;
	int LEAD_SPC;
		while (!infile.eof())
		{
			temp = infile.get();
			int valid = 0;
			
			
			if(temp != ' ' && temp != '\t')
			{
				valid = 1;
			}
			if(valid == 1 || LEAD_SPC ==1)
			{
				LEAD_SPC = 1;
				outfile << temp;
				if(temp == '\n')
				{
					LEAD_SPC = 0;
				}
			}
			
			
		}
	
	infile.close();
	outfile.close();
	system("pause");
	return 0;


}
		