//Here is  project of simple Calculator..
#include<iostream>
using namespace std;

//A function for calculation
double calculate(char operation, double num1, double num2 )
{
    switch(operation){//switch statement for multiple operation
    
    
case '+':return num1+num2;//in case of addition
        
case '-':return num1-num2;//in case of subtraction
        
    case '*':return num1*num2;//in case of multiplication
        
     case '/'://in case of division
     
  if(num2==0){//if num2 is equal to 0 then result of devision is  infinite...because any number divide by zero is equal to 0;
  
  
        
       cout<<"infinite"<<endl;
            
          return 0;      }
          
                return num1/num2;
            }
        }
    



int main(){// main function for calling the function..

        //declaration of variables
       double num1,num2;

            char operation;
            
            char response;
            
 do{//do while loop for iterating the no of operations 
       
 cout<<"enter the num1"<<endl;//to display enter the num1 
        
cin>>num1;//taking the value of num1 from user
        
 cout<<"enter the opration"<<endl;//to display enter the operation
        
  cin>>operation;//for take input from user what operation he wants to perform
        
    cout<<"enter the num2"<<endl;//to display enter the num2
        
      cin>>num2;//to take the input value of num2
        
cout<<"Result"<<calculate(operation,
        
     num1, num2)<<endl;//to display result
             
    cout<<"DO U WANT TO CONTINUE..?(yes\no)"<<endl;
          
  cin>>response;//to take reponse from user
                       
                       }
                       
    while(response=='y');//while response is equal to y the calution continues
    
            
            

    return 0;
}
