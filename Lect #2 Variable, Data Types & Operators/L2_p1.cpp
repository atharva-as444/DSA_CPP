#include<iostream> // Program for a calculator plus,minus,divide,multiply,remainder
using namespace std;

int main() {

int a,b;

cout << "Enter two numbers:";
cin>>a;
cin>>b;


cout <<"differnce (a-b) =" << (a-b) << endl;
cout<<endl; // for extra line space used end of line again

cout <<"difference (b-a) =" << (b-a) << endl;
cout <<endl;

cout <<"product = " << (a*b) << endl;
cout << endl;

cout <<"division = " << (a/b) << endl;
cout << endl;

cout << "remainder = " << (a%b) << endl;
cout << endl;

//+ extra function for sum excluding from lecture 1

cout <<"sum = " << (a+b) << endl;
cout << endl;


return 0;

}

