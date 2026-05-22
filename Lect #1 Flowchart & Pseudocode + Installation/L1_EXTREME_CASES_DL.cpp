#include <iostream>
using namespace std;

int main() {

int age;

do {
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 0 || age > 100)
       cout << "Invalid age, try again\n";

} while (age <= 0 || age  > 100);

if (age >=18)
cout << "Eligible for DL";

else {
    cout << "Not eligible for DL";
}









return 0;
}