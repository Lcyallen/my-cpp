#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	int a[] = {1,5,-30,14,0,26,};
	int l = sizeof(a)/sizeof(int);	//無意間看見網路有人這樣寫，獲取a[]的長度！ 
	cout<<*max_element(a,a+l)<<endl;	//so cool!原來可以這樣寫
	cout<<*min_element(a,a+l); 			//必須加入* 否則會印出 
	
}
