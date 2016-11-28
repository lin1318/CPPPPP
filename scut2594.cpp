#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    double k1,k2;
  while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
      k1=131023;
      k2=131023;
 if(x1-x2!=0) k1=double(y1-y2)/double(x1-x2);
 if (x1-x3!=0)     k2=double(y1-y3)/double(x1-x3);
      if(abs(k1-k2)<0.000001) cout<<"YES"<<endl;
      else
       cout<<"NO"<<endl;
  } 
} 
