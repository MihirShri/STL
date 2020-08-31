#include <iostream>
#include <set>

using namespace std;

class A
{
public:
	int x;
	A(int x = 0): x{x} {cout << "Constructed" << endl;}
	A(const A& rhs) {x = rhs.x; cout << "Copied" << endl;}
};

bool operator < (const A& lhs, const A& rhs) {return lhs.x < rhs.x;}

int main()
{
	set<A> Set;

	cout << "Insert: " << endl;
	Set.insert(A(10));
	for (auto &e: Set)
		cout << e.x << endl;

	cout << endl;

	cout << "Emplace: " << endl;
	Set.emplace(10);
	for (auto &e: Set)
		cout << e.x << endl;

	return 0;
}
