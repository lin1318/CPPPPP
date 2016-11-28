#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cstring>
#include<algorithm>
using namespace std;
int father[105]; 
void makeset(int n)
{
   for(int i=1;i<=n;i++)
         father[i]=i;
}
int findset(int x)
{
  if(father[x]!=x)
    {
       father[x]=findset(father[x]);
     }
       return father[x];
}
 
 
int Union(int a,int b)
{
   int x=findset(a);
   int y=findset(b);
     if(x==y)
       return 1;  
     else
    {
      father[x]=y;
      return 0;
     }
}
 
struct country
{
int first;
int second;
double distance;
}a[5001];

struct location
{
	int x;
	int y;
}b[105];

bool cmp(country x,country y)
{
return x.distance<y.distance;
}
 
double dis(int i,int j){
	double x1,y1;
	x1=b[i].x-b[j].x;
	y1=b[i].y-b[j].y;
	x1=x1*x1;y1=y1*y1;
	return sqrt(x1+y1);
} 

int main()
{
   int n,t,i,tot,j;
   int tag[200];
   cin>>t;
     while(t--){
         scanf("%d",&n);
           makeset(n);
          double sum=0;
          for(i=1;i<=n;i++)
             scanf("%d%d",&b[i].x,&b[i].y);
             tot=0;
             memset(tag,0,sizeof(tag));
         for(i=1;i<=n-1;i++)
		   for(j=i+1;j<=n;j++)
		     if(dis(i,j)>=10&&dis(i,j)<=1000){
		     	tot++;
		     	a[tot].first=i;
		     	a[tot].second=j;
		     	a[tot].distance=dis(i,j);
		     }    
         sort(a+1,a+tot+1,cmp);
         int q=0;
          for(i=1;i<=tot;i++)
                if(Union(a[i].first,a[i].second)==0){
                   sum=sum+a[i].distance;
                    q++;
                  }
                    sum=sum*100;
               if(q==n-1)
                cout<<fixed<<setprecision(1)<<sum<<endl;
            else
             cout<<"oh!"<<endl;
          }
           return 0;
}
