#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_THE_ELEMENT_THAT_APPEARS_ONCE_2 {
public:
    int F_T_E_T_A_O_2_f_gold(int a [], int n)
    { 
        unordered_set < int > s ( a , a + n ) ; 
        int arr_sum = accumulate ( a , a + n , 0 ) ; 
        int set_sum = accumulate ( s . begin ( ) , s . end ( ) , 0 ) ; 
        return ( 3 * set_sum - arr_sum ) / 2 ; 
    } 
FIND_THE_ELEMENT_THAT_APPEARS_ONCE_2() {}
};