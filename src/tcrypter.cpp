#include "tcrypter.h"
#include<numeric>
#include<iostream>
#include<cmath>

long long TCrypter::Crypt(int M, int e, int n, TNumber_tester &Tester)
{
    long long C{Tester.mod_pow(M,e,n)};

    return C;
}

long long TCrypter::Decrypt(int C, int d, int n, TNumber_tester &Tester)
{
    long long M{Tester.mod_pow(C,d,n)};

    return M;
}


void TCrypter::Generate_new_keys(int P, int Q, TNumber_tester &Tester)
{
    int n = P*Q;
    int euler_n = (P-1)*(Q-1);
    int e{},d{},wich{};

    for(int i=2;i<euler_n;i++)
    {
        if(std::gcd(i,euler_n) == 1)
        {
            e = i;
            d = Tester.D_generator(e,euler_n);
            if(d == -1 || wich < 1)
            {
                wich++;
                continue;
            }
            else
                break;
        }
    }
    if(d==-1 || d==0 || e==0)
    {
        std::cout << "Dont existing e and d for thouse numbers! Mission abort!\nBetter luck next time!\n";
        return;
    }

    std::cout << "Public key: " << e << " " << n << '\n';
    std::cout << "Private key: " << d << " " << n << '\n';

    return;
}
