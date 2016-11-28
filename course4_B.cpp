#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double d;
   while(cin>>d){
   	cout<<fixed;
   	if(d-40<0.00001)
   	  cout<<setprecision(2)<<d*10<<endl;
    else{
    	d=400+(d-40)*15;
    	cout<<setprecision(2)<<d<<endl;
     } 
   }	
} 
