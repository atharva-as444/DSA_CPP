#include <iostream>
using namespace std;

void intersectionArray (int arr1[], int size1, int arr2[], int size2){
cout<<"Intersection of two array: ";
for(int i=0; i<size1; i++){

    for(int j=0;j<size2;j++){
        if(arr1[i]==arr2[j]) {
            cout<<arr1[i]<<" ";
            break;
        }
    }
}
}


int main(){

int arr1[] = {4,5,7,5,3,7};
int arr2[] = {4,5,6,7,4,6,9};

int size1 = 6;
int size2 = 7;

intersectionArray(arr1,size1, arr2 ,size2 );
}




