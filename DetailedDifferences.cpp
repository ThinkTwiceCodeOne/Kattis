#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
	cout<<s1<<endl;
	cout<<s2<<endl;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i]) cout<<"*";
            else cout<<".";
        }
        cout<<endl;
	cout<<endl;
    }
    return 0;
}
