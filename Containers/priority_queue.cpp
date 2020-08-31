#include <iostream>
#include <queue>
#include <vector>

using namespace std;

template<typename T> void print_queue(T &q)
{
	while (!q.empty())
	{
		cout << q.top() << " ";
		q.pop();
	}
	cout << endl;
}

int main()
{
	priority_queue<int> q;
	for (auto &e: {5, 7, 1, 2, 9, 6, 3, 4})
		q.push(e);
	print_queue(q);

	priority_queue<int, vector<int>, greater<int>> q1;
	for (auto &e: {5, 7, 1, 2, 9, 6, 3, 4})
		q1.push(e);
	print_queue(q1);

	//Using lambdas
	auto cmp = [](int left, int right) {return (left) > (right);};
	priority_queue<int, vector<int>, decltype(cmp)> q2(cmp);
	for (auto &e: {5, 7, 1, 2, 9, 6, 3, 4})
		q2.push(e);
	print_queue(q2);

	auto cmp1 = [](int left, int right) {return (left) < (right);};
	priority_queue<int, vector<int>, decltype(cmp1)> q3(cmp1);
	for (auto &e: {5, 7, 1, 2, 9, 6, 3, 4})
		q3.push(e);
	print_queue(q3);

	return 0;
}
