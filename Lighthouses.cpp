//There are N islands in the sea, enumerated from 1 to N. Each of them is so small that we can consider them as points on a plane. You are given the Cartesian coordinates of all islands. X-axis is directed towards East and Y-axis is directed towards North.

//You need to illuminate all the islands. To do this, you can place lighthouses on some of the islands. You can't place more than one lighthouse on any single island. Each lighthouse can light only one of the 4 quadrants: North-Western, North-Eastern, South-Western or South-Eastern. If some island is located on the border of an illuminated quadrant, it is considered to be illuminated as well. Note that this means that a lighthouse always illuminates it's own island as well.

//Find the smallest possible number of lighthouses required to illuminate all the islands (say L). Describe their configurations � positions and quadrants illuminated � as well.


#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	while(a--){
		long b;
		long long c,d,topr[3],bottomr[3],topl[3],bottoml[3],right[3],left[3];
		cin >> b;
		cin >> c >> d;
		right[0]=left[0]=topr[1]=bottomr[1]=topl[1]=bottoml[1]=c;
		topr[0]=bottomr[0]=topl[0]=bottoml[0]=right[1]=left[1]=d;
		right[2]=left[2]=topr[2]=bottomr[2]=topl[2]=bottoml[2]=1;
		for(int i=2;i<b+1;i++){
			cin >> c >> d;
			if (c<left[0])
            {
				left[0]=c;
				left[1]=d;
				left[2]=i;
			}
			else if(c>right[0])
            {
				right[0]=c;
				right[1]=d;
				right[2]=i;
			}


			if (d<bottomr[0])
            {
				bottoml[0]=bottomr[0]=d;
				bottoml[1]=bottomr[1]=c;
				bottoml[2]=bottomr[2]=i;
			}
			else if(d==bottomr[0] || d==topr[0])
            {
				if (d==bottomr[0])
                {
					if(c<bottoml[1])
                    {
						bottoml[1]=c;
						bottoml[2]=i;
					}
					else if (c>bottomr[1])
                    {
						bottomr[1]=c;
						bottomr[2]=i;
					}
				}

				if(d==topl[0])
                {
					if(c<topl[1]){
						topl[1]=c;
						topl[2]=i;
					}
					else if (c>topr[1])
                    {
						topr[1]=c;
						topr[2]=i;
					}
				}
			}
			else if(d>topr[0])
            {
				topl[0]=topr[0]=d;
				topl[1]=topr[1]=c;
				topl[2]=topr[2]=i;
			}
		}

		if(left[0]==bottoml[1] || left[1]==bottoml[0])
			cout << 1 << endl << bottoml[2] << " NE" << endl;
		else if(left[0]==topl[1] || left[1]==topl[0])
			cout << 1 << endl << topl[2] << " SE" << endl;
		else if(right[0]==bottomr[1] || right[1]==bottomr[0])
			cout << 1 << endl << bottomr[2] << " NW" << endl;
		else if(right[0]==topr[1] || right[1]==topr[0])
			cout << 1 << endl << topr[2] << " SW" << endl;
		else if(bottomr[1]<topr[1])
			cout << 2 << endl << bottomr[2] << " NE" << endl << topr[2] << " SW" << endl;
		else
			cout << 2 << endl << bottomr[2] << " NW" << endl << topr[2] << " SE" << endl;
	}
}
