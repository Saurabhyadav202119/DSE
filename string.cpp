// the various operation in string like concatenation,Length of string,Copy of strings,Reverse of a string//  
#include<iostream>
#include<string>

using namespace std;
int main()
{
string str1 = "My name is ";
string str2 = "Saurabh Yadav";
string str3;
int length(),i;
// concatenation of a string//
str3 = str1+str2;
cout<<"\nconcatenation :"<<str3<<endl;
//Length of string//
cout<<"\nLength of string:"<<str1.length();
//Copy of strings//
str3=str2;
cout<<"\n\nCopy of strings:"<<str3<<endl;
//Reverse of a string//
cout<<"\nReverse of a string:";
for(i=str2.length()-1;i>=0;i--)
{
    cout<<str2[i];
}
return 0;
}