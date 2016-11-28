#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<sstream>
#include<string>
using namespace std;
int main(){
	int a;
	char s[100]; 
	string s1;
	stringstream ss;
    cin>>a; 
	ss<<a;
	ss>>s1;
	cout<<s1<<endl;
} 
