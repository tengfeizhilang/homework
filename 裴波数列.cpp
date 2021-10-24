
时间复杂度为O（n），空间复杂度为O（1）

#include<iostream>
#include<stdio.h>
using namespace std;
int pei(int n)
{
	if(n==1||n==2){
	return 1;}
	else{
    return pei(n-1)+pei(n-2);}
 } 
int pei1(int n)
{
	int a[n];
	a[1]=1;a[2]=1;
	for(int i=3;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	return a[n];
}
 int main()
 {
 	int n;
    cin>>n;
    cout<<"µÝ¹é·¨£º"<<endl; 
    for(int i=1;i<=n;i++){ 
    	printf("%-5d",pei(i));
    	if(i%10==0){
    		cout<<endl;
		}
	}
	cout<<endl<<"µÝÍÆ·¨£º"<<endl;
	for(int i=1;i<=n;i++){
    	printf("%-5d",pei1(i));
    	if(i%10==0){
    		cout<<endl;}}
 	return 0;
 }
