#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class a
{
public:
	int x, y;
	a(int x=0, int y=0):x{x}, y{y} {}
	bool operator < (const a& a1)
	{
		return (x + y) < (a1.x + a1.y);
	}
	bool operator > (const a& a1)
	{
		return (x + y) > (a1.x + a1.y);
	}
};

struct
{
	bool operator()(int a, int b) const
	{
		return a < b;
	}
}customless;

struct
{
	bool operator()(int a, int b) const
	{
		return a > b;
	}
}customless1;


int main()
{
	//Sort with primitive data types
	cout << "Method 1" << endl;

	cout << "Ascending: ";
	vector<int> vec{5, 9, 4, 2, 8, 0, 7, 1, 3, 6};
	sort(vec.begin(), vec.end());
	for (auto e: vec)
		cout << e << " ";

	cout << "Descending: ";
	vector<int> vec_{5, 9, 4, 2, 8, 0, 7, 1, 3, 6};
	sort(vec_.begin(), vec_.end(), greater<int>());
	for (auto e: vec_)
		cout << e << " ";

	cout << endl;

	//Sort with user defined data types
	cout << "Method 2" << endl;

	cout << "Ascending: ";
	vector<a> vec1 {{5, 3}, {1, 3}, {4, 5}};
	sort(vec1.begin(), vec1.end());
	for (auto e: vec1)
		cout << e.x << " " << e.y << "   ";

	cout << endl;

	//Sort using a function object
	cout << "Method 3" << endl;

	cout << "Ascending: ";
	vector<int> vec2 = {5, 9, 4, 2, 8, 0, 7, 1, 3, 6};
	sort(vec2.begin(), vec2.end(), customless);
	for (auto e: vec2)
		cout << e << " ";

	cout << "Descending: ";
	vector<int> vec2_ = {5, 9, 4, 2, 8, 0, 7, 1, 3, 6};
	sort(vec2_.begin(), vec2_.end(), customless1);
	for (auto e: vec2_)
		cout << e << " ";

	cout << endl;

	//Sort using lambda expression
	cout << "Method 4" << endl;

	cout << "Ascending: ";
	vector<int> vec3 = {5, 9, 4, 2, 8, 0, 7, 1, 3, 6};
	sort(vec3.begin(), vec3.end(), [](int a, int b) {return a < b;});
	for (auto e: vec3)
		cout << e << " ";

	cout << "Descending: ";
	vector<int> vec3_ = {5, 9, 4, 2, 8, 0, 7, 1, 3, 6};
	sort(vec3_.begin(), vec3_.end(), [](int a, int b) {return a > b;});
	for (auto e: vec3_)
		cout << e << " ";

	cout << endl;

	return 0;
}
