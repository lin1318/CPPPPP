#include<iostream>
#include<iomanip> 
#include<cstdio>
#include<algorithm> 
using namespace std;
int a[5]={0,1,3,3,4};
int main(){
   int j;
   j=lower_bound(a,a+5,2)-a;
   cout<<j<<endl;
} 
