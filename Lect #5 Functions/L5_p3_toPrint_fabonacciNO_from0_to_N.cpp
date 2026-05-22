#include<iostream>
using namespace std;

//This program prints fabonacci numbers from 0 to n after giving input n

int Fabonacci(int n){
    int a =0,b=1;
    cout<<a<<" "<<b<<" ";

for(int i =1;i<=n-2;i++){
    int c=a+b;
    cout<<c<<" ";

    a=b;
    b=c;


   }
}


int main(){
    cout<<"This program prints fabonacci numbers from 0 to n after giving input n\n";
    int n;
    cout<<"Enter number of terms to be printed for fabonacci series: ";
    cin>>n;
    cout<<"First "<<n<<" "<<"numbers of fabonacci series are: ";
//fabonacci function is being called here
   Fabonacci(n);


    cout<<endl<<"Enter number of terms to be printed for fabonacci series: ";
    cin>>n;
    cout<<"First "<<n<<" "<<"numbers of fabonacci series are: ";
//fabonacci function is being called here again

   Fabonacci(n);

 return 0;

}