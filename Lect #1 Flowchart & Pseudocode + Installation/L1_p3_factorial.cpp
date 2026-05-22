#include<iostream>   /// program for printing factorial of a number n
using namespace std;
int main() {

int i = 1;
int  fact = 1;
int n;

cout << "Enter n :";
cin >> n;

for(int i = 1; i<=n; i++){
    fact = fact*i;   ///or we can write fact *=i 

}
  cout<<"factorial ="<<fact<<endl;












  return 0;  
}