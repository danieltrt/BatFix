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
#include <queue>
using namespace std;
bool f_gold ( string str ) {
  int n = str . length ( );
  int i;
  for ( i = 0;
  i < n;
  i ++ ) if ( str [ i ] != 'a' ) break;
  if ( i * 2 != n ) return false;
  int j;
  for ( j = i;
  j < n;
  j ++ ) if ( str [ j ] != 'b' ) return false;
  return true;
}


int foo;
bool i;
bool f_filled ( string str ) {
        int n = str.length();
        for ( int i = 0; i < n; i++ ) {
            if ( str[i] != 'a' ) {
                break;
            }
        }
        if ( i * 2 != n ) {
            return false;
        }
        for ( int j = i; j < n; j++ ) {
            if ( str[j] != 'b' ) {
                return false;
            }
        }
        return true;
    }

int main() {
    int n_success = 0;
    vector<string> param0 {"ba","aabb","abab","aaabb","aabbb","abaabbaa","abaababb","bbaa","11001000","ZWXv te"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i]) == f_gold(param0[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
