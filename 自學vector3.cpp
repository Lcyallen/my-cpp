#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
	int a[]={2,4,6,8,10};
	vector <int> v;

	//把陣列a的元素複製到v: 
	for (int i:a)
		v.push_back(i);
	
	for (int i:v)       //這是g++最新版可以接受的寫法(有點類似py)
		cout<<i<<" ";	//把vector_v 裡的每個元素都印出來
	cout<<endl;
	
	for (int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";	//用陣列的寫法也能印出v的元素
	cout<<endl<<"=========="<<endl;
/*	//另一個複製的寫法:
	int l = sizeof(a)/sizeof(int);
	vector <int> v2(a, a+l); 
//	for (int i:v2)
//		cout<<i<<" "<<endl;
	cout<<*max_element(v2.begin(),v2.end())<<endl;
	cout<<*min_element(v2.begin(),v2.end());
*/
return 0;	
}