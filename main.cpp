#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n;
	long long int avg;
	cin>>t;
	while(t--)
	{
	    long long int sum=0;
		int flag=1;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		if(sum%n!=0)
		{
		    cout<<"Impossible"<<endl;
		}
		else
		{
		    avg=sum/n;
		    for(int i=0;i<n;i++)
		    {
			if(avg==a[i])
			{
				flag=0;
				cout<<i+1<<endl;
				break;
			}
		}
		if(flag==1)
		cout<<"Impossible\n";
		}
	}
}
