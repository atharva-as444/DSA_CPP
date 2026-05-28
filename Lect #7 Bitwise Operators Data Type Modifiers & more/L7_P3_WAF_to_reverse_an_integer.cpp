#include<iostream>
using namespace std;

int reverseNumber (int n) {
    int rev = 0;

while(n > 0) {
    int digit = n % 10;
    rev = rev * 10 + digit;
    n /= 10;
}
return rev;
}

int main() {
    int num;
    cout<<"Enter a number to reverse: ";
    cin>>num;

    int reversedNum = reverseNumber(num);
    cout<<"Reversed number: "<<reversedNum;

 return 0;









}

