#include<iostream>
#include<iomanip>
using namespace std;
int main(){ 
  while (1){
	  	int a,b,c,d,e,r;
	  	cout<<"Enter two positive integers:\n";
	  	cin>>a>>b;                                                  
	  	if(a < 0 || b < 0) cout<<"Error input!!"<<'\n';
		else {
		  c = a;
	      d = b; 
	      while(a > b){  
		     r = a % b;
	         if(r == 0) break;
	     	 a = b;
	         b = r; 
	   }  
	   while(a < b){  
	      r = b % a;
	      if(r == 0) break;
	      b = a;
	      a = r; 
	   }
	          
	   if(a > b){                         
	   	  e = c * d / b;     
	      cout<<"Greatest Common Divisor:"<<b<<"\nLeast Common Multiple:"<<e<<'\n';
	      cout<<"\n";
	   }
	   else if(a < b){
	      e = c * d / a;
	      cout<<"Greatest Common Divisor:"<<a<<"\nLeast Common Multiple:"<<e<<'\n'; 
	      cout<<"\n";
 	   }
 	   else{
 	   	  cout<<"Greatest Common Divisor:"<<a<<"\nLeast Common Multiple:"<<a<<'\n';
	      cout<<"\n";
	   }
  }
}              
 system("pause");
    
}
