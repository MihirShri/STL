#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> dq = {2, 3, 4};

	dq.push_front(1);
	dq.push_back(5);

	for (auto &e: dq)
		cout << e << endl;

	cout << endl;

	dq.pop_front();
	dq.pop_back();

	for (auto &e: dq1)
		cout << e << endl;

	return 0;
}
