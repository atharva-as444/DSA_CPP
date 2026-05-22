#include<iostream>
using namespace std;

//Apna college dsa c/++ by shraddha khapra given functions Q ,
//In this program we are calculating sum of digits of a number.


//sumOfDigits2 is calling sumOfDigits func. & printing sum of digits of the number input in sumOfDigits func.
//int main is calling sumOfDigits2 func. & printing sum of digits of the number input in sumOfDigits2 func.


int sumOfDigits (int num) {
    int digitSum = 0;

    while(num > 0) {
         int lastDigit = num % 10;
         num /= 10;

         digitSum+= lastDigit;
    }
   return digitSum;
}

int sumOfDigits2 (int num) {
//SumofDigits function is being called here
   cout<<"Sum of digits of function sumOfDigits = "<<sumOfDigits(145)<<endl;
//sumOfDigits2 actually starts here
    int digitSum = 0;
        while(num > 0) {
             int lastDigit = num % 10;
             num /= 10;

             digitSum += lastDigit;
           }
return digitSum;
}


int main (){
//sumOfDigits2 function is being called here
    cout<<"Sum of digits of function sumOfDigits2 = "<<sumOfDigits2(1145);

 return 0;
}










