
#include <iostream>
#include <fstream>
#include<string>
using namespace std;
void removespaces(string & space)

{
	while (space.at(0) == ' ')
	{
		space = space.substr(1);
	}
}
int main()
{
	ifstream infile;
	infile.open("verse.txt");
	ofstream outfile;
	outfile.open("newverse.txt");
	string versetext;
	int line = 0;

		while (getline(infile,versetext))
		{
			removespaces(versetext);

			line++;

			outfile << infile;
		}

	infile.close();
	system("pause");
	return 0;


}
