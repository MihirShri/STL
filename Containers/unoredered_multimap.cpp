#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_multimap<int, char> umap = {{1, 'a'}, {2, 'b'}};

	umap.insert({5, 'c'})
	umap.insert(pair<int, char>(3, 'c'));
	umap.insert(make_pair(3, 'c'));
	umap.insert(make_pair(3, 'c'));

	for (auto &e: umap)
		cout << e.first << " " << e.second << endl;

	return 0;
}
