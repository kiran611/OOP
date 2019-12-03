#include<iostream>

using namespace std;

template<class T>
T selectionsort(){
 T a[10];
 T temp;
 cout<<"The unsorted array: ";
 for(int i=0;i<10;i++){
  cout<<"a["<<i<<"]=";
  cin>>a[i];
 }
 for(int i=0;i<10;i++){
   for(int j=i+1;j<10;j++){
     if(a[i]>a[j]){
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
   }
  }
  for(int i=0;i<10;i++){
    cout<<a[i]<<"\n";
  }
}

 int main(){
   cout<<"Integer sorting: \n";
   selectionsort<int>();
   cout<<"Float sorting: \n";
   selectionsort<float>();
 }

