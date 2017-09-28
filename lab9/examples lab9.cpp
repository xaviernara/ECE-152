/*
// swap algorithm example (C++11)
#include <iostream>     // std::cout
#include <utility>      // std::swap

int main() {

	int x = 10, y = 20;                  // x:10 y:20
	std::swap(x, y);                  // x:20 y:10

	int foo[4];                      // foo: ?  ?  ?  ?
	int bar[] = { 10, 20, 30, 40 };       // foo: ?  ?  ?  ?    bar: 10 20 30 40
	std::swap(foo, bar);              // foo: 10 20 30 40   bar: ?  ?  ?  ?

	std::cout << "foo contains:";
	for (int i : foo) std::cout << ' ' << i;
	std::cout << '\n';
system("pause");
	return 0;
}
*/

// string::erase

#include <iostream>
#include <string>

int main()
{
	std::string str("This is an example sentence.");
	std::cout << str << '\n';
	// "This is an example sentence."
	str.erase(10, 8);                        //            ^^^^^^^^
	std::cout << str << '\n';
	// "This is an sentence."
	str.erase(str.begin() + 9);               //           ^
	std::cout << str << '\n';
	// "This is a sentence."
	str.erase(str.begin() + 5, str.end() - 9);  //       ^^^^^
	std::cout << str << '\n';
	// "This sentence."
	system("pause");
	return 0;

}

/*

// inserting into a string
#include <iostream>
#include <string>

int main()
{
	std::string str = "to be question";
	std::string str2 = "the ";
	std::string str3 = "or not to be";
	std::string::iterator it;

	// used in the same order as described above:
	str.insert(6, str2);                 // to be (the )question
	str.insert(6, str3, 3, 4);             // to be (not )the question
	str.insert(10, "that is cool", 8);    // to be not (that is )the question
	str.insert(10, "to be ");            // to be not (to be )that is the question
	str.insert(15, 1, ':');               // to be not to be(:) that is the question
	it = str.insert(str.begin() + 5, ','); // to be(,) not to be: that is the question
	str.insert(str.end(), 3, '.');       // to be, not to be: that is the question(...)
	str.insert(it + 2, str3.begin(), str3.begin() + 3); // (or )

	std::cout << str << '\n';
	return 0;
}

#include <iostream>
#include <string>

main()
{
	std::string buyer("money");
	std::string seller("goods");

	std::cout << "Before the swap, buyer has " << buyer;
	std::cout << " and seller has " << seller << '\n';

	seller.swap(buyer);

	std::cout << " After the swap, buyer has " << buyer;
	std::cout << " and seller has " << seller << '\n';

	return 0;
}

// string::find
#include <iostream>       // std::cout
#include <string>         // std::string

int main()
{
	std::string str("There are two needles in this haystack with needles.");
	std::string str2("needle");

	// different member versions of find in the same order as above:
	std::size_t found = str.find(str2);
	if (found != std::string::npos)
		std::cout << "first 'needle' found at: " << found << '\n';

	found = str.find("needles are small", found + 1, 6);
	if (found != std::string::npos)
		std::cout << "second 'needle' found at: " << found << '\n';

	found = str.find("haystack");
	if (found != std::string::npos)
		std::cout << "'haystack' also found at: " << found << '\n';

	found = str.find('.');
	if (found != std::string::npos)
		std::cout << "Period found at: " << found << '\n';

	// let's replace the first needle:
	str.replace(str.find(str2), str2.length(), "preposition");
	std::cout << str << '\n';

	return 0;
}
*/