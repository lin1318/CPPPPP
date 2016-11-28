#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int father[101];
 
void makeset(int n)
{
   for(int i=1;i<=n;i++)
     {
         father[i]=i;
      } 
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
   int n;
     while(scanf("%d",&n)!=EOF){
         if(n==0)
            break;
           makeset(n);
          int sum=0;
          for(int i=1;i<=n*(n-1)/2;i++)
             scanf("%d %d %d",&a[i].first,&a[i].second,&a[i].distance);
         sort(a+1,a+n*(n-1)/2+1,cmp);
          for(int i=1;i<=n*(n-1)/2;i++)
                if(Union(a[i].first,a[i].second)==0)
                   sum=sum+a[i].distance;
                  printf("%d\n",sum);
          }
           return 0;
}
