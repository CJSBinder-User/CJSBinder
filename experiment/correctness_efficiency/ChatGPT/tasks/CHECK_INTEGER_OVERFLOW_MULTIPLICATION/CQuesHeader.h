#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class CHECK_INTEGER_OVERFLOW_MULTIPLICATION {
public:
    bool C_I_O_M_f_gold(long long a, long long b)
    { 
        if ( a == 0 || b == 0 ) return false ; 
        long long result = a * b ; 
        if ( a == result / b ) return false ; 
        else return true ; 
    } 
CHECK_INTEGER_OVERFLOW_MULTIPLICATION() {}
};