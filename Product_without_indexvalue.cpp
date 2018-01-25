#include<iostream.h>
using namespace std;
int main(){
  int n,i,a[n],b[n],product = 1;
  cout<<"Enter no of array elements";
  cin>>n;
  cout<<"\nEnter array elements:";
  for(i=0;i<n;i++){
    product = product * a[i];
    
