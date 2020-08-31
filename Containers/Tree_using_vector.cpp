#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> Tree;
	int edge, n1, n2;

	cout << "Enter number of edges: ";
	cin >> edge;

	Tree.resize(edge);

	for (int i = 0; i < edge; ++i)
	{
		cout << "Enter source and destination: ";
		cin >> n1 >> n2;
		Tree[n1].push_back(n2);
	}

	for (const auto& e1: Tree)
	{	
		for (const auto& e2: e1)
		{
			cout << e2 << " ";
		}
		cout << endl;
	}

	return 0;
}
