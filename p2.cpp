#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;
const double pai=3.14159265;
int main(){
	double x1,x2,x3,y1,y2,y3,a,b,c,s,j,l;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
		c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		j=(b*b+c*c-a*a)/(2*b*c);
		j=sqrt(1-j*j);
		l=a/j;
		s=l*pai;
		printf("%.2lf\n",s);
	}
}
