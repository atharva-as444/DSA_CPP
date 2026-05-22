#include<iostream>
using namespace std;


//int sum     ----->  a+b+c+d+e
//void sum2nd ----->  a+b+c before it [sum] function is called
//void sum3rd ----->  a+b+c+d+e+f befoe it [sum2nd] is called
//void fun    ----->  x=2*x before it [sum3rd] is called
//int main    ----->  cout statement before it [fun] is called




int sum(int a,int b,int c,int d, int e){
    cout<<"Sum of function sum = "<<(a+b+c+d+e)<<endl;
}

void sum2nd (int a, int b, int c){
//sum function is being called here with print command
sum(4,5,6,7,8);

//sum2nd actually starts from here
cout<<"Sum of function sum2nd "<<a+b+c<<endl;
}

void sum3rd(){
//sum2nd function is being called here
    sum2nd(5,5,10);
    int a,b,c,d,e,f;
//sum3rd actually starts here
    cout << "Enter 6 numbers: ";
    cin >> a >> b >> c >> d >> e >> f;
    cout << "Sum of function sum3rd = " << (a+b+c+d+e+f) << endl;
}

void fun(int x){
//sum3nd function is being called here
    sum3rd();
//fun actually starts from here
    x=2*x;
    cout<<" Multiplication x*2 of function fun = "<<x<<endl;
}

int main (){
//fun function is being called here
    fun(5);

    cout<<"Hello! This program demonstrates call stacks using functions in C++";
}
