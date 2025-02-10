#include <iostream>
using namespace std;


int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int n = 8, r = 2;
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_minus_r = factorial(n - r);
    int nCr = fact_n / (fact_r * fact_n_minus_r);

    cout << "Result: " << nCr << endl;
}