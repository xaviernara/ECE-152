#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
	ofstream outfile;
	outfile.open("text.dat");
	string input;
	//if (outfile.is_open() )
	//{
	cout << "Please enter text to be entered into a file" <<endl;
			
		getline(cin, input);
		outfile << input <<endl;
		while (input!= "")
		{
			getline(cin, input);
			//getline(outfile, input);
			outfile << input<<endl;
		}
	//}
	//else
	//{
	//	cout << "Open file fail!" << endl;
	//}

	outfile.close();
	cout << input;
	
	system("pause");
	return 0;
}