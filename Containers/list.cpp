#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> l1 = {1, 5, 2, 9, 3};
	l1.sort();

	for (auto &e: l1)
		cout << e << endl;

	return 0;
}
