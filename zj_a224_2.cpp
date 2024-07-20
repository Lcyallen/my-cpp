#include <iostream>
#include <string> //getline也要用
#include <algorithm> //sort
#include <vector> //vector
using namespace std;

int main ()
{
	string o , s;
	while (getline(cin, o)) //題目的測資要同時輸入很多個，所以要用while。getline要給2個參數，後面是輸入到哪裡
	{		
		s.clear();	//讓s每次都清乾淨
		int l = o.size();

		for (int i = 0; i < l; i++)
		{
			if (o[i] >= 'a' && o[i] <= 'z' || o[i] >= 'A' && o[i] <= 'Z')
				s += o[i];    //這個寫法很重要！string s不是用[]加入元素。另外，加入元素要+=
		}
		
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] -=('A'- 'a');  //把大寫字母減('A'-'a')就是他們的間隔，這樣不用記間隔數
		}

		sort (s.begin(), s.end());  //s是vector，vector是一種容器，要排序要用begin和end
		//cout << s << endl;
		vector <int> v = {0};	//讓v[0]=0
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] != s[i-1])
				v.push_back(i);
		}
		v.push_back(s.size());	//把s的長度加到v的最後
		//for (int i: v)
		//cout << i << " ";
		//cout << endl;
		int oddnum = 0;
		for (int i = 1; i < v.size(); i++)
		{
			if ((v[i]-v[i-1])%2 == 1)
				oddnum ++;
		}
		if (oddnum > 1) 
			cout << "no..." << endl;
		else	
			cout << "yes !"<< endl;
	}
return 0;
}