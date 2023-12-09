#include <iostream>
using namespace std;

// Function to calculate the sum of the first n natural numbers using brute force
long long int sumOfFirstN( long long  int n) {
    long long int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
   long long int n;
    cin >> n;

    long long  int r=  sumOfFirstN(n);
    cout <<r;
    return 0;
}









//1.2:

/*
#include <iostream>
using namespace std;

// Function to calculate the sum of the first n natural numbers using brute force
long long int sumOfFirstN(long long int n) {
  long long sum = n * (n + 1) / 2;
    return sum;
    }


int main() {
   long long int n;
    cin >> n;

    long long  int r=  sumOfFirstN(n);
    cout <<r;
    return 0;
}

*/
