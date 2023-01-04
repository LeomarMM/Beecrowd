#include <iostream>
using namespace std;
const unsigned long int factorial[] = {1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800};
int main()
{
    int N;
    cin >> N;
    cout << factorial[N] << "\n";
    return 0;
}