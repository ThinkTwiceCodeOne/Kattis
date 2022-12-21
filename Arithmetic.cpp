#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string binary;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='0') binary+="000";
		if(s[i]=='1') binary+="001";
		if(s[i]=='2') binary+="010";
		if(s[i]=='3') binary+="011";
		if(s[i]=='4') binary+="100";
		if(s[i]=='5') binary+="101";
		if(s[i]=='6') binary+="110";
		if(s[i]=='7') binary+="111";
	}
	reverse(binary.begin(),binary.end());
	string ans;
	while(binary.size()%4!=0) binary.push_back('0');
	reverse(binary.begin(),binary.end());
	for(int i=0;i<binary.size();i+=4)
	{
		string h=binary.substr(i,4);
		if(h=="0000") ans.push_back('0');
		if(h=="0001") ans.push_back('1');
		if(h=="0010") ans.push_back('2');
		if(h=="0011") ans.push_back('3');
		if(h=="0100") ans.push_back('4');
		if(h=="0101") ans.push_back('5');
		if(h=="0110") ans.push_back('6');
		if(h=="0111") ans.push_back('7');
		if(h=="1000") ans.push_back('8');
		if(h=="1001") ans.push_back('9');
		if(h=="1010") ans.push_back('A');
		if(h=="1011") ans.push_back('B');
		if(h=="1100") ans.push_back('C');
		if(h=="1101") ans.push_back('D');
		if(h=="1110") ans.push_back('E');
		if(h=="1111") ans.push_back('F');
	}
	reverse(ans.begin(),ans.end());
	while(ans.back()=='0') ans.pop_back();
	reverse(ans.begin(),ans.end());
	if(ans.size()==0) ans.push_back('0');
	cout<<ans<<endl;
	return 0;
}
