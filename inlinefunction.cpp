// programm using inline function //  
#include<iostream>

using namespace std;
inline mul(int a)
{
    return a*a*a*a;
}
int main ()
{
    int b;
    cout<<"take the number::";
    cin>>b;
   mul(b);
    cout<<"\nfourth times of any number ::"<< mul(b) <<"\n";
    
}