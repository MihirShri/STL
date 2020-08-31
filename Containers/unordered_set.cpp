#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	unordered_set<int> uset = {4, 1, 2, 3, 4, 2, 3, 2};

	auto search = uset.find(2);
	if (search != uset.end())
		cout << "Found " << (*search) << endl;
	else
		cout << "Not found";

	for (auto &e: uset)
		cout << e << " " << endl;

	return 0;
}
