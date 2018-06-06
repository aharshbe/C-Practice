#include <cstdio>
using namespace std;

void func()
{
    puts("this is func()");
}

int main( int argc, char ** argv )
{
    void (*fp)() = func; //this is a function pointer -- must match the function it belongs to
    puts("this is main()");
    fp();
    return 0;
}

