#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class HYPERCUBE_GRAPH {
public:
    int H_G_f_gold(int n)
    { 
        if ( n == 1 ) return 2 ; 
        return 2 * H_G_f_gold ( n - 1 ) ; 
    } 
HYPERCUBE_GRAPH() {}
};