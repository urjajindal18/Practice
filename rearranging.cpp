//Given an array of strings with R, G & B as characters.
//Sort the array such that all R comes first, followed by Gs & followed by Bs.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    int i,j,n;
    cin>>a;
    n=a.length();
    for(j=0;j<n;j++)
        { if(a[j]=='R')
            b=b+a[j];}
    for(j=0;j<n;j++)
        {
            if(a[j]=='G')
            b=b+a[j];
        }
    for(j=0;j<n;j++)
    {if(a[j]=='B')
        b=b+a[j];
    }

    cout<<b;
}
