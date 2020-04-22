#include <iostream>
using namespace std;
int main(){
  int i,j,t,n;

cout<<"Enter Number of the element - ";
// n;
cin>>n;
int a[n];

for( i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<" - ";
    cin>>a[i];
  }
  //int i;
  for( j=0;j<n;j++){
    for(i=0;i<n-1;i++){
      if(a[i]>a[i+1]){

        t=a[i+1];
        a[i+1]=a[i];
        a[i]=t;
      }
    }
  }

  cout<< "\nSorted List is -> ";
    for(int ii=0;ii<n;ii++)
      cout<<"  "<<a[ii];
}
