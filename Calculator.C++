#include<iostream>
using namespace std;
int main()
{ 
    int num;
	cout << "1.Addition \n";
	cout<< "2.Subtraction\n";
	cout<<"3.Multiplication\n";
	cout<<"4.Division\n";
	
	cout<<"Select Number :";
	cin >>num;
	
	if(num==1)
	{
		int num1;
		int num2;
	
		cout<<"Enter 1st Number :";
		cin>>  num1;
		
		cout<<"Enter 2nd Number :";
		cin>> num2;
		
		int add = num1+num2;
		cout<<"Additin is:"<<add;
	}
	
	if(num==2)
	{
		int num1;
		int num2;
	
		cout<<"Enter 1st Number :";
		cin>>  num1;
		
		cout<<"Enter 2nd Number :";
		cin>> num2;
		
		int sub= num1-num2;
		cout<<"Subtraction is:"<<sub;
	}
	
	if(num==3)
	{
		int num1;
		int num2;
	
		cout<<"Enter 1st Number :";
		cin>>  num1;
		
		cout<<"Enter 2nd Number :";
		cin>> num2;
		
		int multi= num1*num2;
		cout<<"Multiplication is:"<<multi;
	}
	
	if(num==4)
	{
	    int num1;
		int num2;
	
		cout<<"Enter 1st Number :";
		cin>>  num1;
		
		cout<<"Enter 2nd Number :";
		cin>> num2;
		
		int div= num1/num2;
		cout<<"Division is:"<<div;

	}
	return 0;
}
