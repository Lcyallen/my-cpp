#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main (){
	vector <int> v;	//宣告一個vector
	int num;		//宣告一個int暫存輸入的數字
	char c;			//宣告一個字元，檢查輸入的可能是enter
	
	while(cin>>num){	//只要輸入是數字就先暫存入num
	v.push_back(num);	//再把每個num都push進去vector
	c = cin.get();		//把輸入不是數字的字元存入c中(這裡是為了抓取entery這個'字元')
	if (c == '\n') break;	//如果c是enter就會被視為'\n'那就會結束while迴圈。因為不知道會輸入幾個數字，所以用這個方式處理
	}
	cout<<v.size()<<endl;	//印出vector有幾個元素
	
	for (int i=0; i<v.size(); i++) cout<<v[i]<<" ";
	cout<<endl;
//	sort(v.begin(),v.end());	//把vector裡面的數字進行排序
//	for (int i:v) cout<<i<<" "; 
	
	cout<<endl<<*max_element(v.begin(),v.end())<<endl;	//引用迭代器(*)把vector中的最大值印出來
	cout<<*min_element(v.begin(),v.end())<<endl;        //引用迭代器(*)把vector中的最小值印出來
	cout<<accumulate(v.begin(),v.end(),0);              //若要用加總函數必須使用accumulate()函數，第三個參數是加總前的"初始值"
/*	int max = v[0], min = v[0];
	for (int i:v){
		if (i > max) max = i;
		if (i < min) min = i;
	}
	cout<<max<<endl<<min;
*/
return 0;
}