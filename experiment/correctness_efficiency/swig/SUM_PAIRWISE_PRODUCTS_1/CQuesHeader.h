#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class SUM_PAIRWISE_PRODUCTS_1 {
public:
    long long S_P_P_1_f_gold(int n)
    { 
        long long int multiTerms = n * ( n + 1 ) / 2 ; 
        long long int sum = multiTerms ; 
        for ( int i = 2 ; 
        i <= n ; 
        i ++ ) { 
            multiTerms = multiTerms - ( i - 1 ) ; 
            sum = sum + multiTerms * i ; 
        } 
        return sum ; 
    } 
SUM_PAIRWISE_PRODUCTS_1() {}
};