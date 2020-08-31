#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string s = "Mihir";
	if(*find(s.begin(), s.end(), 'i'))
		cout << true;
	else
		cout << false;

	cout << s.length();

	if (it == s.end())
		cout << "Not found" << endl;
	else
		cout << "Found";

	
	cout << s[it - s.begin()];

	return 0;
}
