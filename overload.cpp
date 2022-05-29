/*Program to show that the effect of default arguments can be
alternatively achieved by overloading*/
#include<iostream>
using namespace std;

void overload(int a,int b,int c)
{
  int sum= a+b+c;
 cout<<"Sum of three no."<<sum<<"\n"; 
   
}
void overload(int a,int b)
{
 
    overload(a,b,0);
}
void overload(int a)
{
   overload(a,0);
}
void defaltvalue(int a,int b=0,int c=0)
{
    int sum=a+b+c;
    cout<<"Sum of three no."<<sum<<"\n";
}

int main()
{
 overload(9);
 defaltvalue(9);
 return 0;
};