#include <iostream>

using namespace std;

int main()
{
    int T,N,i,j=1,a;
    cin>>T;
    if(1<=T<=100){
    int C[T];
    while(j<=T)
    {
        cin>>N;
        int A[N];
        int B[N];
        for(i=0;i<N;i++)
        {
            cin>>A[i];
            A[i]=A[i]*20;
        }
        for (i=0;i<N;i++)
        {
            cin>>B[i];

            A[i]=A[i]-(B[i]*10);
            if(A[i]<0)
                A[i]=0;
        }
        a=A[0];

        for(i=0;i<N;i++)
        {   if(A[i]>a)
                a=A[i];
        }
        C[j]=a;
        j++;

    }
    for(i=1;i<=T;i++)
        cout<<C[i]<<endl;
    }
    return 0;
}
