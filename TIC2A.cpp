#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int s[1000];
int a[5],tag[5],opp[4];
int q=0x7ffffff;
int suan(int a,int b,int c){
	if(c==1) return a+b;
	if(c==2) return a-b;
	if(c==3) return a*b;
	if(c==4) return b-a;
}
int cal1(){
	int sum;
	sum=s[1];
	sum=suan(sum,s[2],opp[1]);
	sum=suan(sum,s[3],opp[2]);
	 return sum;
}
int findopp(){
	int i,j,k;
	int sum1,sum2;
	for(i=1;i<=4;i++)
	 for(j=1;j<=4;j++)
	   for(k=1;k<=4;k++){
	   	opp[1]=i;opp[2]=j;
	   	sum1=cal1();
	   	if(sum1<q)
         q=sum1;
	   }
	return q;
}
int finding(int k){
	int i,j;
	if(k==4) 
	  q=findopp();
	else
	 for(i=1;i<=3;i++)
	 if (tag[i]==0){
	 	s[k]=a[i];
	 	tag[i]=1;
	 	finding(k+1);
	 	tag[i]=0;
	 }
	 return q;
}
int main(){
	int i,j,k,m,it;
	while(cin>>a[1]>>a[2]>>a[3]){
		q=0;
		memset(tag,sizeof(tag),0);
		cout<<finding(1)<<endl;
		}
}
