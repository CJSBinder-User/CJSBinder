#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SEARCH_AN_ELEMENT_IN_A_SORTED_AND_PIVOTED_ARRAY {
public:
    int S_A_E_I_A_S_A_P_A_f_gold(int arr [], int l, int h, int key)
    { 
        if ( l > h ) return - 1 ; 
        int mid = ( l + h ) / 2 ; 
        if ( arr [ mid ] == key ) return mid ; 
        if ( arr [ l ] <= arr [ mid ] ) { 
            if ( key >= arr [ l ] && key <= arr [ mid ] ) return S_A_E_I_A_S_A_P_A_f_gold ( arr , l , mid - 1 , key ) ; 
            return S_A_E_I_A_S_A_P_A_f_gold ( arr , mid + 1 , h , key ) ; 
        } 
        if ( key >= arr [ mid ] && key <= arr [ h ] ) return S_A_E_I_A_S_A_P_A_f_gold ( arr , mid + 1 , h , key ) ; 
        return S_A_E_I_A_S_A_P_A_f_gold ( arr , l , mid - 1 , key ) ; 
    } 
SEARCH_AN_ELEMENT_IN_A_SORTED_AND_PIVOTED_ARRAY() {}
};