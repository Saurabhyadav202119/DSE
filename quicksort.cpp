#include <bits/stdc++.h> 
using namespace std; 
int partition(int arr[], int l, int h) 
{ 
  int x = arr[h]; 
  int i = (l - 1); 
  for (int j = l; j <= h - 1; j++) { 
    if (arr[j] <= x) { 
      i++; 
      swap(arr[i], arr[j]); 
    } 
  } 
  swap(arr[i + 1], arr[h]); 
  return (i + 1); 
} 
void quick_sort(int arr[], int l, int h) 
{ 
  int stack[h-l+1]; 
  int top = -1; 
  stack[++top]=l; 
  stack[++top]=h; 
  while(top >= 0) 
  { 
    h = stack[top--]; 
    l = stack[top--]; 
    int p = partition(arr, l, h); 
    if(p-1>l) 
    { 
      stack[++top] = l; 
      stack[++top] = p - 1; 
    } 
    if(p+1<h) 
    { 
      stack[++top] = p + 1; 
      stack[++top] = h; 
    } 
  } 
} 
int main() 
{ 
  int n;
  cout<<"\nEnter the number of array:";
  cin>>n;
  int a[n];
   cout<<"\nArray:\n";
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  quick_sort(a,0,n-1);
  cout<<"sorted array:\n";
  for(int i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }
  cout<<endl;
  return 0; 
}