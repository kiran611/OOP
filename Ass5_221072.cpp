#include<iostream>

using namespace std;

class demo{

};
class d{

};

int main(){
 string city,vehical;
 cout<<"Enter city: ";
  cin>>city;
 cout<<"Enter vehical: ";
 cin>>vehical;
 try{
  if(city=="pune"||city=="mumbai"||city=="banglore"||city=="chennai"){
   cout<<city<<endl;
  }
  else{
   throw demo();
  }
 }
  catch(demo e){
   cout<<"Enter valid city"<<endl;
  }
  try{
   if(vehical=="fourwheeler"){
   cout<<vehical<<endl;
  }
   else{
    throw d();
   }
  }
   catch(d e){
    cout<<"Enter valid vehical"<<endl;
   }
  return 0;
}

