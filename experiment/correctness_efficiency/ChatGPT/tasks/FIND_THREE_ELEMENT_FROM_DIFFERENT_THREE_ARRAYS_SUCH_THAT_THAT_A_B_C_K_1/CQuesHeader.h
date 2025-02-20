#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1 {
public:
    bool F_T_E_F_D_T_A_S_T_T_A_B_C_K_1_f_gold(int a1 [], int a2 [], int a3 [], int n1, int n2, int n3, int sum)
    { 
        unordered_set < int > s ; 
        for ( int i = 0 ; 
        i < n1 ; 
        i ++ ) s . insert ( a1 [ i ] ) ; 
        for ( int i = 0 ; 
        i < n2 ; 
        i ++ ) { 
            for ( int j = 0 ; 
            j < n3 ; 
            j ++ ) { 
                if ( s . find ( sum - a2 [ i ] - a3 [ j ] ) != s . end ( ) ) return true ; 
            } 
        } 
        return false ; 
    } 
FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1() {}
};