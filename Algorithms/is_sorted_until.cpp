#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> v {2, 3, 9, 7, 4, 1, 2, 6, 4};
	auto it = is_sorted_until(v.begin(), v.end());
	auto diff = distance(v.begin(), it);

	cout << diff << endl;

	std::vector<int> v1 {2, 3, 9, 7, 4, 1, 2, 6, 4};
	auto it1 = is_sorted_until(v1.begin() + 2, v1.end(), greater<int>());
	auto diff1 = distance(v1.begin() + 2, it1);

	cout << diff1 << endl;

	return 0;
}
