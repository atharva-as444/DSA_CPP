#include<iostream>
using namespace std;

int main(){

int n=4;
 //Loop for lines
for(int i=0;i<n;i++){
//Loop for spaces
    for(int j=0;j<(n-i-1);j++){
    cout<<" ";
    }
//Loop for nums#1    
    for(int j=1;j<=i+1;j++){
        cout<<j;
    }
//Loop for nums#2 reverse decreasing 
    for(int j=i;j>0;j--){
       cout<<j;
       
    }
    
    cout<<endl;
}

    return 0;
}