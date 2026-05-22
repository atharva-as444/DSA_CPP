#include<iostream>
using namespace std;

bool primeNoCheck(int n){
if(n <= 1) return false;

for (int i = 2; i < n; i++){
if (n % i == 0){
return false;
}
}
return true;
}

int main (){

int n;
cout<<"Enter number n: ";
cin>>n;

cout<<"Prime no from 2 to "<<n<<" are: ";

for(int i=2;i<=n;i++){
if(primeNoCheck(i)){


    cout<<i<<" ";
   }
  }
return 0;
}