#include <iostream>
using namespace std;

int main(){

int marks[]={3,5,6,7,8};
int sz = 5;
int sum = 0, product = 1;

for(int i = 0; i<sz; i++){

sum = sum + marks[i];
product = product * marks[i];


}

cout<<sum<<endl;
cout<<product;





return 0;
}