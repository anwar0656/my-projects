#include<iostream>
using namespace std;
int main ()
{
	// variable declearation for calculator 
	int num1,num2,result;
	char operators;
	cout<<"enter a two numbers"<< endl;
	cin>>num1>>num2;
	
	cout<<"Select an arthimatic operator "<<endl;
	cin>>operators;
	
	switch(operators){
	case '+':
	result=num1+num2;		
	cout<<result<<endl;
	break;
	case '-':
	result=num1-num2;		
	cout<<result<<endl;
	break;
	case '*':
	result=num1*num2;		
	cout<<result<<endl;
	break;
	case '/':
	result=num1/num2;		
	cout<<result<<endl;
	break;
	case '%':
	result=num1%num2;		
	cout<<result<<endl;
	break;
	default:
	cout<<"it is not an arthimatic operator";
		
	}
	
	
}
