#include<iostream>
#include<cmath>
#include<string> 
#include<cstring>
#include<sstream>
#include<cstdio>
using namespace std;
double cal(double x,double y,string st){
	if(st=="+"){
		return x+y;
	}if(st=="-"){
		return x-y;
	}if(st=="*"){
		return x*y;
	}if(st=="/"){
		 return x/y;
	}
}
int main(){
	double k;
	int i,n,n1,l1,l2;
	string s;
	string ss[1000];
	int b[1000];
	double a[1000];
	memset(b,0,sizeof(b));
	l1=-1;l2=-1;
	while(cin>>s){
		stringstream sb;
	  if(s.length()>1){
	  	l2++;
	  	sb<<s;
	  	sb>>a[l2];
	  	b[l1]++;
	  }else
	  {
	  	l1++;
	  	ss[l1]=s;
	  }
	while(l1!=-1&&b[l1]==2){ 
		 a[l2-1]=cal(a[l2-1],a[l2],ss[l1]);
		 b[l1]=0;
		 l1--;
		 b[l1]++;
		 l2--;
     	}
	}
  printf("%f\n",a[0]);
}
