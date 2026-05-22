#include<iostream>
using namespace std;

int main() {

int n = 7;
int i = 2;

while(i <= (n-1))
if(n % i == 0) {
    cout << n << "no is non_-prime"<< endl;
}
else {
    i+=1;
}

    return 0;
}