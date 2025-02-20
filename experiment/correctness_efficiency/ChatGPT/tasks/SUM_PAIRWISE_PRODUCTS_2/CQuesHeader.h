#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_PAIRWISE_PRODUCTS_2 {
public:
    long long S_P_P_2_f_gold(int n)
    { 
        return n * ( n + 1 ) * ( n + 2 ) * ( 3 * n + 1 ) / 24 ; 
    } 
SUM_PAIRWISE_PRODUCTS_2() {}
};