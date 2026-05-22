#include<iostream>
using namespace std;

int main() {

int n =4;

//Top 

for(int i=0;i<n;i++){  
//Stars print top left
   for(int j=0;j<(i+1);j++){
   cout<<"*";
  }
//Spaces Top part
   for(int j=0;j<2*(n-i-1);j++) {
   cout<<" ";
  }
//Stars print top right
   for(int j=0;j<(i+1);j++){
   cout<<"*";
  }

  cout<<endl;
 }

//Bottom

for(int i=0;i<n;i++){
//Stars print bottom left
   for(int j=0;j<(n-i);j++){
   cout<<"*";
  }
//Spaces Bottom part
   for(int j=0;j<(2*i);j++){
   cout<<" ";
  }
//Stars print bottom left
   for(int j=0;j<(n-i);j++){
   cout<<"*";
  }

  cout<<endl;   
 }

 cout<<endl;
 cout<<endl;
 cout<<"Created by Atharva Singh";

 return 0;
}