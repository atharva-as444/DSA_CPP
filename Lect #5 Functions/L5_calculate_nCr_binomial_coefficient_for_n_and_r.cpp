#include<iostream>
using namespace std;

// This proogram is written for calculating_nCr_binomial_coefficient_for_n&r


int factorial (int n){
   int fact = 1;
       for(int i=1;i<=n;i++){
          fact *= i;
         }
 return fact;
}

int nCr (int n, int r) {
//Here factorial is being called
    int fact_n = factorial(n);
//pass by value copy pf int r=2 is being stored in parameter n of factorial function
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
//nCr function actually starts here
 return fact_n / (fact_r * fact_nmr);
}



int main() {
//Values for n&r given here  after that print command for printing result of function nCr
    int n = 8, r = 2;
    cout<<nCr(n,r);

 return 0;
}

