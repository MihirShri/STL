#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec{5, 9, 4, 2, 8, 0, 7, 1, 3, 6};
	sort(vec.begin(), vec.end());
	for (auto e: vec)
		cout << e << " ";
	cout << endl << is_sorted(vec.begin(), vec.end()) << endl;

	vector<int> vec_{5, 9, 4, 2, 8, 0, 7, 1, 3, 6};
	sort(vec_.begin(), vec_.end(), greater<int>());
	for (auto e: vec_)
		cout << e << " ";
	cout << endl << is_sorted(vec_.begin(), vec_.end(), greater<int>());

	cout << endl;

	return 0;
}