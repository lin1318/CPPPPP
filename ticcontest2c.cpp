#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int a[1000000];
int chg(int n){
	int i,k,j;
	k=0;
	for(i=n;i>=1;i--)
	{
		j=i;
	  if(a[i]!=-1){
	    while((j>0)&&(a[j]!=-1))
	     j=j/2;
	    if(j!=0&&a[i]!=-1) k=1;
	  }
	}  
  return k;
}
int main(){
   string s;
   int i,j,k,n,m,ml;
   while(cin>>s){
   	memset(a,-1,sizeof(a));
   	ml=0;
     while(s!="()"){
     	k=s[1]-48;
     	i=2;
     	while((s[i]-48>=0)&&(s[i]-48<=9)){
     		k=k*10+(s[i]-48);
     		i++;
     	}
     	i++;j=1;
		 while((i<s.length())&&((s[i]=='L')||(s[i]=='R'))){
		 	 if(s[i]=='L') 
			   j=j*2;
			  else
			   j=j*2+1;
			   i++;
		}
		 ml=max(j,ml); 
		 if(a[j]==-1) a[j]=k;
		 else {
		   cout<<"not complete"<<endl;
		   k=0;
		   break;}
		   k=1;
		cin>>s; 
       }
     if(k==1){
           j=chg(ml);
           if(j==0){
           	 for(i=1;i<=ml;i++)
           	 if(a[i]!=-1)
           	  cout<<a[i]<<' ';
           	  cout<<endl;
            }
         else
           cout<<"not complete"<<endl;
         }
     }
}
