#include<iostream>
using namespace std;

//Function for minimum of two numbers



long long factorial(){
 int n;
   cout<<"Enter n : ";
   cin>>n;
 int fact = 1;
     for(int i=1;i<=n;i++){
   fact *= i;
  }
 return fact;

}



int main() {

cout<<"hello world";

cout<<endl;


cout<<"Factorial is :"<<factorial()<<endl;
cout<<"Factorial is :"<<factorial()<<endl;

cout<<"Factorial is :"<<factorial()<<endl;
cout<<"Factorial is :"<<factorial()<<endl;

}