#include<iostream> // done using while loop by myself extra approach by myself //
using namespace std;

int main() {
int n = 20;
int i = 1;
int count = 0;

while(i <= n) {
 if (i % 2 == 0){
     count +=i;
 }
   i++;}
cout << "Even numbers sum = " << count << endl;

    return 0;
}