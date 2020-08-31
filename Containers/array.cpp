#include <iostream>
#include <array>

using namespace std;

int main()
{
	array <int, 5> a = {1, 2, 3, 4, 5};

	for (auto &e: a)
		cout << e << endl;

	cout << endl << a.at(3);
	cout << endl << a[3];
	cout << endl << a.front();
	cout << endl << a.back() << endl;

	return 0;
}
