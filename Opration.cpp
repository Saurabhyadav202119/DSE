#include<iostream>
using namespace std;

int main()
{
    int arr1[3][3],arr2[3][3],sum[3][3],sub[3][3],mult[3][3],tran[3][3],i,j,k;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter matrix arr1::";
            cin>>arr1[i][j];
        }
    }
    cout<<"\nmatrix number two\n\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter matrix arr2::";
            cin>>arr2[i][j];
        }
    }
    cout<<"\nopration of matrix\n\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }

    }
    // opration of subtraction //
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++) 
       {
         sub[i][j]=arr1[i][j]-arr2[i][j];  
       } 
     }
     // opration of multiplication//
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++) 
        {
            mult[i][j]=arr1[i][j]*arr2[i][j]; 
        } 
     }
     // opration of transpose //
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)  
        {
           tran[j][i]=arr1[i][j];
        }
     }
     //Display of all opration//
     cout<<"\nopration of addition::\n";
     for(i=0;i<3;i++)
     {
      for(j=0;j<3;j++) 
      {
          
          cout<<"\t"<<sum[i][j];
      }
      printf("\n\n\n");  
     }
     cout<<"\nopration of subtraction::\n";
      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
           cout<<"\t"<<sub[i][j];   
          }
        printf("\n\n\n");
      }
       cout<<"\nopration of multiplication::\n";
       for(i=0;i<3;i++)
       {
            for(j=0;j<3;j++)
            {
            cout<<"\t"<<mult[i][j];    
            }
            printf("\n\n\n");
       }
       cout<<"\nopration of transpose::\n\n";
       for(i=0;i<3;i++)
       {
          for(j=0;j<3;j++)
          {
            cout<<"\t"<<tran[i][j];  
          }
          printf("\n\n\n");  
       }
     return 0;

}
