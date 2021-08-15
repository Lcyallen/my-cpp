#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	string N;
	cin>>N;
	int l=N.size();
	
	if (l<=4)
		cout<<"|"<<fixed<<setw(8)<<setfill('_')<<N<<"|";

	else{
		string S;
		int i;
		for (i=0; i<4; i++)
		{
			S[i]=N[i+l-4];
		}
		cout<<"|____";
		for (i=0; i<4; i++)
		{
			cout<<S[i];
		}
		cout<<"|";
	}
		
	
		
	
	return 0;
}
