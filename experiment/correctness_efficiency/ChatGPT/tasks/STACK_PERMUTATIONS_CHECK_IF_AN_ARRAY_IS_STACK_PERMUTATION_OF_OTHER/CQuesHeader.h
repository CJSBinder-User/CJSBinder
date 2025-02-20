#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class STACK_PERMUTATIONS_CHECK_IF_AN_ARRAY_IS_STACK_PERMUTATION_OF_OTHER {
public:
    bool S_P_C_I_A_A_I_S_P_O_O_f_gold(int ip [], int op [], int n)
    { 
        queue < int > input ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) input . push ( ip [ i ] ) ; 
        queue < int > output ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) output . push ( op [ i ] ) ; 
        stack < int > tempStack ; 
        while ( ! input . empty ( ) ) { 
            int ele = input . front ( ) ; 
            input . pop ( ) ; 
            if ( ele == output . front ( ) ) { 
                output . pop ( ) ; 
                while ( ! tempStack . empty ( ) ) { 
                    if ( tempStack . top ( ) == output . front ( ) ) { 
                        tempStack . pop ( ) ; 
                        output . pop ( ) ; 
                    } 
                    else break ; 
                } 
            } 
            else tempStack . push ( ele ) ; 
        } 
        return ( input . empty ( ) && tempStack . empty ( ) ) ; 
    } 
STACK_PERMUTATIONS_CHECK_IF_AN_ARRAY_IS_STACK_PERMUTATION_OF_OTHER() {}
};