#include<iostream>  // # Program of all numbers from 1 to n // using while loop //
using namespace std;

int main() {

int n = 10;   
int i = 1;
int count = 0;

while(i <= n) {
    if(i % 2 != 0) {
      count += i;
    }

    i++;
}
 cout << "odd numbers sum  = " << count << endl;

    return 0;
}



