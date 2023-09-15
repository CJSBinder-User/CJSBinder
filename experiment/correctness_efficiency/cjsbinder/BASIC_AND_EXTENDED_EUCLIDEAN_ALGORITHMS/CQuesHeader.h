#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class BASIC_AND_EXTENDED_EUCLIDEAN_ALGORITHMS {
public:
    int B_A_E_E_A_f_gold(int a, int b)
    { 
        if ( a == 0 ) return b ; 
        return B_A_E_E_A_f_gold ( b % a , a ) ; 
    } 
BASIC_AND_EXTENDED_EUCLIDEAN_ALGORITHMS() {}
};