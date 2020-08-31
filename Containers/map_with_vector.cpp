#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
	map<string, vector<int>, std::greater<>> Map;
	Map["Mihir"].push_back(1);
	Map["Mihir"].push_back(5);
	Map["Mihir"].push_back(10);
	Map["Sujoy"].push_back(2);
	Map["Sujoy"].push_back(6);
	Map["Satyam"].push_back(7);

	for (auto &e1: Map)
	{
		cout << e1.first << ": ";
		for (auto &e2: e1.second)
			cout << e2 << " ";
		cout << endl;
	}

	return 0;
}
