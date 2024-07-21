#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string s;

	while (cin >> s){
		int lett[26] = {};	//建立一個26個數的陣列，把數到的字母有幾個存進來
		for (char i : s)
			if (i >= 'A' && i <= 'Z') lett[i-'A'] ++;	//讀到大寫字母就把"第幾個"陣列+1。i-'A'就是"第幾個"字母
		
		for (char i : s)
			if (i >= 'a' && i <= 'z') lett[i-'a'] ++;	//讀到小寫字母就把再"第幾個"陣列+1。i-'A'就是"第幾個"字母
		
//		for (int i : lett) cout << i << " ";
//		cout << endl;
		int odd = 0;
		for (int i : lett)
			if (i%2 ==1) odd++;
		
		if (odd > 1) cout << "no..." << endl;
		else cout << "yes !" << endl;
	}
return 0;
}

