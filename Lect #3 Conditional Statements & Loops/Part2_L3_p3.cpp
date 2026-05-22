#include<iostream> // Program for counting sum of numbers divisible by 3 // using for loop
using namespace std;

int main() {
int n;
cout << "Enter n: ";
cin >> n;

int count = 0;

for(int i = 1; i <= n; i++){
     if(i % 3 == 0) {
        count += i;

     }
}
cout << "Sum of numbers divisible by 3 = " << count << endl;

    return 0;
}