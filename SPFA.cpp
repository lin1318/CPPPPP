#include<iostream>
#include<cstring>
using namespace std;
int main(){
   int i,j,k,n,m,x,y,l,head,tail; 
	int b[100][100],a[100][100];
	bool v[100];
	int q[100],dis[100],dd[100];
   cin>>n>>m;
   memset(a,0,sizeof(a));
   memset(dd,0,sizeof(dd));
   memset(v,false,sizeof(v));
   memset(dis,1000000,sizeof(dis));
   for(i=1;i<=m;i++){
   	  cin>>x>>y>>l;
   	 a[x][y]=l;b[x][0]++;b[x][b[x][0]]=y; 
   } 
   dis[1]=0;head=1;tail=1;v[1]=true;q[1]=1;
   dd[1]=1;
      while(head<=tail){
      	k=q[head];
      	for(i=1;i<=b[k][0];i++){
      	if(dis[k]+a[k][b[k][i]]<dis[b[k][i]])
      	  dis[b[k][i]]=dis[k]+a[k][b[k][i]];
      	  if (!v[b[k][i]]){
      	  	tail++;
      	  	dd[b[k][i]]++;
      	if(dd[b[k][i]]>n){
      		cout<<"error";
      	    return 0;	
      	} 
      	  	q[tail]=b[k][i];
      	  	v[b[k][i]]=true;
      	   } 
          }
		 v[k]=false;
		 head++;   
      }
    cout<<dis[n]<<endl;
}
