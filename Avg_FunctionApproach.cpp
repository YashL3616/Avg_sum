//Function approach
#include<iostream>
#include<iomanip>
using namespace std;
double average(double n1[], int size) 
{
  double sum = 0; 
  for (int i = 0; i < size; ++i)
  {
    sum += n1[i];
  }
  return sum/size;
}
int main()
{
  int size; 
  double avg; 
  cout << "Enter size of array: ";
  cin >> size ;
  double arr[size]; 
  cout << "Enter array elements: ";
  for (int i = 0; i < size; ++i)
  {
    cin >> arr[i];
  }
  avg = average(arr, size);
  cout << "Average of elements is= " << avg << endl;
  return 0;
}
