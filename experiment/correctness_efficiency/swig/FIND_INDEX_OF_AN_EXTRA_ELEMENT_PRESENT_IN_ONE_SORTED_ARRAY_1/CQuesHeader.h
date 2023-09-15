#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_INDEX_OF_AN_EXTRA_ELEMENT_PRESENT_IN_ONE_SORTED_ARRAY_1 {
public:
    int F_I_O_A_E_E_P_I_O_S_A_1_f_gold(int arr1 [], int arr2 [], int n)
    { 
        int index = n ; 
        int left = 0 , right = n - 1 ; 
        while ( left <= right ) { 
            int mid = ( left + right ) / 2 ; 
            if ( arr2 [ mid ] == arr1 [ mid ] ) left = mid + 1 ; 
            else { 
                index = mid ; 
                right = mid - 1 ; 
            } 
        } 
        return index ; 
    } 
FIND_INDEX_OF_AN_EXTRA_ELEMENT_PRESENT_IN_ONE_SORTED_ARRAY_1() {}
};