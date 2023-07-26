#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main (){
	vector<int> a = {8,-5,-1,4,-3,6,2,-2,3,4};
	cout<<a.size()<<endl;
	
	sort (a.begin(), a.end());

	
	for (int i=0; i<a.size(); i++) cout<<a[i]<<" ";

    cout<<endl<<a[2];  	
	return 0;
}
