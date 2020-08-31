#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, int, std::greater<>> Map;
	Map["Mihir"] = 1;
	Map["Sujoy"] = 2;
	Map.insert(make_pair("Satyam", 3));

	for (auto &e1: Map)
		cout << e1.first << ": " << e1.second << endl;

	cout << endl;

	auto pair = Map.find("Mihir");
	cout << pair->first << " " << pair->second << endl;
	
	return 0;
}
