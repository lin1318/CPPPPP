#include<array>
#include<iostream>
#include<future>
#include<regex>
#include<mutex>
#include<thread>
#include<atomic>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
	int i;
	array<int,10> a;
	for(auto &i:a)
	 cin>>i;
	 sort(a.begin(),a.end());
	for(auto &i:a)
	  cout<<i<<' ';
} 
