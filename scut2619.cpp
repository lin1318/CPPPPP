#include<iostream>
#include<iomanip>
using namespace std;
double pia=3.14159;
int main(){
	double r;
	while(cin>>r){
		cout<<fixed<<setprecision(5);
		cout<<r*2<<' '<<r*2*pia<<' '<<r*r*pia<<endl;
	}
}
