/*
Input: 2 Arrays representing large integers.
Print and store the multiplication result of the 2 arrays
-> O(nm) time
-> O(1) space
-> Incomplete.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, i, j, sign
	scanf("%d %d", &n, &m);
	vector<int>a(n);
	vector<int>b(m);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<m; i++)
	{
		scanf("%d", &b[i]);
	}
	vector<int>ans;
	sign = 0;
	if(a[0] < 0)
	{
		a[0] = abs(a[0]);
		sign++;
	}
	if(b[0] < 0)
	{
		b[0] = abs(b[0]);
		sign++;
	}
	rem = 0;
	j = b[m-1];
	for(i=n-1; i>=0; i--)
	{
		curr = (a[i]*j);
		curr+=rem;
		rem = curr%10;
		curr = curr/10;
		ans.push_back(curr);
	}
	if(rem != 0 )
	{
		ans.push_back(rem);
	}
	j = m-2;
	ten = 10;
	while(j>=0)
	{
		
		j--;
		ten*=10;
	}
	return 0;
}