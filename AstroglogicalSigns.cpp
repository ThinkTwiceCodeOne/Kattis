#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int date;
		string month;
		cin>>date>>month;
		if(month=="Mar" && date>=21) cout<<"Aries"<<endl;
		else if(month=="Apr" && date<=20) cout<<"Aries"<<endl;
		else if(month=="Apr" && date>=21) cout<<"Taurus"<<endl;
		else if(month=="May" && date<=20) cout<<"Taurus"<<endl;
		else if(month=="May" && date>=21) cout<<"Gemini"<<endl;
		else if(month=="Jun" && date<=21) cout<<"Gemini"<<endl;
		else if(month=="Jun" && date>=22) cout<<"Cancer"<<endl;
		else if(month=="Jul" && date<=22) cout<<"Cancer"<<endl;
		else if(month=="Jul" && date>=23) cout<<"Leo"<<endl;
		else if(month=="Aug" && date<=22) cout<<"Leo"<<endl;
		else if(month=="Aug" && date>=23) cout<<"Virgo"<<endl;
		else if(month=="Sep" && date<=21) cout<<"Virgo"<<endl;
		else if(month=="Sep" && date>=22) cout<<"Libra"<<endl;
		else if(month=="Oct" && date<=22) cout<<"Libra"<<endl;
		else if(month=="Oct" && date>=23) cout<<"Scorpio"<<endl;
		else if(month=="Nov" && date<=22) cout<<"Scorpio"<<endl;
		else if(month=="Nov" && date>=23) cout<<"Sagittarius"<<endl;
		else if(month=="Dec" && date<=21) cout<<"Sagittarius"<<endl;
		else if(month=="Dec" && date>=22) cout<<"Capricorn"<<endl;
		else if(month=="Jan" && date<=20) cout<<"Capricorn"<<endl;
		else if(month=="Jan" && date>=21) cout<<"Aquarius"<<endl;
		else if(month=="Feb" && date<=19) cout<<"Aquarius"<<endl;
		else if(month=="Feb" && date>=20) cout<<"Pisces"<<endl;
		else if(month=="Mar" && date<=20) cout<<"Pisces"<<endl;
	}
	return 0;
}
