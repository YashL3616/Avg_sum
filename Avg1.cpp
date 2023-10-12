#include<iostream>
using namespace std;
int main()
{
   int n,a,i,sum=0,avg=0;
   cout<<"Enter number if Elements";
   cin>>n;
   for(i=0;i<n;i++)
  {
    cout<<"Enter Element "<<(i+1)<<endl;
    cin>>a;
    sum=sum+a;
  }
 cout<<"Sum="<<sum<<endl;
 cout<<"Average ="<<(sum/n);
 return 0;
}
