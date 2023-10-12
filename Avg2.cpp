#include<iostream>
using namespace std;

int main(){
  int n,sum=0;
  cout<<"Enter no of intergers you are going to enter : ";
  cin>>n;
  int a[n];
  cout<<"Enter elements\n";
  for(int i=0; i<n; i++)
    {
      cin>>a[i];
      sum = sum + a[i];
    }
  cout<<"Sum : "<<sum;
  cout<<"\nAverage : "<<(sum/n);
  return 0;
}
