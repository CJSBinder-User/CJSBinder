#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class PRODUCT_MAXIMUM_FIRST_ARRAY_MINIMUM_SECOND {
public:
    int P_M_F_A_M_S_f_gold(int arr1 [], int arr2 [], int n1, int n2)
    { 
        sort ( arr1 , arr1 + n1 ) ; 
        sort ( arr2 , arr2 + n2 ) ; 
        return arr1 [ n1 - 1 ] * arr2 [ 0 ] ; 
    } 
PRODUCT_MAXIMUM_FIRST_ARRAY_MINIMUM_SECOND() {}
};