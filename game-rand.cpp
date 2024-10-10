#include<iostream>
using namespace std;
int main(){
    
    // variable declearation
    int guess,number;
    
    cout<<" \t \tGuess the number Game"<<endl;
    guess=rand()%100+1;
    cout<<"Input the number you have guessed"<<endl;
    cin>>number;
    while(number!=guess){
        
    if(number>guess){
        cout<<"higher"<<endl;
    }
    else
    {
        cout<<"less"<<endl;
    }
    
    cin>>number;
    
    }
    cout<<"congrates You have guessed the correct number";
    return 0;
}
