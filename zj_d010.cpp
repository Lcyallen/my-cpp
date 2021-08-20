#include <iostream>
using namespace std;

int main (){
	
	int n, s;
	while(cin>>n){
		s=0;		//這次卡關最久的就是這裡！當s在每次迴圈做完沒有歸0時，下一筆歸入後算完的s還會累加上去！ 
		for (int i=1; i<n; i++){
			if (n%i==0)
				s+=i;		
		}
		
		if (s>n){
			cout<<"盈數"<<endl;
		}
		else if (s==n){			//又忘記"等於"不是"=" 
			cout<<"完全數"<<endl;
		}
		else{
			cout<<"虧數"<<endl;
		}
	}
	return 0;
}
