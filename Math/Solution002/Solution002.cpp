
#include "Solution002.h"

long long Solution002::trailingZeros(long long n)
{
    long long result = 0;
    for(auto i = n; i >0 ;i /=5)
        result += (i / 5);
    return result;
}