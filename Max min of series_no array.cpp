#include <iostream>
using namespace std;
int main(){
	
	int score, i, Max, min;
		
	for (i=0, Max=0, min=1000; cin>>score; i++)
	{
		if (Max<score)
			Max=score;	

		if (min>score)
			min=score;
	}
	
	cout<<"Max = "<<Max<<endl;
	cout<<"min = "<<min<<endl;
	
	return 0;
}

//如果對同一筆輸入的資料做處理，則必須寫在同一個for迴圈裡
//印出結果都在for迴圈外處理沒關係
//Max, min都要設定初始值 
