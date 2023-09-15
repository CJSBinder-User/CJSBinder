#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class HARDY_RAMANUJAN_THEOREM {
public:
    int H_R_T_f_gold(int n)
    { 
        int count = 0 ; 
        if ( n % 2 == 0 ) { 
            count ++ ; 
            while ( n % 2 == 0 ) n = n / 2 ; 
        } 
        for ( int i = 3 ; 
        i <= sqrt ( n ) ; 
        i = i + 2 ) { 
            if ( n % i == 0 ) { 
                count ++ ; 
                while ( n % i == 0 ) n = n / i ; 
            } 
        } 
        if ( n > 2 ) count ++ ; 
        return count ; 
    } 
HARDY_RAMANUJAN_THEOREM() {}
};