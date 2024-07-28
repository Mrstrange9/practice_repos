#include<iostream>
using namespace std;

int main()
{
	int a = 3;
	int b = 5;
	int c,d;
	float e;
	
	//arithmetic op
	c = a+b;
	d = a*b;
	e = a/b;
	cout<<c<<","<<d<<","<<e<<endl;
	
	// unary op
	c = -a;
	cout<<c<<endl;
	
	// assignment op
	c = a;
	cout<<c<<endl;
	c += 1;
	cout<<c<<endl;
	
	// relational op
	cout<<(a>b)<<endl;
	
	// logical op
	cout<<((a<b)||(a>b))<<endl;
	cout<<((a<b)&&(a>b))<<endl;
	
	//bitwise op
	cout<<(2%3)<<endl;
	cout<<(2|3)<<endl;
	cout<<(!8)<<endl;
	cout<<(100>>2)<<endl;
	
	
	return 0;
}
