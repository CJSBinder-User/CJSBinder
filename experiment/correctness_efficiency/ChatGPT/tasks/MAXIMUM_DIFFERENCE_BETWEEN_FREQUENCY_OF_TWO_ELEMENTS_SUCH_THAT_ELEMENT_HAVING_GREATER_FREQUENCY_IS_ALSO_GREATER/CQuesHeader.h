#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMUM_DIFFERENCE_BETWEEN_FREQUENCY_OF_TWO_ELEMENTS_SUCH_THAT_ELEMENT_HAVING_GREATER_FREQUENCY_IS_ALSO_GREATER {
public:
    int M_D_B_F_O_T_E_S_T_E_H_G_F_I_A_G_f_gold(int arr [], int n)
    { 
        unordered_map < int , int > freq ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) freq [ arr [ i ] ] ++ ; 
        int ans = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) { 
            for ( int j = 0 ; 
            j < n ; 
            j ++ ) { 
                if ( freq [ arr [ i ] ] > freq [ arr [ j ] ] && arr [ i ] > arr [ j ] ) ans = max ( ans , freq [ arr [ i ] ] - freq [ arr [ j ] ] ) ; 
                else if ( freq [ arr [ i ] ] < freq [ arr [ j ] ] && arr [ i ] < arr [ j ] ) ans = max ( ans , freq [ arr [ j ] ] - freq [ arr [ i ] ] ) ; 
            } 
        } 
        return ans ; 
    } 
MAXIMUM_DIFFERENCE_BETWEEN_FREQUENCY_OF_TWO_ELEMENTS_SUCH_THAT_ELEMENT_HAVING_GREATER_FREQUENCY_IS_ALSO_GREATER() {}
};