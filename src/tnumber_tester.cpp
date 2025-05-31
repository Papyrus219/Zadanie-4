#include "tnumber_tester.h"

TNumber_tester::TNumber_tester()
{
    for(int i=0;i<R;i++)
    {
        if(Odd_numbers[i]) continue;

        for(int j=2,k=i;k*j<R;j++)
            Odd_numbers[k*j] = true;
    }
}

int TNumber_tester::D_generator(int e, int phi)
{
    int t = 0, newt = 1;
    int r = phi, newr = e;

    while (newr != 0) {
        int quotient = r / newr;
        int temp = newt;
        newt = t - quotient * newt;
        t = temp;

        temp = newr;
        newr = r - quotient * newr;
        r = temp;
    }

    if (r > 1)
        return -1;

    if (t < 0)
        t += phi;

    return t;
}

long long TNumber_tester::mod_pow(long long base, long long exp, long long mod)
{
    long long result = 1;
    base %= mod;

    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }

    return result;
}
