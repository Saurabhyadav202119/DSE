// swapping of two numders without using third variables//

 #include<iostream>
 using namespace std;
 int main()
 {
   int a,b;
   cout<<"\nEnter first number::";
   cin>>a;
 cout<<"\nEnter second number::";
 cin>>b;

 a=a+b;
 b=a-b;
 a=a-b;
    cout<<"\nAfter swapping first number::"<<a<<endl;
    
    cout<<"\nAfter swapping second number::"<<b<<endl;
    return 0;
  
 }

