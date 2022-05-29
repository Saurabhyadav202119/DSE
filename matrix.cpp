#include<iostream>

using namespace std;
 void matrix ()
 {
     int arr[50][50],i,j,m,n;
     cout<<"Order of matrix ::";
     cin>>m>>n;
     cout<<"Taking the value for matrix ::";
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              cin>>arr[i][j];
          }
      }
      cout<<"\nMatrix\n\n";
         for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              cout<<"\t"<<arr[i][j];
          }
          cout<<"\n\n";
      }
 }
 int main()
 {
     matrix();
     return 0;
 }