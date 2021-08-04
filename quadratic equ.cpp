#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	double a, b, c, D;
	
	cin>>a>>b>>c;
	
	D=b*b-4*a*c;
	//cout<<D<<endl;
	
	if (D<0)
		cout<<"No real root";
		
	else if (D==0 && b!=0)
		cout<<"Two same roots x="<<-b/(2*a);

	else if (D==0 && b==0)
		cout<<"Two same roots x=0";
				
	else if (D>0)
	 	cout<<"Two different roots x1="<<(-b+sqrt(D))/2*a<<" , x2="<<(-b-sqrt(D))/2*a;
	
	
	return 0;
}
