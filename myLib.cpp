//myLib.cpp - implementation
#include <myLib.h>
#include <iostream.h>
using namespace std;
int x,a,n;
int main()
{
std::cout << "dame un numero";
cin >> x;
std::cout<<"cubo= 0 o cuadrado =1 o fibonacci= 2"<<endl;
cin>>a;
while(x!=0){

    if(a==0)
		{
    	cube(x);
		}
    if(a==1){
        square(x);
	}
    else{
        fibonacci(x);
    }
    std::cout << "dame un numero";
	cin >> x;
	std::cout<<"cubo= 0 o cuadrado =1 o fibonacci= 2"<<endl;
	cin>>a;
}
int square (x);
{
	return x*x;
}


int cube (x);
{	
	return x*square(x);
}


int fibonacci(int n);
{
	if( n==0||n==1){
	
		
    	return 1 ;}
    
    else{
	
		
    	return fibonacci(n-2)+fibonacci(n-1);}
    }}


