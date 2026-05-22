#include<iostream> // Program for printing n numbers continuous & n number of lines
using namespace std;

int main() {

int n=10;
int num =1;
for(int i=0;i<n;i++){
   for(int j=1;j<=n;j++){

    cout<<num<<" ";
    num++;
   }
  cout<<endl;
  
  }
 cout<<endl;
 cout<<"After Pattern number value is = "<<num;
    return 0;
}