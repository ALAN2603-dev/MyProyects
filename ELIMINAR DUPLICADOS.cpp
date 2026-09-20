/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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