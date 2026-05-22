#include<iostream>
using namespace std;

int main(){

int n =4;

//Top

for(int i=0;i<n;i++){
//Spaces 
    for(int j=0;j<n-i-1;j++){

    cout<<" ";

    }
     cout<<"*";
//Spaces #2
      if (i!=0){ 
      for(int j=0;j<2*i-1;j++){    
        
    //i=1 1spaces 1 star
    //i=2 3spaces 1 star
    //i=3 5spaces 1 star

    cout<<" ";
      }
      cout<<"*";
    }
  cout<<endl;   
}

//Bottom

for(int i=0; i<n; i++) {
//Spaces 
if(i!=3) {
   for(int j=0;j<=i;j++){

  cout<<" ";
   }
cout<<"*";

 }
//Spaces #2
if(i!=2){
 for(int j=0;j<2*(n-i)-5;j++) {

  cout<<" ";
 }
 if(i!=3)
cout<<"*";



}


 cout<<endl;
}

    return 0;
}