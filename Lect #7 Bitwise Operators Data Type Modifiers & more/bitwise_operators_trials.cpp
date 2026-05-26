#include<iostream> 
using namespace std;

int main() {

        int a = 6; // 0101 in binary
        int b = 10; // 1010 in binary
    
        cout << "a & b: " << (a & b) << endl; // Bitwise AND
        cout << "a | b: " << (a | b) << endl; // Bitwise OR
        cout << "a ^ b: " << (a ^ b) << endl; // Bitwise XOR
        cout << "a << 1: " << (a << 1) << endl; // Left shift
        cout << "b >> 1: " << (b >> 1) << endl; // Right shift
    return 0;
}