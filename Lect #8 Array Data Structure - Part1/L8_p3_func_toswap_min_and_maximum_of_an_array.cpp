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


swap(nums[smallestIndex],nums[largestIndex]);

cout << "After Swap: ";
for (int i = 0; i < size; i++) 
cout << nums[i] << " ";
cout << endl;


cout << "New  oppsite swapped value of Smallest = " << nums[smallestIndex] << endl;
cout << "New opposite swapped value of Largest = " << nums[largestIndex] << endl;




    return 0;
}