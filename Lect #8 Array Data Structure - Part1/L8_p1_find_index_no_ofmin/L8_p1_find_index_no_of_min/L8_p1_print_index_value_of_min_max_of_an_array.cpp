#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main(){

int nums[] = {3,4,-15,12,14};
int size = 5;

int smallest = INT_MAX;
int largest =  INT_MIN;


for(int i = 0; i<size; i++){ //      mix/max
smallest = min(nums[i], smallest);
largest = max(nums[i], largest);

if (nums[i] == smallest ) {
    cout<<i<<endl<<endl;
}
if(smallest == min(nums[i],smallest)){
cout<<nums[i]<<endl;
}

if(largest == (nums[i], largest)) {
cout<<nums[i]<<endl;
} 

cout<<"smallest = "<<smallest<<endl;
cout<<"largest = "<<largest<<endl;

}







return 0;
}