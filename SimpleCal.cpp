#include<iostream>
using namespace std;

//creating functions for Addition , Subtraction , Multiplication and Division

int Add(int n1,int n2)
{
     return n1+n2;     
}

int Sub(int n1,int n2)
{
     return n1-n2;
}

int Mul(int n1,int n2)
{
     return n1*n2;
}

float Div(int n1,int n2)
{
     return n1/n2;
}

//create main function
int main()
{
     cout << "\t....Welcome to Join for simple Calculator....\n";
     cout <<"This calculator display,\n";
     cout <<"\t Addition\n";
     cout <<"\t Subtraction\n";
     cout <<"\t Multiplication\n";
     cout <<"\t Division\n";
     cout <<"Entered your two numbers. \n";
     cout <<"\n";

     //get user input as two numbers
     int num1,num2;
     cout <<"Enter 1st Number: ";
     cin >> num1;

     cout << "Enter 2nd Number: ";
     cin >> num2;
     cout <<"\n";

     cout << "\t.....Calculating.....\n";
     cout <<"Entered 1st Value is: " << num1 <<endl;
     cout <<"Entered 2nd Value is: " << num2 <<endl;
     cout <<"\n";
     cout <<"Addition Of Two Numbers  : "<< Add(num1,num2) << endl; //num1+num2
     cout <<"Subtraction Of Two Numbers  : "<< Sub(num1,num2) << endl; //num1-num2
     cout <<"Multipliction Of Two Numbers  : "<< Mul(num1,num2) << endl; //num1*num2
     cout <<"Division Of Two Numbers  : "<< Div(num1,num2) << endl; //num1/num2

     return 0;
}