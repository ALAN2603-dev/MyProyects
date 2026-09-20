// in this code, you can bring a list of numbers and get finally another list but ordered.
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
	int num;
	int n;
	cin >> n;
	vector<int> A;
	vector<int> B;
	for (int i=0; i < n; i++)
	{
		cin >> num;
		A.push_back(num);
	}
	for (int i = 0; i < n; i++)
	{
		int nactual = A[i];
		if (find(B.begin(), B.end(), nactual) == B.end())
		{
			B.push_back(A[i]);
		}
	}
	for (int i = 0; i < B.size(); i++)
	{
	cout << B[i] << " ";
	}
	cout << endl;
	return 0;
}
