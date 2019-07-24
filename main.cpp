#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float Y;
	int X;
	cin>>X>>Y;
	if (0<X<=2000 && 0<=Y<=2000)
	{
	    if(X%5==0  && (X+0.50)<=Y )
	    {
           Y=Y-X-0.50;
	       cout<<fixed<<setprecision(2)<<Y;
	    }

	    else cout<<fixed<<setprecision(2)<<Y;
	}
	return 0;
}

