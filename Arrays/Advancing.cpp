/*
Input: an array where A[i] denotes the maximum you can advance from index i
tell if it is possible to reach to the end of the array
-> O(n) time
-> O(1) space
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, i, j, curr;
	scanf("%d %d", &n);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	curr = 0;
	curr = a[0];
	if(curr >= n-1)
	{
		printf("YES\n");
		return 0;
	}
	for(j=1 ; j<=curr; j++)
	{
		curr = max(curr, j+a[j]);
		if(curr >= n-1)
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}