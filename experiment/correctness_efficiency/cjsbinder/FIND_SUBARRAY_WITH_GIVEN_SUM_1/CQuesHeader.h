#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_SUBARRAY_WITH_GIVEN_SUM_1 {
public:
    int F_S_W_G_S_1_f_gold(int arr [], int n, int sum)
    { 
        int curr_sum = arr [ 0 ] , start = 0 , i ; 
        for ( i = 1 ; 
        i <= n ; 
        i ++ ) { 
            while ( curr_sum > sum && start < i - 1 ) { 
                curr_sum = curr_sum - arr [ start ] ; 
                start ++ ; 
            } 
            if ( curr_sum == sum ) { 
                cout << "Sum found between indexes " << start << " and " << i - 1 ; 
                return 1 ; 
            } 
            if ( i < n ) curr_sum = curr_sum + arr [ i ] ; 
        } 
        cout << "No subarray found" ; 
        return 0 ; 
    } 
FIND_SUBARRAY_WITH_GIVEN_SUM_1() {}
};