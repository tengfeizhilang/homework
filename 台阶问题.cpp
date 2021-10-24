
最好时间复杂度为O(1),最坏时间复杂度为O(n),空间复杂度为O(1)
最好的情况是只执行一次就成功退出，所以时间复杂度为O(1),最坏情况则是要反复检索n次才能成功，所以最坏时间复杂度为O(n),每次检索所需要的内存空间为1，所以空间复杂度为O(1)

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
//	cout<<" 递归法"<<endl; 
//	cout<<"请输入台阶数："; 
//	cin>>n;
//	cout<<"      一共有 "<<f(n)<<" 种走法";
//	return 0;
//}
int main(){
    int f[90];
    f[1]=1;
    f[2]=2;
    int n;
    cout<<" 递推法      "<<endl; 
    cout<<"请输入台阶数："; 
    while(scanf("%d",&n)!=EOF){
    for(int i=3;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
        cout<<"一共有 "<<f[n]<<" 种走法"<<endl;
  }
}
