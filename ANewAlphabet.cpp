#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char,string> m;
	m['a']='@';
	m['b']='8';
	m['c']='(';
	m['d']="|)";
	m['e']='3';
	m['f']='#';
	m['g']='6';
	m['h']="[-]";
	m['i']='|';
	m['j']="_|";
	m['k']="|<";
	m['l']='1';
	m['m']="[]\\/[]";
	m['n']="[]\\[]";
	m['o']='0';
	m['p']="|D";
	m['q']="(,)";
	m['r']="|Z";
	m['s']='$';
	m['t']="']['";
	m['u']="|_|";
	m['v']="\\/";
	m['w']="\\/\\/";
	m['x']="}{";
	m['y']="`/";
	m['z']='2';
	string s;
	getline(cin,s);
	string res="";
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>=65 && s[i]<=90) s[i]=s[i]+32;
	}
	for(int i=0;i<s.size();i++)
	{
		if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)) res=res+m[s[i]];
		else res=res+s[i];
	}
	string abc="@11 `/0|_||Z 8@$3 @|Z3 8310[]\[]6 ']['0 |_|$.";
	cout<<res<<endl;
	return 0;
}
