#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main(){

int nums[] = {3,4,-15,12,14};
int size = 5;

int smallest = INT_MAX;
int largest =  INT_MIN;

int smallestIndex = -1;
int largestIndex = -1;

for(int i = 0; i<size; i++){ //      mix/max
if(nums[i]< smallest){
            smallest = nums[i];
            smallestIndex = i; // index store
}

 if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i;   // index store
            
}
}

cout << "Smallest = " << smallest << " at index " << smallestIndex << endl;
cout << "Largest = " << largest << " at index " << largestIndex << endl;

/*cout<<"smallest = "<<smallest<<endl;
cout<<"largest = "<<largest<<endl; */









return 0;
}