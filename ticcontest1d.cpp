#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string tag[2050];
string a[1050][2];
int main(){
   int i,j,k,n,m,l;
   string s1,s2;
   while(cin>>n){
   	  l=0;k=0;
   	  while(n--){
   	  	cin>>s1>>s2;
   	     m=0;
   	  	for(i=1;i<=k;i++)
   	  	  if(s1==a[i][1]) {
   	  	  	m=i;break;
   	  	  }
   	  	  if(m==0){
   	  	  	l++;k++;
   	  	  	a[k][0]=s1;
   	  	    a[k][1]=s2;
		    tag[l]=s1;
			l++;
			tag[l]=s2;	
   	  	  }
   	  	else{
   	  		 j=0;
   	  	  for(i=1;i<=l;i++)
			  if(tag[i]==s2)
			     {
                   j=1;
				   break;
			      }
			if(j==0)
			   a[m][1]=s2;
   	    }
      }
      cout<<k<<endl;
   	  for(i=1;i<=k;i++)
   	     cout<<a[i][0]<<' '<<a[i][1]<<endl;
    }
}
