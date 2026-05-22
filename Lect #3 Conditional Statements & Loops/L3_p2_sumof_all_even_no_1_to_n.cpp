#include<iostream> // Done using for loop from lecture //
using namespace std;

int main() {

int n = 20;
int count = 0;

for(int i = 1; i <=n; i++){
 if(i % 2 == 0) {
    count += i;
 }
}

cout << "Even numbers sum = " << count << endl;

    return 0;
}