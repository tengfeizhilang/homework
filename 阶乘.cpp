#include<iostream>
using namespace std;
int main()
{
	int n;int i;int sum=1;
	cout<<"  ���Ʒ�"<<endl<<"������n��";
	cin>>n;
	for(i=1;i<=n;i++){
		sum*=i;
	} 
	cout<<n<<"�Ľ׳�Ϊ"<<sum;
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
//	cout<<"  �ݹ鷨"<<endl<<"������n��"; 
//	int n;
//	cin>>n;
//	cout<<n<<"�Ľ׳�Ϊ"<<sum(n); 
//}
