//My simple calculator
#include <iostream>
using namespace std;

int main(){
	float input1, input2;
	string operation;
	string answer;
	//getting user input
	cout<<"--Welcome to simple calculator!--"<<endl;
	//Runing loop once
	cout<<"Enter first input:"<<endl;
	cin>>input1;
	cout<<"Enter second input:"<<endl;
	cin>>input2;
	cout<<"Enter a-sum, s-difference, p-product, d-division"<<endl;
	cin>>operation;
	//adition
	 if (operation == "a")
      cout<<"The sum is: "<<input1 + input2<<endl;
    //subtraction
     if (operation == "s")
       cout<<"The difference is: "<<input1 - input2<<endl;
    //multiplication
     if (operation == "p")
       cout<<"The product is: "<<input1 * input2<<endl;
    //division
     if (operation == "d")
       cout<<"The quotient is: "<<input1 / input2<<endl;
    //Loop for if user wants to continue with other calculations
	do{
	cout<<"Do you wish to continue, y/n?"<<endl;
	cin>>answer;
	if(answer == "y"){
			cout<<"Enter first input:"<<endl;
	cin>>input1;
	cout<<"Enter second input:"<<endl;
	cin>>input2;
	cout<<"Enter a-sum, s-difference, p-product, d-division"<<endl;
	cin>>operation;
	//adition
	 if (operation == "a")
       cout<<"The sum is: "<<input1 + input2<<endl;
    //subtraction
     if (operation == "s")
       cout<<"The difference is: "<<input1 - input2<<endl;
    //multiplication
     if (operation == "p")
       cout<<"The product is: "<<input1 * input2<<endl;
    //division
     if (operation == "d")
       cout<<"The quotient is: "<<input1 / input2<<endl;
	}
    else if(answer == "n")
      cout<<"Thanx for using our calculator!";
    else
      cout<<"Enter valid input";
   }while(answer != "n");
}
