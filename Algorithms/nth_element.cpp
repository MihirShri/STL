#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> vec {5, 3, 9, 7, 1, 8, 2, 6, 4};
	nth_element(vec.begin(), vec.begin() + vec.size() / 2, vec.end());
	cout << "The median is: " << vec[vec.size() / 2] << endl;

	nth_element(vec.begin(), vec.begin() + 1, vec.end(), greater<int>());
	cout << "The second largest element is: " << vec[1] << endl;

	return 0;
}
