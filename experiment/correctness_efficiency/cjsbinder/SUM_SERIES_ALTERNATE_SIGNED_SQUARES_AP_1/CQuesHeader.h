#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_SERIES_ALTERNATE_SIGNED_SQUARES_AP_1 {
public:
    int S_S_A_S_S_A_1_f_gold(int n, int a [])
    { 
        return n * ( a [ 0 ] * a [ 0 ] - a [ 2 * n - 1 ] * a [ 2 * n - 1 ] ) / ( 2 * n - 1 ) ; 
    } 
SUM_SERIES_ALTERNATE_SIGNED_SQUARES_AP_1() {}
};