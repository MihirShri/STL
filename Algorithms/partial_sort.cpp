#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec{5, 9, 4, 2, 8, 0, 7, 1, 3, 6};
	partial_sort(vec.begin() + 1, vec.begin() + 5, vec.end());

	for (auto e: vec)
		cout << e << " ";

	cout << endl;

	vector<int> vec_{5, 9, 4, 2, 8, 0, 7, 1, 3, 6};
	partial_sort(vec_.begin() + 1, vec_.begin() + 5, vec_.end(), greater<int>());

	for (auto e: vec_)
		cout << e << " ";

	cout << endl;

	return 0;
}