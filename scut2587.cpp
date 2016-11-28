#include<iostream> 
#include <cstdio>
#include <vector>
const int maxn=1000000;
using namespace std;
bool arr[maxn+1]={false};
vector<long long> produce_prim_number()
{
  vector<long long> prim;
    prim.push_back(2);
    int i,j;
  for(i=3;i*i<=maxn;i+=2)
   {
 if(!arr[i])
 {
 prim.push_back(i);
 for(j=i*i;j<=maxn;j+=i)
 arr[j]=true;
 }
 }
 while(i<maxn)
 {
if(!arr[i])
 prim.push_back(i);
 i+=2;
 }
return prim;
}
long long cal(long long x,long long p)
{
 long long ans=0;
 long long rec=p;
 while(x>=rec)
 {
 ans+=x/rec;
 rec*=p;
 }
 return ans;
}
long long pow(long long n,long long k,long long M)
{
 long long ans=1;
 while(k)
 {
 if(k&1)
 {
 ans=(ans*n)%M;
 }
 n=(n*n)%M;
 k>>=1;
 }
 return ans;
}
long long combination(long long n,long long m)
{
 const long long M=1000000007;
 vector<long long> prim=produce_prim_number();
 long long ans=1;
 long long num;
 for(int i=0;i<prim.size()&&prim[i]<=n;++i)
  {
 num=cal(n,prim[i])-cal(m,prim[i])-cal(n-m,prim[i]);
 ans=(ans*pow(prim[i],num,M))%M;
 }
 return ans;
}
int main()
{
 long long m,n;
 while(~scanf("%lld%lld",&m,&n))
 {
 	if(m==0&&n==0) printf("%d\n",0);
 printf("%lld\n",combination(m,n));
 }
 return 0;
}
