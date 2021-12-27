#include <iostream>
using namespace std;

int main (){

	string n;
	int i;
	while (cin>>n, n!="0"){			//不要忘記可以這樣寫！ 
		int odd_sum=0, even_sum=0;
		for (i=0; i<n.size(); i++){
			if (i%2)
				even_sum+=n[i]-'0';	//字串改成數字要-'0' 
			else
				odd_sum+=n[i]-'0';
		}
//		cout<<even_sum<<endl<<odd_sum;
				
		if ((even_sum-odd_sum)%11)
			cout<<n<<" is not a multiple of 11.\n";
		else
			cout<<n<<" is a multiple of 11.\n";
	}
	
	return 0;
}
