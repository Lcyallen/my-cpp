#include<iostream>
using namespace std;

int main (){
	
	int a[]={2,1,4,3,6,5,9,7,6,5};
		
		for (int i=0; i<10; i++)
		cout<<a[i]<<" ";
		
	cout<<endl<<"--------------------"<<endl;
	
	for (int j=9, i=0; i<j; i++, j--)
		cout<<a[i]<<" "<<a[j]<<" ";	
		
	cout<<endl<<"--------------------"<<endl;
	
	for (int i=9; i>=0; i--)
		cout<<a[i]<<" ";
	
	cout<<endl<<"--------------------------"<<endl;

	int sum=0;
		for (int i=0 ; i<10; i++)
			sum=sum+a[i];
		
		cout<<"Sum = "<<sum<<endl;
cout<<endl<<"--------------------------"<<endl;

	int Max=a[0];
	
	for (int i=0; i<10; i++)
		if (Max<a[i])
			Max=a[i];
			
	cout<<"Max = "<<Max<<endl;
cout<<endl<<"--------------------------"<<endl;
	
	int odd, count=0;
	
	for (int i=0; i<10; i++)
		if (a[i]%2!=0)
			count=count+1;
			
	cout<<"There are "<<count<<" odd numbers"<<endl;
cout<<endl<<"--------------------------"<<endl;

	int x=0;
	for (int i=0; i<10; i++)
		if (a[i]==5)
		{
		x++;
		cout<<"item "<<i+1<<" is 5"<<endl;
		}
	cout<<"There are "<<x<<" number 5 "<<endl;
	

return 0;
}
