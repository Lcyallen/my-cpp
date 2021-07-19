#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a ;
	cout<<a/3600<<" hr " <<a%3600/60<<" min "<< a%60%60<<" sec "<<endl;
	
	return 0;
}
