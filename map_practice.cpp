#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    
	map <char, int> lettFreq;
	
	string input = "allen_loves_coding";
	
	for (auto &i : input){
		lettFreq[i]++;
	}
	
	for (auto &i : lettFreq){
		cout << i.first << " " << i.second << endl;
	}
    return 0;
}
