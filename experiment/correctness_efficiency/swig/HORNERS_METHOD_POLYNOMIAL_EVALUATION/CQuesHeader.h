#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class HORNERS_METHOD_POLYNOMIAL_EVALUATION {
public:
    int H_M_P_E_f_gold(int poly [], int n, int x)
    { 
        int result = poly [ 0 ] ; 
        for ( int i = 1 ; 
        i < n ; 
        i ++ ) result = result * x + poly [ i ] ; 
        return result ; 
    } 
HORNERS_METHOD_POLYNOMIAL_EVALUATION() {}
};