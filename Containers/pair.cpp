#include <iostream>
#include <vector>

using namespace std;

void print(pair<int, int>& obj) {cout << obj.first << " " << obj.second << endl;}

int main()
{
	pair<int, int> obj1(10, 20);
	print(obj1);

	pair<int, int> obj2 = make_pair(30, 40);
	print(obj2);

	cout << endl;

	vector<pair<string, int>> v;

	v.push_back(make_pair("Mihir", 10));
	v.push_back(pair<string, int>("Prateek", 40));
	v.push_back({"Satyam", 30});

	for (auto &e: v)
		cout << e.first << " " <<e.second << endl;

	return 0;
}
