//LOGIC: 
//ex: i/p 5 o/p => 25 
//5+5+5+5+5=25=5*5 i.e number ko number times add karo to get its square bcoz we cant use *

//TC = O(n)


//Issue:
//Iska bit manipulation wala solution nhi samza. See it later

#include<iostream>
using namespace std;

int Square(int n)
{
	int square=0,i;
	
	for(i=1;i<=n;i++)
	{
		square=square+n;
	}
	return square;
}

int main() 
{ 
	//bitwise operations becomes undefined in negative numbers. so unsigned int is used.
	int a;
	
	cout<<"\nEnter your number ";
	cin>>a;
	
	//all corner cases
	//if else if ladder isiliye taaki results defined aaye varna kuch bhi chudaap print hora
	if(a<0)
	{
		a=(-1*a); //usko positive karke function ko call karo
		cout<<"\nsquare of "<<"n" <<" is =>"<<" "<<Square(a);
	}
	else if(a==0)
	{
		cout<<"\n Square of "<<a<<" is "<<" "<<0;
	}
	else
	{
		//calling our function
		cout<<"\nsquare of "<<"n" <<" is =>"<<" "<<Square(a);
	}
		
return 0;
}
