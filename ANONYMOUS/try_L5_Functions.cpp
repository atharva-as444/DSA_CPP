#include<iostream>
using namespace std;


char printName (){
    char FirstName[50],Surname[50];
    //FIRSTNAME
    cout<<"Enter your First Name : ";
    cin>>FirstName;
     
    //SURNAME
    cout<<"Enter your Surname : ";
    cin>>Surname;
    
    cout<<" Your Name is : "<<FirstName<<" "<<Surname<<endl;

}


int printHello(){
    cout<<"Hello";
}



int main(){

printHello();

cout<<endl;


printName();

}