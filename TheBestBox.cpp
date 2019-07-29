//Johnny needs to make a rectangular box for his physics class project.
// He has bought P cm of wire and S cm2 of special paper.
//He would like to use all the wire (for the 12 edges) and paper (for the 6 sides) to make the box.
//What is the largest volume of the box that Johnny can make?


#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	int a;
	cin >> a;
	while(a--)
    {
		int b,c;
		double side,volume;
		cin >> b >> c;
		side=b-sqrt(b*b-24*c);
		side/=12;
		volume=side*side*side+c*side/2-side*side*b/4;
		cout << fixed << setprecision(2) << volume << endl;
	}
}
