#include <iostream> // Program for prime & non-prime no check //
using namespace std;

int main(){
    int n; cin>>n;

    bool prime = n>1;

    for(int i=2;i*i<=n;i++) 
    
    if(n%i==0) prime=false;
   
    if(prime) cout<<"Prime";
   
    else cout<<"Not Prime";

return 0;
}

