#include <iostream>
#include <vector>
#include <functional>
#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) {return a > b ? a : b;}

int main()
{
	int N, K, M;
	cin >> N >> K >> M;
	int a[N+1][N+1];
	int dummy[N+1][N+1];
	std::vector<int> v;
	for (auto i = 0; i < N; i++)
		for (auto j = 0; j < N; j++)
			cin >> a[i][j];

	for (int j=0; j<N; j++) 
   { 
       int max = 0; 
       for (int i=0; i<K; i++)
       {
       		if (a[i][j] > max)
       			max = a[i][j];
       } 
       dummy[0][j] = max;
 
       for (int i=1; i<N-K+1; i++) 
       {
       		int max_again = 0;
       		for (int m = i; m < K+i; m++)
       		{
       			if (a[m][j] > max_again)
       				max_again = a[m][j];
       		}
       		dummy[i][j] = max_again;
       }
   }

   for (int i=0; i<N-K+1; i++) 
   {
      int max = 0; 
      for (int j = 0; j<K; j++)
      {
   		  if (dummy[i][j] > max)
   		  	max = dummy[i][j];
      }
      if (max >= M)
      	v.push_back(max);

      for (int j=1; j<N-K+1; j++) 
      {
      	 int max_again = 0;
         for (int m = j; m < K+j; m++)
         {
         	if (dummy[i][m] > max_again)
         		max_again = dummy[i][m];
         }
         if (max_again >= M)
         	v.push_back(max_again);
      } 
   } 

   cout << endl;


   int c = 0;
   for (auto &e: v)
   		c++;

   	cout << c << " " << *max_element(v.begin(), v.end()) << " " << *min_element(v.begin(), v.end());

	return 0;
}
