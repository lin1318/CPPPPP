#include<iostream>
#include<algorithm>
using namespace std;
int a[10000][2];
int tt[10000];
  void qsort(int l,int r){
  	int i,j,mid,q;
  	  i=l;j=r;mid=a[(i+j)/2][0];
  	  do{
  	  	  while(a[i][0]>mid) i++;
  	  	  while(a[j][0]<mid) j--;
  	  	  if(i<=j){
  	  	  	q=a[i][0];a[i][0]=a[j][0];a[j][0]=q;
  	  	  	q=a[i][1];a[i][1]=a[j][1];a[j][1]=q;
  	  	  	i++;j--;
  	  	  }
  	  }while(i<j);
  	  if(l<j) qsort(l,j);
  	  if(i<r) qsort(i,r);
  }
int main(){
   int i,j,k,n,m,p,t,mx,dd,sum;
    cin>>t;
    while(t--){
    	cin>>n;sum=0;
    	for(i=1;i<=n;i++)
    		cin>>a[i][0];
    	for(i=1;i<=n;i++)
    	   cin>>a[i][1];
    	  qsort(1,n); 
    	  p=1;j=0;
    	  dd=a[p][0]+1;
    	while(dd>1){
    		  dd--;
         	for(i=1;i<=n&&a[i][0]>=dd;i++);
    	      p=i;
    	   while(p>1&&a[p-1][0]==dd) {
    	      p--;
    	      j++;
			  tt[j]=a[p][1];
		 }
			  sort(tt+1,tt+j+1); 
    	       if(j!=0) j=j-1;
        	}
    	for(i=1;i<=j;i++) sum+=tt[i];
        cout<<sum<<endl;
    }
}
