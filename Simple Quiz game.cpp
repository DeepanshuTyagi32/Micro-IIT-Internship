//This is C++ A Quiz Game...

#include <iostream>
using namespace std;

const int Num_Questions=5;

string questions[Num_Questions]={

   //Quiz questions 
   
    "what is the name of  pink city?",
    
   "what is the capital of UP?",
   
    "what is the capital of MP?",
    
    "What is the capital of Bihar ?",
    
    "what is the capital of India?"
};

string answer[Num_Questions]={

//Corrected Answerws

    "Jaipur",
    
    "Lucknow",
    
    "Bhopal",
    
    "Patna",
    
    "New Delhi"
    

    
};

int main() {

   cout<<"Most welcome to C++ Quiz"<<endl;
   
     int score=0;//in starting score=0
     
    for(int i=0;i<Num_Questions;i++){
    
    //for loop for iterating questions & answers.
    
    cout<<questions[i]<<endl;
    
        string userAnswers;
        
                 cin>>userAnswers;
        
        if(userAnswers==answer[i]){
        
  //if else statement for checking answers
  
 score++;//if correct increament score by 1;
 
            cout<<"Correct!"<<endl;
            
        }
        
        
         else{//if answer is incorrect,"incorrect"! and correct answer will be displayed
        
cout<<"Incorrect. The correct Answer                 is"<<answer[i]<<endl;
    
    
        }
    }
    
    
  //Now Game over and to display final score...

 cout<<"Game over.Your final score is"<<score<<endl;
  
    return 0;
}
