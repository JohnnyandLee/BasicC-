#include<iostream>
#include<ctime>
using namespace std;
int main(){
	int number[6];
	srand(time(NULL));
	
	for(int index = 0; index < 6;){
	   	number[index] = rand() % 38 + 1;
	   	int flag = 0;
	   	for(int pre = 0; pre < index; pre++){
	    	if(number[index] == number[pre]) flag = 1;
	    } 
	    if(flag == 0)
	    index++;
	}
	for(int index = 0; index < 6; index++) cout << number[index] << " ";
	   
	int spe;
	int flag;
	
	do{
		flag = 0;
		spe = rand() % 8 + 1;
		for(int index = 0; index < 6; index++) if(spe == number[index]) flag = 1;
	}while(flag == 1);
	
	
	cout<<"Special number is: "<<spe<<endl;
	cout<<"After arrange\n"; 
	for(int index = 0; index < 6; index++){
		for(int next = index + 1; next < 7; next++){
		    if(number[index] < number[next]) number[index] < number[next];
		    else if(number[index] > number[next]){
			    int temp = number[index];
		        number[index] = number[next];
		        number[next] = temp;
		    }      
		}                   
	}
	    
	for(int index = 0; index < 6; index++)cout << number[index] << " ";
	cout<<"Special number is: "<<spe<<endl;    
	     
	system("pause");
}
