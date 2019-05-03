/*
Rearrange an array such that all even elements come first in Constant space.
-> O(n) time 
-> O(1) space
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, j, k;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	i=0;
	j=n-1;
	while(i<j)
	{
		if(a[i]%2==0)
		{
			i++;
		}
		else
		{
			k = a[i];
			a[i]=a[j];
			a[j]=k;
			j--;
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}	
	
	return 0;
}