#include<iostream>
using namespace std;
//int f(int n)
//{
//	if(n==1){return 1;
//	}
//	if(n==2){
//		return 2;
//	}
//	if(n>2){
//		return f(n-1)+f(n-2);
//	}
//}
//int main()
//{
//	int n;
//	cout<<" �ݹ鷨"<<endl; 
//	cout<<"������̨������"; 
//	cin>>n;
//	cout<<"      һ���� "<<f(n)<<" ���߷�";
//	return 0;
//}
int main(){
    int f[90];
    f[1]=1;
    f[2]=2;
    int n;
    cout<<" ���Ʒ�      "<<endl; 
    cout<<"������̨������"; 
    while(scanf("%d",&n)!=EOF){
    for(int i=3;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
        cout<<"һ���� "<<f[n]<<" ���߷�"<<endl;
  }
}
