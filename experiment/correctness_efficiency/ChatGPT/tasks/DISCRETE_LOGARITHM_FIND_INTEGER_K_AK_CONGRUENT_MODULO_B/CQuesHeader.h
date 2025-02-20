#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class DISCRETE_LOGARITHM_FIND_INTEGER_K_AK_CONGRUENT_MODULO_B {
public:
    int D_L_F_I_K_A_C_M_B_f_gold(int a, int b, int m)
    { 
        int n = ( int ) sqrt ( m ) + 1 ; 
        int an = 1 ; 
        for ( int i = 0 ; 
        i < n ; 
        ++ i ) an = ( an * a ) % m ; 
        unordered_map < int , int > value ; 
        for ( int i = 1 , cur = an ; 
        i <= n ; 
        ++ i ) { 
            if ( ! value [ cur ] ) value [ cur ] = i ; 
            cur = ( cur * an ) % m ; 
        } 
        for ( int i = 0 , cur = b ; 
        i <= n ; 
        ++ i ) { 
            if ( value [ cur ] ) { 
                int ans = value [ cur ] * n - i ; 
                if ( ans < m ) return ans ; 
            } 
            cur = ( cur * a ) % m ; 
        } 
        return - 1 ; 
    } 
DISCRETE_LOGARITHM_FIND_INTEGER_K_AK_CONGRUENT_MODULO_B() {}
};