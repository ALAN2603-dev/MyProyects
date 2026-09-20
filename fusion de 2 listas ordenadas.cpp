#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 4;
	int m = 4;
	vector<int> A = {2,5,9,14};
	vector<int> B = {1,6,7,20};
	vector<int> C(n+m);
	while (i < n && j < m)
	{
		if (A[i] <= B[j])
		{
			C[k] = A[i];
			i++;
		}
		else 
		{
			C[k] = B[j];
			j++;
		}
		k++;	
	}
	while (i < n)
	{
		C[k] = A[i];
		i++; 
		k++;
	}
	while (j < m)
	{
		C[k] = B[j];
		j++;
		k++;
	}
	for( int x: C)
	{
		cout << x << " ";	
	}
	cout << endl;
	return 0;
}