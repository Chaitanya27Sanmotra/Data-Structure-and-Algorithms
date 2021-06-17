#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		for(int i=1;i<str.length();i++)
		{
			if(str[i]=='?')
			{   
				 if(str[i-1]=='a' && str[i-1]=='c'|| str[i+1]=='a'&&str[i+1]=='c') str[i]='b';
				else if(str[i-1]=='b' && str[i+1]=='a' ||str[i-1]=='a' && str[i+1]=='b') str[i]='c';
				else if(str[i-1]=='c' && str[i+1]=='b' ||str[i-1]=='b' && str[i+1]=='c') str[i]='a';
				else if(str[i-1]=='a') str[i]='b';
				else if(str[i-1]=='b') str[i]='c';
				else if(str[i-1]=='c') str[i]='a';

			}
		}int k=0;
		for(int i=0;i<str.length()-1;i++)
		{if(str[i]==str[i+1])
			k=1;
		}
		if(!k)
			cout<<str<<"\n";
		else 
			cout<<-1<<"\n";


	}
}