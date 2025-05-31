#ifndef TCRYPTER_H
#define TCRYPTER_H

#include"./tnumber_tester.h"

/**
 * Class that code, decode, and generate public/private keys.
 */
class TCrypter
{
public:
    long long Crypt(int M, int e, int n, TNumber_tester &Tester);
    long long Decrypt(int M,int d, int n, TNumber_tester &Tester);
    void Generate_new_keys(int P, int Q, TNumber_tester &Tester);

};

#endif // TCRYPTER_H
