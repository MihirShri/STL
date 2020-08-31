#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	for (auto &e: vec)
		cout << e << endl;

	cout << endl << vec[1];
	cout << endl << vec.at(1) << endl;

	return 0;
}
