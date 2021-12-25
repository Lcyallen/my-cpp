#include <iostream>
using namespace std;
void F(int k, int i){
	if (k!=i%2)
		cout<<"drinks a Corn soup, ";
	else
		cout<<"eats an Apple pie, ";
}
int main (){
	int n, m, k;  cin>>n>>m>>k;
	n=n-(k%2!=0)*55-(k%2==0)*32;	//先減一次錢，看是-55還是-32 
	if (n<0){						//一開始就無法吃任何東西的情況，沒有要進入迴圈，所以先處理 
		cout<<"Wayne can't eat and drink.\n";return 0;
	}
	else{
		for (int i=0; n>=0; i++){	//其他情況就要進入迴圈討論，並且注意扣完第二次後錢不是"負的"才需要再進入迴圈！ 
			if (n>1){				//如果扣完第一次的錢之後還有>1，就要輸出"時間 "、吃了什麼和剩多少錢 
				cout<<i*m<<": Wayne ";F(k, i);cout<<"and now he has "<<n<<" dollars.\n";//因為每次要輸出的字不同，想到用"函數"來判斷輸出結果 
			}
			else if (n==1){			//如果扣完第一次的錢只剩1元，輸出要注意沒有加s 
				cout<<i*m<<": Wayne ";F(k, i);cout<<"and now he has 1 dollar.\n";return 0;
			}
			else if (n==0){			//如果扣完第一次的錢剛好=0，要輸出"沒有錢" 
				cout<<i*m<<": Wayne ";F(k, i);cout<<"and now he doesn't have money.\n";return 0;
			}
			n=n-((i+k+1)%2!=0)*55-((i+k+1)%2==0)*32;//這裡也修改很久！注意這是從第2次開始扣錢，所以要i+1，而且每一次要扣的錢不同，所以要搭配k和%2是否為0來判斷！ 
		}
	}
	return 0;
}
