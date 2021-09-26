#include<iostream>
using namespace std;
int main()
{
	int n;int i;int sum=1;
	cout<<"  递推法"<<endl<<"请输入n：";
	cin>>n;
	for(i=1;i<=n;i++){
		sum*=i;
	} 
	cout<<n<<"的阶乘为"<<sum;
	return 0;
 } 
//int sum(int n)
//{
//	if(n==1){
//		return 1;
//	}
//	else{
//		return n*sum(n-1);
//	}
//}
//int main()
//{
//	cout<<"  递归法"<<endl<<"请输入n："; 
//	int n;
//	cin>>n;
//	cout<<n<<"的阶乘为"<<sum(n); 
//}
