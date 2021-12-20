// swapping of two number using "call by value" // 
#include<iostream>

using namespace std;
void swap(int,int);

int main ()
{
    int a,b;
     
     cout<<"Enter the value of A ::";
     cin>>a;
    cout<<"Enter the value of B ::";
    cin>>b;

    swap(a,b);
    
    cout<<"after swapping value of A outside the function ::"<<a<<endl;
    cout<<"after swapping value of B outside the function::"<<b<<endl;
}
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping value of A inside the function::"<<a<<endl;
    cout<<"after swapping value of B inside the fuction::"<<b<<endl;
}

