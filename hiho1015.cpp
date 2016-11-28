#include<iostream>
#include<string>
using namespace std;
  string pat,tag;
 int overlay[100050];
 int lp,lt;
  void dalao(int j){
  	int h;		
  		h=overlay[j-1];
		  while(h>=0&&pat[h+1]!=pat[j])
		   h=overlay[h]; 
		 if(pat[h+1]==pat[j])
		   overlay[j]=h+1;
		else
		  overlay[j]=-1; 	 
  }
  int main(){
   int i,j,k,n,m,tot;
   char c;
     cin>>n;
     m=1;
   while(m<=n){
   	cin>>pat>>tag;
   	lp=pat.size();
   	lt=tag.size(); 
     tot=0;
     overlay[0]=-1;
  for(i=1;i<lp;i++) dalao(i);
     j=0;k=0;
   	  while(j<lt){
   	  	if(tag[j]==pat[k]){j++;k++;} 
			else
			  if(k==0)
			     j++;
			else
			   	k=overlay[k-1]+1;
	      if (k==lp){ 
		      tot++;
		      k=overlay[k-1]+1; 
		    }   	  
     	}
		cout<<tot<<endl;
		m++; 
   	    }	      
}
