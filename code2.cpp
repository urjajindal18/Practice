//Count ways to express a number as sum of consecutive numbers


#include <iostream>

using namespace std;

int main()
{
    int i=0,n,sum=0,cc=0;
    cin>>n;
    for(i=1;i<n;i++)
    { int a=i;
    while(sum<n)
    {
        sum=sum+a;
        if (sum==n)
            cc++;
        a++;
    }
    sum=0;
    } cout<<cc;
    return 0;
}
