//selection Sorted
//oshan malith
#include <iostream>
using namespace std;
int main(){
  int n,t,i,j;

  cout<<"Enter number of the element - ";
  cin>>n;
  int a[n];
  for(i=0;i<n;i++){
    cout << "Number "<<i<<" - ";
    cin>>a[i];
  }
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i]<a[j]){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  cout<< "Sorted List is -> ";
    for(i=0;i<n;i++)
      cout<<"  "<<a[i];
}
