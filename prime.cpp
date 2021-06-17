#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int b;
    int counta=0;
    int counte=0;
    int countg=0;
    int counth=0;
    int counti=0;
    int countn=0;
    int counto=0;
    int countr=0;
    int counts=0;
    int countt=0;
    int countv=0;
    int countx=0;
    int countw=0;
    int countu=0;
    int countf=0;
    int countz=0;
    cin>>b;
    string array;
    cin>>array;
    for(int q=0;q<b;q++)
    {
    	if(array[q]=='a')
    	counta++;
    	if(array[q]=='e')
    	counte++;
    	if(array[q]=='g')
    	countg++;
    	if(array[q]=='h')
    	counth++;
    	if(array[q]=='i')
    	counti++;
    	if(array[q]=='n')
    	countn++;
    	if(array[q]=='o')
    	counto++;
    	if(array[q]=='r')
    	countr++;
    	if(array[q]=='s')
    	counts++;
    	if(array[q]=='t')
    	countt++;
    	if(array[q]=='v')
    	countv++;
    	if(array[q]=='x')
    	countx++;
    	if(array[q]=='w')
    	countw++;
    	if(array[q]=='u')
    	countu++;
    	if(array[q]=='f')
    	countf++;
    	if(array[q]=='z')
    	countz++;
    }  
	 for(int l=1;l<=min(countz,countr);l++)
    cout<<0<<" ";
    for(int l=1;l<=min(counto,countn);l++)
    cout<<1<<" ";
    for(int l=1;l<=min(countt,countw);l++)
    cout<<2<<" ";
    for(int l=1;l<=min(counth,countr);l++)
    cout<<3<<" ";
    for(int l=1;l<=min(countf,countu);l++)
    cout<<4<<" ";
    for(int l=1;l<=min(countf,countv);l++)
    cout<<5<<" ";
    for(int l=1;l<=min(counts,countx);l++)
    cout<<6<<" ";
    for(int l=1;l<=min(countv,counts);l++)
    cout<<7<<" ";
    for(int l=1;l<=min(countg,counth);l++)
    cout<<8<<" ";
	










	}




