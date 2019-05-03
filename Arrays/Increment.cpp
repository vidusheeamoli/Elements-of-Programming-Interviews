/*
Input: Array of digits encoding a decimal number (D).
Increment the array in such a way that it represents the decimal number - (D+1)
-> O(n) time
-> O(1) space
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, curr, rem;
	scanf("%d", &n);
	vector<int>a(n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	rem = (a[n-1]+1)/10;
	a[n-1] = (a[n-1]+1)%10;
	i = n-2;
	while(rem != 0 && i>=0)
	{
		curr = rem;
		rem = (a[i]+rem)/10;
		a[i] = (a[i]+curr)%10;
		i--;
	}
	if(rem != 0)
	{
		a.insert(a.begin(), rem);
	}
	n = a.size();
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}