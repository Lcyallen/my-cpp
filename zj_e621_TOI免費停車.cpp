#include <iostream>
using namespace std;

int main (){
	int n; cin>>n;
	while (n--){
		int a, b, c, count=0;//題目明確說會每次均輸入3個數字，所以不需用陣列。為了知道何時需輸出no，多加一個計數器 
		cin>>a>>b>>c;
		for (int i=a+1; i<b; i++){
			if (i%c!=0){
				cout<<i<<" "; count++;
			}
		}
		if (count==0) cout<<"No free parking spaces.";
		cout<<endl;	//若換行寫在第13行，則輸出no之前還是會先換行，所以寫在此。 
	}
	return 0;
}
