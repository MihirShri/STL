#include <iostream>
#include <string>
#include <set>
#include <functional>

using namespace std;

class Person
{
public:
	float age;
	string name;

bool operator < (const Person& rhs) const{return age < rhs.age;}
bool operator > (const Person& rhs) const{return age > rhs.age;}
};

void asc()
{
	set<Person, std::less<Person>> Set = {{30, "Mihir"}, {25, "Sujoy"}, {28, "Prateek"}, {29, "Mihir"}};
	for(const auto& e: Set)
	{
		cout << e.age << " " << e.name << endl;
	}
}

void dsc()
{
	set<Person, std::greater<Person>> Set = {{30, "Mihir"}, {25, "Sujoy"}, {28, "Prateek"}, {29, "Mihir"}};
	for(const auto& e: Set)
	{
		cout << e.age << " " << e.name << endl;
	}
}

int main()
{
	int n;
	cout << "Asc(0) or Dsc(1): ";
	cin >> n;
	if (n)
		dsc();
	else
		asc();

	return 0;
}