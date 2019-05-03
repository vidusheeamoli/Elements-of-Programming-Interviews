/*
Dutch national flag problem:
Sort an array of size n consisting of 3 different integers with a given pivot in a single loop.
-> O(n) time 
-> O(1) space
3 way partitioning

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, j, k, pivot, temp;
	scanf("%d %d", &n, &pivot);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	i=0; //less than pivot
	j=0; //equal to pivot
	k = n-1; //greater than pivot
	while(j <= k)
	{
		if(a[j] < pivot)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j++;
			continue;
		}
		if(a[j] == pivot)
		{
			j++;
			continue;
		}
		else if(a[j] > pivot)
		{
			temp = a[j];
			a[j] = a[k];
			a[k] = temp;
			k--;
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}