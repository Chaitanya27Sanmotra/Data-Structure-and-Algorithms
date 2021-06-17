#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			return false;
		}
		return true;
}
int main()
{
	int n;
	cin>>n;
	for(int i=n-2;i>=n/2;i--)
	{
		int k=n-i;
		if(isprime(k) and isprime(i))
		{
			cout<<k<<" "<<i;
			return 0;
		}
	}
	cout<<"No suitable elements\n";

}