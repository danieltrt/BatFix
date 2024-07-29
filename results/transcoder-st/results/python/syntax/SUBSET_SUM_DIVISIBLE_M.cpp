// Copyright (c) 2019-present, Facebook, Inc.
// All rights reserved.
//
// This source code is licensed under the license found in the
// LICENSE file in the root directory of this source tree.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
using namespace std;
bool f_gold ( int arr [ ], int n, int m ) {
  if ( n > m ) return true;
  bool DP [ m ];
  memset ( DP, false, m );
  for ( int i = 0;
  i < n;
  i ++ ) {
    if ( DP [ 0 ] ) return true;
    bool temp [ m ];
    memset ( temp, false, m );
    for ( int j = 0;
    j < m;
    j ++ ) {
      if ( DP [ j ] == true ) {
        if ( DP [ ( j + arr [ i ] ) % m ] == false ) temp [ ( j + arr [ i ] ) % m ] = true;
      }
    }
    for ( int j = 0;
    j < m;
    j ++ ) if ( temp [ j ] ) DP [ j ] = true;
    DP [ arr [ i ] % m ] = true;
  }
  return DP [ 0 ];
}


int foo;
bool f_filled(int arr[], int n, int m) {
    if ((n > m) || (n == 0))
        return true;
    bool DP[m];
    for (int i = 0; i < m; i++) {
        foo;
    }
}
