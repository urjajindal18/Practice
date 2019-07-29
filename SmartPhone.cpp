//You are developing a smartphone app. You have a list of potential customers for your app. Each customer has a budget and will buy the app at your declared price if and only if the price is less than or equal to the customer's budget.


//You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.


#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int compare(const void * a, const void * b)
{
	if(*(long long *)a < *(long long *)b)
		return -1;
	else if(*(long long *)a == *(long long *)b)
		return 0;
	return 1;
}

void scanint(long long &x)
{
	register int c = getchar_unlocked();
	x = 0;
	for(; (c < 48 || c > 57); c = getchar_unlocked());
	for(; c > 47 && c < 58; c = getchar_unlocked())
	{
		x = (x << 1) + (x << 3) + c - 48;
	}
}

int main()
{
	long long ans=0, i,n,a[500000];
	scanint(n);
	for(i=0;i<n;i++)
		scanint(a[i]);
	qsort(a, n, sizeof(long long), compare);
	for(i=0;i<n;i++)
	{
		if((a[i] * (n-i)) > ans)
			ans = a[i] * (n-i);
	}
	cout << ans << endl;
	return 0;
}
