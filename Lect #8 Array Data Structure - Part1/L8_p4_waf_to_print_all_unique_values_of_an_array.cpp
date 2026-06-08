#include <iostream>
using namespace std;


 void printUnique(int nums[], int size){
    

    cout << "Unique values: ";
    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;

        // check if nums[i] appeared before
        for (int j = 0; j < i; j++) {
            if (nums[i] == nums[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            cout << nums[i] << " ";
        }
    }
    
 }
    int main(){
int nums[] = {3, 4, 3, 12, 4, 14, 4, 8, 8, 12, 12};
int size = 11;

printUnique(nums , size);
    
return 0;
    }
 
/*i=0  3  j=0  0   i _print
i=1  4  j=1  3  i print
i=2  3  j=2  3  i not printf
i=3  12 j=3  3  i print
i=4   4  j=4 12*/
