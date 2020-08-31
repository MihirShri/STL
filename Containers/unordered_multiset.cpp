#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	unordered_multiset<int> uset = {4, 1, 2, 3, 4, 2, 3, 2, 9, 0, 1, 2};

	auto search = uset.find(2);
	if (search != uset.end())
		cout << "Found " << (*search) << endl;
	else
		cout << "Not found";

	for (auto &e: uset)
		cout << e << " ";

	cout << endl;
	cout << uset.count(2) << endl;

	return 0;
}
