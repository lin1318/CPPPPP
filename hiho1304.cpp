#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int s[1000];
int a[5],tag[5],opp[4];
int q;
double suan(double a,double b,int c){
	if(c==1) return a+b;
	if(c==2) return a-b;
	if(c==3) return a*b;
	if(c==4) return a/b;
	if(c==5) return b-a;
	if(c==6) return b/a; 
}
double cal1(){
	double sum;
	sum=s[1];
	sum=suan(sum,s[2],opp[1]);
	sum=suan(sum,s[3],opp[2]);
	sum=suan(sum,s[4],opp[3]);
	return sum;
}
double cal2(){
   double sum1,sum2;
   sum1=suan(s[1],s[2],opp[1]);
   sum2=suan(s[3],s[4],opp[3]);
   sum1=suan(sum1,sum2,opp[2]);
   return sum1;
}
int findopp(){
	int i,j,k;
	double sum1,sum2;
	for(i=1;i<=6;i++)
	 for(j=1;j<=6;j++)
	   for(k=1;k<=6;k++){
	   	opp[1]=i;opp[2]=j;opp[3]=k;
	   	sum1=cal1();
	   	sum2=cal2();
	   	if(sum1==24||sum2==24)
	   	  {
	   	  	 q=1;
	   	  	 break;
	   	  }
	   }
	return q;
}
void finding(int k){
	int i,j;
  if(q==0) 
	if(k==5) 
	  q=findopp();
	else
	 for(i=1;i<=4;i++)
	 if (tag[i]==0){
	 	s[k]=a[i];
	 	tag[i]=1;
	 	finding(k+1);
	 	tag[i]=0;
	 }
}
int main(){
	int i,j,k,m,it,t;
	cin>>t; 
	while(cin>>a[1]>>a[2]>>a[3]>>a[4]){
		q=0;
		memset(tag,sizeof(tag),0);
		finding(1);
	   if(q==0)
	    cout<<"No"<<endl;
	    else
		  cout<<"Yes"<<endl;
		  k++;
		 }	
}
