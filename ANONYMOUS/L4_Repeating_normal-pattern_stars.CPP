#include<iostream> // PRogram for repeating n number of stars for n numbers of line
using namespace std;

int main () {

int n = 4;

for(int i =1; i<=n; i++){
    for(int j =1; j<=n; j++){
        cout << "*";
    }
      cout << endl;
}

    return 0;

}