#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> stk;

	stk.push(2);
	stk.push(4);
	stk.push(6);

	while (!stk.empty())
	{
		cout << stk.top() << endl;
		stk.pop();
	}

	return 0;
}
