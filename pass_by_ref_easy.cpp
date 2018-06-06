// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

void func(int & i) // make a reference instead of pass by value
{
    printf("value is: %d\n", i);
}

int main( int argc, char ** argv )
{
    int x = 43;
    puts("this is main()");
    func(x);
    return 0;
}
