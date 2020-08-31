#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> v {2, 6, 1, 9, 4, 7};
	auto i = find(v.begin(), v.end(), 4);

	if (i != v.end())
		cout << "Found " << *i << endl;
	else
		cout << "Not found" << endl;

	return 0;
}
