#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class LARGEST_SUBSEQUENCE_GCD_GREATER_1 {
public:
    int L_S_G_G_1_f_gold(int arr [], int n)
    { 
        int ans = 0 ; 
        int maxele = * max_element ( arr , arr + n ) ; 
        for ( int i = 2 ; 
        i <= maxele ; 
        ++ i ) { 
            int count = 0 ; 
            for ( int j = 0 ; 
            j < n ; 
            ++ j ) { 
                if ( arr [ j ] % i == 0 ) ++ count ; 
            } 
            ans = max ( ans , count ) ; 
        } 
        return ans ; 
    } 
LARGEST_SUBSEQUENCE_GCD_GREATER_1() {}
};