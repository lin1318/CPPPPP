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
int distance;
}a[5001];

bool cmp(country x,country y)
{
return x.distance<y.distance;
}
int main()
{
   int j1,n,t,i,tot,j,m;
   int tag[200];
     while(scanf("%d%d",&n,&m)&&n){
          int sum=0;
             tot=0;
             memset(tag,0,sizeof(tag));
           for(i=1;i<=m;i++)
              scanf("%d%d%d",&a[i].first,&a[i].second,&a[i].distance);
          sort(a+1,a+m+1,cmp);
         int q=0;
         j=0;j1=0;sum=0x7ffffff;
          for(t=1;t<=m-n+2;t++){
          	 makeset(n);
          	 j=0;j1=0;
           for(i=t;i<=m;i++)
                if(Union(a[i].first,a[i].second)==0){
                   if(j==0)
                     j=i;
                    q++;
                    if(q==n-1)
                      j1=i;
                  }
               if(q==n-1)
                sum=min(a[j1].distance-a[j].distance,sum);
                q=0;
             }
             if(sum==0x7ffffff)
               cout<<-1<<endl;
             else
              cout<<sum<<endl;
          }
           return 0;
}
