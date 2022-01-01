// bubble sort

#include <iostream>
using namespace std;


void bubbleSort(int array[], int size)
 {

  int i,j;
  for (i = 0; i < size-1; ++i)
   {
      

    for ( j = 0; j < size - i-1; ++j)
    {
      if (array[j] > array[j + 1])
    {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}


void printArray(int array[], int size)
 {
  for (int j = 0; j < size; ++j)
   {
    cout << array[j]<<" ";
  }
  cout <<endl;
}

int main()
 {
  int data[] = {-2, 45, 0, 11, -9};
  
  int size = sizeof(data) / sizeof(data[0]);
  
  bubbleSort(data, size);
  
  cout <<"\nSorted Array :\n\n";  
  printArray(data, size);
  return 0;
}