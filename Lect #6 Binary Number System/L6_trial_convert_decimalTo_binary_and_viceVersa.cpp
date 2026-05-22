#include<iostream>
using namespace std;

// // int main() {

// // cout<<"Hello World";

// // int n,o;
// // cout<<"Enter n&0";
// // cin>>n>>o;

// // cout<<n+o<<endl;




// //  return 0;
// // }


  int decToBinary(int decNum){
  int ans = 0, pow = 1;

  while(decNum > 0){

  int remainder = decNum % 2;
  decNum /= 2;

    ans += remainder * pow;
    pow *= 10;
 }
  return ans; //Binary form
}




int binaryToDec(int binNum){
int ans = 0, power = 1;
    while(binNum >0){

int remainder = binNum % 10;
binNum /= 10;


ans+= remainder * power;
power *= 2;
 }
 return ans; //Decimal form
}




int main(){
    int decNum = 104;

for(int i=1;i<=40;i++){
//decToBinary fucntion is being called here
    cout<<"Decimal to Binary = "<<decToBinary(i)<<endl;
    
    
 }
 cout<<endl;
//binaryToDec fucntion is being called here
 cout<<"Binary to decimal = "<<binaryToDec(1100110)<<endl; //102
 return 0;
}









