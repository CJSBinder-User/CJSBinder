#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1 {
public:
    bool F_R_B_M_C_1_1_f_gold(const vector<vector<int> > & matrix)
    { /*
        for(auto i : matrix){
            for(auto j : i){
                cout << j << ",";
            }
            cout << endl;
        }*/
        int rows = matrix . size ( ) ; 
        if ( rows == 0 ) return false ; 
        int columns = matrix [ 0 ] . size ( ) ; 
        for ( int i = 0 ; i < rows ; ++ i) 
            if ( matrix [ i ] . size ( ) < columns )
                columns = matrix [ i ] . size ( );
        unordered_map < int , unordered_set < int > > table ; 
        for ( int i = 0 ; 
        i < rows ; 
        ++ i ) { 
            for ( int j = 0 ; 
            j < columns - 1 ; 
            ++ j ) { 
                for ( int k = j + 1 ; 
                k < columns ; 
                ++ k ) { 
                    if ( matrix [ i ] [ j ] == 1 && matrix [ i ] [ k ] == 1 ) { 
                        if ( table . find ( j ) != table . end ( ) && table [ j ] . find ( k ) != table [ j ] . end ( ) ) return true ; 
                        table [ j ] . insert ( k ) ; 
                    } 
                } 
            } 
        } 
        return false ; 
    } 
FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1() {}
};