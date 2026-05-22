#include<iostream>  //driving license age checker + invalid case
using namespace std;  

int main() {

int age;

cout<<"Enter your age: ";
cin>> age;

if (age <=0) {
    cout<<"invalid age";
   

} 
else if (age >= 18) {
   cout<< "Eligible for DL";

}
else {
    cout<< "Not eligible for DL";
}
    return 0;
}