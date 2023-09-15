#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_PAIRWISE_PRODUCTS {
public:
    long long S_P_P_f_gold(int n)
    { 
        long long int sum = 0 ; 
        for ( int i = 1 ; 
        i <= n ; 
        i ++ ) for ( int j = i ; 
        j <= n ; 
        j ++ ) sum = sum + i * j ; 
        return sum ; 
    } 
SUM_PAIRWISE_PRODUCTS() {}
};