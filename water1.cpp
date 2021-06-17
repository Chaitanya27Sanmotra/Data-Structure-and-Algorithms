#include<bits/stdc++.h>
using namespace std;
bool isprime(long long n)
{
	for(long long i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			return false;
		}
		return true;
}
int main()
{
	long long n;
	cin>>n;
	for(long long i=n-2;i>=n/2;i--)
	{
		long long k=n-i;
		if(isprime(k) and isprime(i))
		{
			cout<<k<<" "<<i;
			return 0;
		}
	}
	cout<<"No suitable elements\n";

}