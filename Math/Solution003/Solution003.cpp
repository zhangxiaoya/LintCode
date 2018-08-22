
#include "Solution003.h"

int Solution003::digitCounts(int k, int n)
{
    int result = 0;
    if(k ==0)
        result ++;
    for(int i = 0; i<=n;++i)
    {
        int t = i;
        while (t != 0)
        {
            if(t % 10 == k)
                result ++;
            t /= 10;
        }
    }
    return result;
}