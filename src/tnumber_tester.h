#ifndef TNUMBER_TESTER_H
#define TNUMBER_TESTER_H

/**
 * @todo write docs
 */
class TNumber_tester
{
public:
    TNumber_tester();
    bool IsOdd(int x){return !Odd_numbers[x];};
    int D_generator(int e, int phi);
    long long mod_pow(long long base, long long exp, long long mod);
private:
    static constexpr int R{static_cast<int>(1e6)};
    bool Odd_numbers[R]{true,true};
};

#endif // TNUMBER_TESTER_H
