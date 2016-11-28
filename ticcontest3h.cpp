#include<iostream>
#include<cstring>
using namespace std;
int a[1000];
int tag[1000];
int main(){
	int i,j,k,n,m,j1,j2,j3,jp1,jp2,jp3;
	 while(cin>>n){
	 	memset(tag,0,sizeof(tag));
	 	for(i=1;i<=n;i++){
	 		cin>>a[i];
	 		if(a[i]<0)
	 		  j1++;
	 		if(a[i]>0) j2++;
	 		if(a[i]==0) j3++;
	 	}
	 	  jp1=j1;jp2=j2;jp3=j3;
	 	  jp1--;
	 	  if(jp1==0||jp2==0){
	 	  	cout<<1; 
	 	  	for(i=1;i<=n;i++)
	 	  	   if(a[i]<0){
	 	  	     cout<<' '<<a[i]<<endl;
	 	  	     break;
	 	  	  }
	 	  	  cout<<n-1-jp3;
	 	  	for(i=1;i<=n-1-jp3;i++)
	 	  	  if(a[i]!=0)
	 	  	    cout<<' '<<a[i];
	 	  	    cout<<endl;
	 	    cout<<jp3;
	 	    for(i=1;i<=jp3;i++)
	 	      cout<<' '<<0;
			   cout<<endl; 
	 	  }else
	 	    if(jp1==1||jp2==1){
	 	        if(jp1==1){
				  cout<<1; 
	 	     	 for(i=1;i<=n;i++)
	 	  	       if(a[i]<0){
	 	  	         cout<<' '<<a[i]<<endl;
	 	  	         tag[i]=1;
	 	  	         break;
	 	  	      }
	 	  	  cout<<n-1-jp3;
	 	  	for(i=1;i<=n-1-jp3;i++)
	 	  	  if(a[i]!=0)
	 	  	    cout<<' '<<a[i];
	 	  	    cout<<endl;
	 	    cout<<jp3;
	 	    for(i=1;i<=jp3;i++)
	 	      cout<<' '<<0;
			   cout<<endl; 
	 	        }	
	 	  }else{
	 	  jp2--;
	 	  if(jp1==0||jp2==0){
	 	  }else
	 	  if(jp1==1||jp2==1){
	 	  }
	    }
	 }
}
