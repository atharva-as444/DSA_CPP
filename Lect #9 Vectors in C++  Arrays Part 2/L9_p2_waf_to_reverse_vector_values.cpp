#include<iostream>
#include<vector>
using namespace std;

void reverseVector (vector<int>reverse){
int start = 0; 
int end = reverse.size() -1 ;


    while(start < end) {
        swap(reverse[start], reverse[end]);
        start++;
        end--;
    }





}

int main (){

vector<int> reverse = {20,4,3,5,16};
reverseVector(reverse);

cout<<"Reverse Vector values: ";
for(int i = 0; i<reverse.size();i++){
cout<<reverse[i]<<" ";

}
cout<<endl;

return 0;
}