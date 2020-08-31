#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<int, char> umap = {{1, 'a'}, {2, 'b'}};

	cout << umap[1] << endl;
	cout << umap[2] << endl;

	//update
	umap[1] = 'c';

	for (auto &e: umap)
		cout << e.first << " " << e.second << endl;

	auto result = umap.find(2);
	if (result != umap.end())
		cout << "Found " << result->first << " " << result->second << endl;
	else
		cout << "Not found" << endl;

	return 0;
}
