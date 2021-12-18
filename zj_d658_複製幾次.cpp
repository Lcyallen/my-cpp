#include <iostream>
#include <cmath>
using namespace std;
int main (){

	int a, i, j=1;	//因為最後要輸入是第幾筆資料，所以必須再定義一個新變數j來記錄 
	
	while(cin>>a){	//每次測資進來都要處理 
		
		if (a<0)	//只要測資是負數就退出迴圈 
			break;
		
		else		//其他測資必須處理 
			for (i=0; pow(2, i)<a; i++){	//只要2的次方<a就繼續把次方數加1。大括號裡是空白也可行！ 
			}
			cout<<"Case "<<j<<": "<<i<<endl;
		j++;
	}
	
	return 0;
}
