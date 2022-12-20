#include<bits/stdc++.h>
using namespace std;
char arr[4]={'+','-','*','/'};
int precedence(char op){
	if(op == '+'||op == '-')
	return 1;
	if(op == '*'||op == '/')
	return 2;
	return 0;
}

int applyOp(int a, int b, char op){
	switch(op){
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return a / b;
	}
}
bool compute(string tokens,int target){
	int i;
	stack <int> values;
	stack <char> ops;
	for(i = 0; i < tokens.length(); i++){
		if(tokens[i]==' ') continue;
		if(isdigit(tokens[i])){
			values.push(tokens[i]-'0');
		}
		else
		{
			while(!ops.empty() && 
				precedence(ops.top())>= precedence(tokens[i])){
				int val2 = values.top();
				values.pop();
				int val1 = values.top();
				values.pop();
				char op = ops.top();
				ops.pop();
				values.push(applyOp(val1, val2, op));
			}
			ops.push(tokens[i]);
		}
	}
	while(!ops.empty()){
		int val2 = values.top();
		values.pop();
				
		int val1 = values.top();
		values.pop();
				
		char op = ops.top();
		ops.pop();
				
		values.push(applyOp(val1, val2, op));
	}
	return values.top()==target;
}
bool solve(int n)
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			for(int k=0;k<4;k++)
			{
				string s="";
				s=string("4")+" "+arr[i]+" "+string("4")+" "+arr[j]+" "+string("4")+" "+arr[k]+" "+string("4");
				if(compute(s,n)==true) 
				{
					cout<<s<<" = "<<n<<endl;
					return true;
				}
			}
		}
	}
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(solve(n)==false) cout<<"no solution"<<endl;
	}
}
