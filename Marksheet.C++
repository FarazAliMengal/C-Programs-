#include<iostream>
using namespace std;
int main()
{
	int num[5];
	string n[5];
	
	cout<<"Entet Your Name :";
	cin>>n[0];
	
	cout<<"Enter Your Uni :";
	cin>>n[1];
	
	cout<<"Enter Your Department :";
	cin>>n[2];
	
	cout<<"Enter you Roll No :";
	cin>>n[3];
	
	cout<<"Enter Java Marks:";
	cin>>num[0];
	
	cout<<"Enter Php Marks :";
	cin>>num[1];
	
	cout<<"Enter Css Marks :";
	cin>>num[2];
	
	int total=300;
	int obtain=num[0]+num[1]+num[2];
	
	cout<<"Your Name :"<<n[0];
	cout<<"University:"<<n[1];
	cout<<"Department :"<<n[2];
	cout<<"Roll No :"<<n[3];
	
	cout<<"Total Marks :"<<total;
	cout<<"obtained Marks :"<<obtain;
	


}
