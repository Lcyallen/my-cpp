#include <iostream>
#include <iomanip>	//此題輸出格式要求小數點下三位所以要有標頭 
using namespace std;

int main (){
	string time;
	double angle=0;	//要把夾角宣告為double 
	while(cin>>time, time!="0:00"){
		if (time.size()==4)	//想到用字串長度做為區別 
		angle=(time[0]-'0')*30.+((time[2]-'0')*10.+(time[3]-'0'))/2.-((time[2]-'0')*10.+(time[3]-'0'))*6.;
		else
		angle=((time[0]-'0')*10+(time[1]-'0'))*30+((time[3]-'0')*10.+(time[4]-'0'))/2.-((time[3]-'0')*10.+(time[4]-'0'))*6.;
		angle=(angle>=0)*angle-(angle<0)*angle;	//若分針走得比時針快時，夾角會變成負的。故先把負夾角變成正的 
		if (angle<=180)
			cout<<fixed<<setprecision(3)<<angle<<endl;//要輸出小數點下三位 
		else
			cout<<fixed<<setprecision(3)<<360-angle<<endl;
	}

	return 0;
}

