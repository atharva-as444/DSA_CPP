#include<iostream> //#case -2 max of two numbers if both are equal also

using namespace std;

int main() {

int a,b;

cout<<"Enter two numbers : ";
cin>>a>>b;


if (a>b) {
    cout << "Max of two no is " << a;

} else if(b > a) {

    cout<< "Max of two no is "<< b ;
}

else {
     
    cout<< "Both are equal"<< endl;
}
 













    return 0;
}