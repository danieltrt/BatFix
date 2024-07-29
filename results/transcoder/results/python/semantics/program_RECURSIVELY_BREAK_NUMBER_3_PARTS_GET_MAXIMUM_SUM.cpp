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
int f_gold ( int n ) {
  if ( n == 0 || n == 1 ) return n;
  return max ( ( f_gold ( n / 2 ) + f_gold ( n / 3 ) + f_gold ( n / 4 ) ), n );
}


int foo;
int env_var_0 = atoi(getenv("env_var_0"));
int f_filled ( int n ) {
  int _res_key_if_0;
  if(env_var_0 == 0) { _res_key_if_0 = n == 0 or n == 1; }
  if ( _res_key_if_0 ) return n ;
  return max ( ( f_filled ( n / 2 ) + f_filled ( n / 3 ) + f_filled ( n / 4 ) ) , n ) ;
}


int main() {
    int n_success = 0;
    vector<int> param0 {39,79,7,76,48,18,58,17,36,5};
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
