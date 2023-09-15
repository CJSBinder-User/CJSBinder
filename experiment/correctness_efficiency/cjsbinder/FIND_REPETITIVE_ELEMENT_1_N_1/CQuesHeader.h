#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_REPETITIVE_ELEMENT_1_N_1 {
public:
    int F_R_E_1_N_1_f_gold(int arr [], int n)
    { 
        return accumulate ( arr , arr + n , 0 ) - ( ( n - 1 ) * n / 2 ) ; 
    } 
FIND_REPETITIVE_ELEMENT_1_N_1() {}
};