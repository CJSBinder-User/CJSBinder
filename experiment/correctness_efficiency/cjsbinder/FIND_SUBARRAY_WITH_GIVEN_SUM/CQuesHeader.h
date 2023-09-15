#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_SUBARRAY_WITH_GIVEN_SUM {
public:
    int F_S_W_G_S_f_gold(int arr [], int n, int sum)
    { 
        int curr_sum , i , j ; 
        for ( i = 0 ; 
        i < n ; 
        i ++ ) { 
            curr_sum = arr [ i ] ; 
            for ( j = i + 1 ; 
            j <= n ; 
            j ++ ) { 
                if ( curr_sum == sum ) { 
                    cout << "Sum found between indexes " << i << " and " << j - 1 ; 
                    return 1 ; 
                } 
                if ( curr_sum > sum || j == n ) break ; 
                curr_sum = curr_sum + arr [ j ] ; 
            } 
        } 
        cout << "No subarray found" ; 
        return 0 ; 
    } 
FIND_SUBARRAY_WITH_GIVEN_SUM() {}
};