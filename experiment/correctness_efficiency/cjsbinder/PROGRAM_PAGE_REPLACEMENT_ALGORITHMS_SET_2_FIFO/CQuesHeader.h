#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO {
public:
    int P_P_R_A_S_2_F_f_gold(int pages [], int n, int capacity)
    { 
        unordered_set < int > s ; 
        queue < int > indexes ; 
        int page_faults = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            if ( s . size ( ) < capacity ) { 
                if ( s . find ( pages [ i ] ) == s . end ( ) ) { 
                    s . insert ( pages [ i ] ) ; 
                    page_faults ++ ; 
                    indexes . push ( pages [ i ] ) ; 
                } 
            } 
            else { 
                if ( s . find ( pages [ i ] ) == s . end ( ) ) { 
                    int val = indexes . front ( ) ; 
                    indexes . pop ( ) ; 
                    s . erase ( val ) ; 
                    s . insert ( pages [ i ] ) ; 
                    indexes . push ( pages [ i ] ) ; 
                    page_faults ++ ; 
                } 
            } 
        } 
        return page_faults ; 
    } 
PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO() {}
};