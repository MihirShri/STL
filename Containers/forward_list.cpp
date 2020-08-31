#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> l1 = {5, 7, 1, 3};
	forward_list<int> l2 = {3, 6, 5, 2};

	cout << "Insert: " << endl;
	l1.insert_after(l1.begin(), 8);

	for (auto &e: l1)
		cout << e << endl;

	cout << endl;

	cout << "Sort and Merge: " << endl;
	l1.sort();
	l2.sort();
	l1.merge(l2);

	for (auto &e: l1)
		cout << e << endl;

	cout << endl;

	forward_list<int> l3 = {5, 7, 1, 3};
	forward_list<int> l4 = {3, 6, 5, 2};

	cout << "splice_after: " << endl; 
	l3.splice_after(l3.begin(), l4);

	for (auto &e: l3)
		cout << e << endl;

	cout << endl;

	cout << "replace_if: " << endl;

	l3.remove_if([] (int n) {
		return n > 4;
	});

	for (auto &e: l3)
		cout << e << endl;

	return 0;
}
