#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LENGTH_LONGEST_SUB_STRING_CAN_MAKE_REMOVED {
public:
    int L_L_S_S_C_M_R_f_gold(string str)
    { 
        vector < pair < char , int > > arr ; 
        arr . push_back ( { 
            '@' , - 1 } 
        ) ; 
        int maxlen = 0 ; 
        for ( int i = 0 ; 
        i < str . length ( ) ; 
        ++ i ) { 
            arr . push_back ( { 
                str [ i ] , i } 
            ) ; 
            while ( arr . size ( ) >= 3 && arr [ arr . size ( ) - 3 ] . first == '1' && arr [ arr . size ( ) - 2 ] . first == '0' && arr [ arr . size ( ) - 1 ] . first == '0' ) { 
                arr . pop_back ( ) ; 
                arr . pop_back ( ) ; 
                arr . pop_back ( ) ; 
            } 
            int tmp = arr . back ( ) . second ; 
            maxlen = max ( maxlen , i - tmp ) ; 
        } 
        return maxlen ; 
    } 
LENGTH_LONGEST_SUB_STRING_CAN_MAKE_REMOVED() {}
};