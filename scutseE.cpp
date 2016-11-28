#include<iostream> 
#include<algorithm> 
#include<cstring>  
using namespace std; 
long long a[300000],b[300000]; 
int main(){ 
    int i,r,p,k,n,m,len; 
     while(cin>>n){ 
        for(i=1;i<=n;i++) 
          cin>>a[i]; 
          memset(b,1,sizeof(b));  
          b[1]=a[1];len=1; 
          for(i=2;i<=n;i++){ 
            p=1;r=len; 
            while(p<=r){ 
                m=(p+r)/2; 
               if(b[m]<a[i])  
                   p=m+1; 
                  else
                   r=m-1; 
            } 
            b[p]=min(a[i],b[p]); 
            if(p>len) len=p; 
          } 
        cout<<len<<endl; 
     } 
}  

