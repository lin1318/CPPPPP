#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double x;
	while(cin>>x){
		cout<<fixed;
		x=200+x*0.09;
		cout<<setprecision(2)<<x<<endl;
	}
}
