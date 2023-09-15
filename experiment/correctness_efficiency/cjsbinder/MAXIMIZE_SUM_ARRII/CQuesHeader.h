#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class MAXIMIZE_SUM_ARRII {
public:
    int M_S_A_f_gold(int arr [], int n)
    { 
        sort ( arr , arr + n ) ; 
        int sum = 0 ; 
        for ( int i = 0 ; 
        i < n ; 
        i ++ ) sum += ( arr [ i ] * i ) ; 
        return sum ; 
    } 
MAXIMIZE_SUM_ARRII() {}
};