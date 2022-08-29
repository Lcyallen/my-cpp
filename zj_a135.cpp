#include <iostream>
using namespace std;

int main (){
	string a;
	int i = 1;
	while (cin>>a, a!="#"){
		cout<<"Case "<<i<<": ";
		if (a == "HELLO") cout<<"ENGLISH"<<endl;
		else if (a == "HOLA") cout<<"SPANISH"<<endl;
		else if (a == "HALLO") cout<<"GERMAN"<<endl;
		else if (a == "BONJOUR") cout<<"FRENCH"<<endl;
		else if (a == "CIAO") cout<<"ITALIAN"<<endl;
		else if (a == "ZDRAVSTVUJTE") cout<<"RUSSIAN"<<endl;
		else cout<<"UNKNOWN"<<endl;
		i++;
	}
}
