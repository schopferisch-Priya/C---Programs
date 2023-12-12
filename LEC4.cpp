#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int i=1, j;
	
	/*
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<"* ";
			j= j+1;
		}
		cout<<endl;
		i= i+1;
	}*/
	
	/*
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
		i+=1;
	}*/
	
	/*
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<n-j+1 <<" ";
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*
	int count=1;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<count<<" ";
			count++;
			j++;
		}
		cout<<endl;
		i++;
	}*/

	/*	
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<"* ";
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<i<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*   7.
	int count=1;
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<count<<" ";
			count++;
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*     8.	
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<i+j-1<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*      9.
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<i-j+1<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*    10.
	char ch='A';
	while(i<=n){
		j=1;
		while(j<=n){
			cout<<ch<<" ";
			j++;
		}
		cout<<endl;
		ch++;
		i++;
	}*/
	
	/*       11.
	while(i<=n){
		j=1;
		char ch='A';
		while(j<=n){
			cout<<ch<<" ";
			ch++;
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*    12.
	char ch='A';
	while(i<=n){
		j=1;
		while(j<=n){
			cout<<ch<<" ";
			ch++;
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*     13.
	char ch, start='A';
	while(i<=n){
		j=1;
		while(j<=n){
			ch=start+i+j-2;
			cout<<ch<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*       14.
	char ch='A';
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<ch<<" ";
			j++;
		}
		cout<<endl;
		ch++;
		i++;
	}*/
	
	/*      15.
	char ch='A';
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<ch<<" ";
			ch++;
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*     16.
	char ch, start='A';
	while(i<=n){
		j=1;
		while(j<=i){
			ch= start + i+j-2;
			cout<< ch<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*      17.
	char ch, start='A';
	while(i<=n){
		j=1;
		while(j<=i){
			ch=start+n-i+j-1;
			cout<<ch<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*      18.
	while(i<=n){
		j=n-i;
		while(j>=1){
			cout<<" ";
			j--;
		}
		j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*     19.
	while(i<=n){
		j=n-i+1;
		while(j>=1){
			cout<<"*";
			j--;
		}
		cout<<endl;
		i++;
	}*/
	
	/*     20.
	int k=1;
	while(i<=n){
		j=1;
		while(j<i){
			cout<<" ";
			j++;
		}
		k=1;
		while(k<=(n-i+1)){
			cout<<"*";
			k++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*    21.
	int k;
	while(i<=n){
		j=1;
		while(j<i){
			cout<<" ";
			j++;
		}
		k=1;
		while(k<=(n-i+1)){
			cout<<i;
			k++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*     22.
	int k;
	while(i<=n){
		j=n-i;
		while(j>=1){
			cout<<" ";
			j--;
		}
		k=1;
		while(k<=i){
			cout<<i;
			k++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*       23.
	int k;
	while(i<=n){
		j=1;
		while(j<=(i-1)){
			cout<<" ";
			j++;
		}
		k=i;
		while(k<=n){
			cout<<k;
			k++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*       24.
	int k, count=1;
	while(i<=n){
		j=1;
		while(j<=(n-i)){
			cout<<" ";
			j++;
		}
		k=1;
		while(k<=i){
			cout<<count;
			count++;
			k++;
		}
		cout<<endl;
		i++;
	}*/
	
	/*
	int k, l;
	while(i<=n){
		j=n-i;
		while(j>=1){
			cout<<" ";
			j--;
		}
		k=1;
		while(k<=i){
			cout<<k;
			k++;
		}
		l=i-1;
		while(l>=1){
			cout<<l;
			l--;
		}
		cout<<endl;
		i++;
	}*/
	
	int k,l,m;
	while(i<=n){
		j=1;
		while(j<=(n-i+1)){
			cout<<j;
			j++;
		}
		k=i-1;
		while(k>=1){
			cout<<"*";
			k--;
		}
		l=1;
		while(l<i){
			cout<<"*";
			l++;
		}
		m=n-i+1;
		while(m>=1){
			cout<<m;
			m--;
		}
		cout<<endl;
		i++;
	}
}
