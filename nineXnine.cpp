#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   int a, b, c, d = 1, e = 5;
   for(c = 1; c <= 2; c++){
	   if(c == 2){
		   d = 6;
		   e = 9;
	   } 
	   for(a = 1; a <= 9; a++){
	       for(b = d; b <= e; b++){
		       cout<<b<<"X"<<a<<"="<<setw(2)<<a * b<<" ";//setw: for alignment 
		   } 
	       cout<<endl; 
	    }
	    cout<<endl;
	}
    system("pause");
}
