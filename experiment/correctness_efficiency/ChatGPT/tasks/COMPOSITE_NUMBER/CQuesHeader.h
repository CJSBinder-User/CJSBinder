#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class COMPOSITE_NUMBER {
public:
    bool C_N_f_gold(int n)
    { 
        if ( n <= 1 ) return false ; 
        if ( n <= 3 ) return false ; 
        if ( n % 2 == 0 || n % 3 == 0 ) return true ; 
        for ( int i = 5 ; 
        i * i <= n ; 
        i = i + 6 ) if ( n % i == 0 || n % ( i + 2 ) == 0 ) return true ; 
        return false ; 
    } 
COMPOSITE_NUMBER() {}
};