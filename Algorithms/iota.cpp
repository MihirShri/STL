#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	list<int> lst(10);
	std::iota(lst.begin(), lst.end(), -5);

	for (auto &e: lst)
		cout << e << " ";

	cout << endl;

	std::vector<list<int>::iterator> v(lst.size());
	iota(v.begin(), v.end(), lst.begin());

	for (auto &e: v)
		cout << *e << " ";

	cout << endl;

	return 0;
}
