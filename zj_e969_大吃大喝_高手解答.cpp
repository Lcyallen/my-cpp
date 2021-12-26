#include <iostream>
using namespace std;

int main (){
	int n, m, k, a[2]={32, 55}, i=0;	//學高手寫的方法，用一陣列放要交互扣的數字。把a[0]放k=0的數字，a[1]放k=1的數字。 
	cin>>n>>m>>k;
	if (n<a[k]){						//第一次就不夠錢的情況不用進迴圈，所以先寫。用>或<搭配a[k]進行判斷，超厲害！ 
		cout<<"Wayne can't eat and drink.\n"; return 0;
	}
	while (n>=a[(i+k)%2]){				//只要錢夠吃一次都進迴圈討論。下一次時，剩下的錢也必須>=想吃東西的金額才會進迴圈！ 
		cout<<i*m<<": Wayne ";			//時間還沒經過就吃了所以i=0 
		if ((i+k)%2)					//利用"次數i"與"初始狀態k"搭配"%"來判斷 
			cout<<"drinks a Corn soup, ";//喝湯 
		else
			cout<<"eats an Apple pie, ";//吃派 
		n-=a[(i+k)%2];					//吃完一定必須付錢，所以此時扣陣列中的金額
		if (n==0){						//剩下的金額分3種情況。若剩的錢==0 
			cout<<"and now he doesn't have money.\n"; return 0;
		}
		else if (n==1){					//若剩的錢==1，dollar不能加s 
			cout<<"and now he has 1 dollar.\n"; return 0;
		}
		else							//其他情況則輸出還剩多少錢 
			cout<<"and now he has "<<n<<" dollars.\n";
		i++;
	}
	
	return 0;
}
