#include <cstdio>
using namespace std;

unsigned long int factorial( unsigned long int n ) {
    if( n < 2 ) return 1;
    return factorial( n - 1 ) * n;
}

unsigned long int factorial_loop( unsigned long int n ) {
    for (unsigned long int val = n; n; val = (n - 1) * val, --n)
        if (n < 2)
            return val;
    return 1;
}

int main( int argc, char ** argv ) {
    unsigned long int n = 7;
    printf("Factorial Recursive of %ld is %ld\n", n, factorial(n));
    printf("Factorial Loop of %ld is %ld\n", n, factorial_loop(n));
    return 0;
}