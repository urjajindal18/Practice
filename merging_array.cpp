//There are 2 sorted arrays A and B of size n each.
//Write an algorithm to find the median of the array obtained after merging the above 2 arrays
//(i.e. array of length 2n).
#include <iostream>

using namespace std;
int merge(int ar1[],int ar2[],int n)
{
    int i=0,j=0,k=0;
    int avg;
    int rr=0;
    for(i;i<n;i++)
    {
        cout<<endl<<i<<j<<k<<rr;
        if(ar1[i]<ar2[j])
        {
            k++;
            if (k==n)rr=rr+ar1[i];
            if (k==(n-1))rr=rr+ar1[i];

        }
        else
        {
            j++;k++;i--;      cout<<endl<<i<<j<<k<<rr;
            if(k==n)rr=rr+ar2[j];
            if (k==n-1)rr=rr+ar2[j];
        }
    }

    avg=rr/2;
    cout<<endl<<avg;return 0;
}


int main()
{
    int n1,n2;
    int ar1[] = {1, 12, 15, 26, 38};
    int ar2[] = {2, 13, 17, 30, 45};
    n1=sizeof(ar1)/sizeof(ar1[0]);
    n2=sizeof(ar2)/sizeof(ar2[0]);
    if(n1==n2)
        merge(ar1,ar2,n1);
    return 0;
}

