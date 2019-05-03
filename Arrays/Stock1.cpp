/*
Input: an order of stocks in the form of an array
buy and sell stock once and maximize the profit.
-> O(n) time
-> O(1) space
Eg:
10
310 315 275 295 260 270 290 230 255 250
answer would be : 30
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, j, ans, curr;
	scanf("%d", &n);
	int a[n];
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	curr = a[0];
	ans = -1000000007;
	for(i=1; i<n; i++)
	{
		if(a[i] < curr)
		{
			curr = a[i];
			continue;
		}
		else
		{
			ans = max(ans, (a[i]-curr));
		}
	}
	printf("%d\n", ans);
	return 0;
}