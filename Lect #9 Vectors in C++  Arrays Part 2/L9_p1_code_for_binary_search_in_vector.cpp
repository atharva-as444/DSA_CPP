#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr{10,20,30,40,50,60,70};
     int target = 60;
     int index = -1;
     for(int i=0; i<arr.size();i++){
       if(arr[i] == target){
        index = i;
        break;
       }
    }

    if(index != -1){
      cout<<"Valid index no: "<<index;
    }
    else{
      cout<<"not valid index: -1";
    }
     









return 0;
}