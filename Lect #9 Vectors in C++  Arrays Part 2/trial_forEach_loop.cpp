#include <iostream>
#include <vector>
using namespace std;

int main(){

vector<int>printval = {4,5,6,7,8};

cout<<"With pass by value: ";
for(int x : printval){
    x= x*2;
    cout<<x<<" ";
    
}
cout<<endl;


cout<<"With pass by reference: " ;  // pass with reference make changes in the original values 
for(int& x : printval){ // after this loop if you want x*2 again you don't have to rewrite (x=x*2) again

    x= x*2;
     cout<<x<<" ";
}


// here is the example of pass by refernce after it has been implemented
cout<<"After pass by reference is implemented again printed value without using x=x*2 again: ";

for(int x : printval){
    cout<<x<<" ";
}









    return 0;
}
