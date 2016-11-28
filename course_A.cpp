#include<iostream>
using namespace std;
class Account{
	public:
	 explicit Account(int bl)
	    :balance(bl){
	    	if(balance<0)
	    	 balance=0;
	    	 cout<<balance<<endl;
	    }   
	   int credit(int bl){
	   	  if(bl>0)
	   	   return balance+=bl;
	   	 else
	   	  return balance;
	   } 
	   int debit(int bl){
	   	if(balance-bl>0&&bl>0)
	   	  return balance-bl;
	   	  else
	   	   return balance;
	   }
	private:
	  int balance;
};
int main(){
	int a,b,c;
	while(cin>>a>>b>>c){
	  Account getaccount(a);
	  cout<<getaccount.credit(b)<<endl;
	  cout<<getaccount.debit(c)<<endl;	
	}
}
