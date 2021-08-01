#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main (){
	
	float x1, y1, x2, y2, dis;
	
	cin>>x1>>y1>>x2>>y2;
	
	dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	
	cout<<fixed<<setprecision(3)<<dis;
	
	
	return 0;
}
