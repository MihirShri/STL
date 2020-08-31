#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap<char, int> Multi;

	Multi.insert(make_pair('a', 1));
	Multi.insert(make_pair('a', 2));
	Multi.insert(make_pair('b', 3));
	Multi.insert(make_pair('a', 3));
	Multi.insert(make_pair('b', 2));

	for (auto &e: Multi)
		cout << e.first << " " << e.second << endl;

	auto pair = Multi.equal_range('a');

	for (auto it = pair.first; it != pair.second; ++it)
	{
		cout << endl << it->first << " " << it->second;
	}

	cout << endl;

	auto lower = Multi.lower_bound('a');
	cout << endl << lower->first << " " << lower->second;

	auto upper = Multi.upper_bound('a');
	cout << endl << upper->first << " " << upper->second;

	cout << endl;

	return 0;
}
