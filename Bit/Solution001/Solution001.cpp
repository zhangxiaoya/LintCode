
#include "Solution001.h"

int Solution001::aplusb(int a, int b)
{
    int result = a ^ b;
    int carry = (a & b) << 1;
    while(carry != 0)
    {
        int temp = result ^ carry;
        carry = (result & carry) << 1;
        result = temp;
    }
    return result;
}