#include<iostream>
#include <bits/stdc++.h>
using namespace std;
huiwen2(string s)
{
	int n=s.length();
	if(n==0||n==1){
		return true; 
	}
	else{
		for(int i=1;i<n;i++){
			if(s[i]!=s[n-1-i]){
				return false; 
			}
			else{
				return true; 
			}
		}
	}
}
huiwen(string s)
{
	int n=s.length();
	bool is=true;
	for(int i=1;i<n;i++){

		if(s[i]!=s[n-1-i]){

			is=false;

		}
}   cout<<"µÝÍÆ·¨£º"<<endl<<(is?"Yes":"No")<<endl;
 } 
 int main(int argc, char** argv)
 {
 	string s;
 	cin>>s;
 	cout<<"µÝ¹é·¨£º"<<endl<<huiwen2(s)<<endl; 
    cout<<huiwen(s); 
	return 0;
 }

