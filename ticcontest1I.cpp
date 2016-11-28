#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int a[100000];
int b[100050][2],b1[100050][2];
int main(){
	int i,j,k,n,m,he,tal,tot,tal1;
	while(cin>>n){
		if(n<=2){
			cout<<0<<endl;
			continue;
		}
	else
	{
		for(i=0;i<=n-1;i++)
		 cin>>a[i];
		 sort(a,a+n);
		  k=0;
	    tal=-1;
	    i=1;
	    memset(b,0,sizeof(b));
	    memset(b1,0,sizeof(b1));
		while(i<=n){
	      	tal++;
	      	b[tal][0]=a[i-1];
	      	b[tal][1]=1;
	      	b1[tal][0]=a[i-1];
	      	b1[tal][1]=1;
	      while(i<=n-1&&a[i]==a[i-1]){
	      	  b[tal][1]++;
	      	  b1[tal][1]++;
	      	  i++;
		    }
	        i++;
	    he=0;
	    if(tal<2){
	    	cout<<0<<endl;
	    	continue;
	    }
      else{
      	 tot=0;int cp=0;int q=-1;
      	 tal1=tal;
           while(he<=tal){
           	  cp=0;q=-1;
	           while(cp<=2&&he<=tal){
	 	         if(b[he][1]!=0){
				    b[he][1]--;
				    if(q==-1&&b[he][1]!=0)
				      q=he;
				    cp++;
				   } 
	 	           he++;
				  }
				if(cp==3) tot++;
				if(q!=-1)
				 he=q;
		     }
		    cout<<tot<<endl;
      	 he=0;q=-1;int kk=0;
           while(he<=tal1){
           	  cp=0;q=-1;
	           while(cp<=2&&he<=tal1){
                    if(b1[he][1]!=0){
				    b1[he][1]--;
				    if(q==-1&&b1[he][1]!=0)
				       q=he;
				       cp++;
				       if(cp<=2) 
				       cout<<b1[he][0]<<' ';
				       else
				        cout<<b1[he][0];
				     } 
	 	            he++;
				   }
				   kk++;cout<<endl;
				   if(q!=-1)
				    	he=q;
				   if(kk==tot) break;
		     	}
	          }
			} 
	     }
   	 }
}
