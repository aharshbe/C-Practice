// hello-cout.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

void f(int & p);
int add(int a);

int main( int argc, char ** argv )
{
    int a = 10;
    f(a);
    printf("value of a is: %d\n", add(a));
    return 0;
}

void f(int & p)
{
    ++p;
}

int add(int a)
{
    return a + 10;
}
