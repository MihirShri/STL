#include <iostream>
#include <map>
#include <vector>
#include <functional>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N, K, M;
	cin >> N >> K >> M;
	int a[N+1][K+1];
	for (auto i = 0; i < N; i++)
		for (auto j = 0; j < N; j++)
			cin >> a[i][j];

	std::vector<int> v;

	for (auto i = 0; i < N-K+1; i++)
	{
		for (auto j = 0; j < N-K+1; j++)
		{
			int max = 0;
			for (auto l = i; l < K+i; l++)
			{
				for (auto m = j; m < K+j; m++)
				{
					if (a[l][m] > max)
						max = a[l][m];

				}
			}
			if (max >= M)
			v.push_back(max);
		}
	}

	int c = 0;
	for (auto &e: v)
	{
		c++;
	}
	cout << c << " " << *max_element(v.begin(), v.end()) << " " << *min_element(v.begin(), v.end());

	return 0;
}
