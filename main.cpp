#include <iostream>
#include <chrono>
using namespace std;


unsigned long long iterativeFactorial(int n) {
    if (n < 0) { return 0;}


    unsigned long long finalResult = 1;
    for (int i = 1; i <= n; ++i) { finalResult *= i;}
    return finalResult;
    
    }


unsigned long long  recursiveFactorial(int n) {
    if (n < 0) { return 0;}


    if (n == 0 || n == 1) {return 1;}


    return n * recursiveFactorial(n - 1);
}


int main() {
    chrono::time_point<chrono::system_clock> start_1, end_1 , start_2, end_2;
    int num;
    cout << "Enter a number: ";
    cin >> num;


     //Iterative methods:
     start_1 = chrono::system_clock::now();
     unsigned long long iterativeFactRuslt = iterativeFactorial(num);
     end_1 = chrono::system_clock::now();
     chrono::duration<double> totaltime_1 = end_1 - start_1;


    cout << "\nFactorial of " << num<< " in Iterative methods  is: " <<iterativeFactRuslt<< endl;
    cout << "Execution time: " <<  totaltime_1.count() << " seconds" << endl;


    //Recursive methods:
    start_2 =chrono::system_clock::now();
    unsigned long long recursiveFactRuslt =  recursiveFactorial(num);
    end_2 =chrono::system_clock::now();
    chrono::duration<double> totaltime_2 = end_2 - start_2;


    cout << "\nFactorial of " << num<< " in Recursive methods  is: " <<recursiveFactRuslt<< endl;
    cout << "Execution time: " << totaltime_2.count() << " seconds" << endl;


    return 0;
}
