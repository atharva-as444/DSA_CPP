#include <iostream>
using namespace std;

void reverseArray (int arr[], int sz){
int start = 0, end = sz - 1;

while (start < end) {
    swap(arr[start],arr[end]);
    start++;
     end--;
}
}



int main(){

int arr[]={1,2,3,4,5};
int sz=5;

reverseArray(arr,sz);
cout<<"Reverse of given array values are: ";
for (int i =0; i<sz;i++) {
cout<<arr[i]<<" ";
}
cout<<endl;


}