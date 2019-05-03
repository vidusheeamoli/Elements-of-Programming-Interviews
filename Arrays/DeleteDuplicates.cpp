/*
Input: a sorted array
delete all duplicates.
2 3 5 5 5 7 11 11 11 become -> 2 3 5 7 11 0 0 0
-> O(n) time
-> O(1) space
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, j, curr;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	curr = a[0];
	j=1;
	i=1;
	while(j<n)
	{
		if(curr == a[j])
		{
			a[j] = 0;
			j++;
			continue;
		}
		else if(a[j] > curr)
		{
			curr = a[j];
			a[i] = curr;
			a[j] = 0;
			i++;
			j++;
			continue;
		}
		else
		{
			j++;
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}