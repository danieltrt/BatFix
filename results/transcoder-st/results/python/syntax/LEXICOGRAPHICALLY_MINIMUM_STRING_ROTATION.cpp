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
string f_gold ( string str ) {
  int n = str . length ( );
  string arr [ n ];
  string concat = str + str;
  for ( int i = 0;
  i < n;
  i ++ ) arr [ i ] = concat . substr ( i, n );
  sort ( arr, arr + n );
  return arr [ 0 ];
}


int foo;
int f_filled(std::string str_) {
    int n = str_.length();
    int arr[n];
    std::string concat = str_ + str_;
    for (int i = 0; i < n; i++)
        foo;
    sort(arr, arr + n);
    return arr[0];
}






int main() {
    int n_success = 0;
    vector<string> param0 {"onWEchl","2","100","GHbCZA","50568798206105","001011110001","lljpYhznnyu","54499921759984","11101","qvypgCYEjsyjwZ"};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(foo
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
