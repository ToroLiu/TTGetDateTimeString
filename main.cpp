#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

int main()
{
    time_t t = time(0);
    struct tm *now = localtime(&t);
    printf("%04d%02d%02d",(now->tm_year + 1900), (now->tm_mon + 1), (now->tm_mday) );
    return 0;
}
