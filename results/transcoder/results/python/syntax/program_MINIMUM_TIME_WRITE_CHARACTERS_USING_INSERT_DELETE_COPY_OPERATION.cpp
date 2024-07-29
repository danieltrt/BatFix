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
int f_gold ( int N, int insert, int remove, int copy ) {
  if ( N == 0 ) return 0;
  if ( N == 1 ) return insert;
  int dp [ N + 1 ];
  memset ( dp, 0, sizeof ( dp ) );
  for ( int i = 1;
  i <= N;
  i ++ ) {
    if ( i % 2 == 0 ) dp [ i ] = min ( dp [ i - 1 ] + insert, dp [ i / 2 ] + copy );
    else dp [ i ] = min ( dp [ i - 1 ] + insert, dp [ ( i + 1 ) / 2 ] + copy + remove );
  }
  return dp [ N ];
}


int foo;
 int returndp;
 int env_var_0 = atoi(getenv("env_var_0"));
int f_filled(int N, int insrt, int remov, int cpy) {
    if (N == 0)
        return 0;
    if (N == 1)
        return insrt;
    int *dp = new int [N + 1];
    dp[0] = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            dp[i] = min(dp[i - 1] + insrt, dp[i / 2] + cpy);
        else
            dp[i] = min(dp[i - 1] + insrt, dp[(i + 1) / 2] + cpy + remov);
    }
    if(env_var_0 == 0) { N; }
    if(env_var_0 == 1) { cpy; }
    if(env_var_0 == 2) { dp; }
    if(env_var_0 == 3) { dp+N; }
    if(env_var_0 == 4) { dp+cpy; }
    if(env_var_0 == 5) { dp+insrt; }
    if(env_var_0 == 6) { dp+remov; }
    if(env_var_0 == 7) { dp[N]; }
    if(env_var_0 == 8) { dp[cpy]; }
    if(env_var_0 == 9) { dp[insrt]; }
    if(env_var_0 == 10) { dp[remov]; }
    if(env_var_0 == 11) { insrt; }
    if(env_var_0 == 12) { remov; }
    ;
}



int main() {
    int n_success = 0;
    vector<int> param0 {59,66,98,63,99,45,60,11,96,54};
    vector<int> param1 {75,68,55,4,37,28,53,96,95,6};
    vector<int> param2 {12,32,69,41,98,59,40,50,48,50};
    vector<int> param3 {45,41,5,12,55,7,52,50,84,82};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled(param0[i],param1[i],param2[i],param3[i]) == f_gold(param0[i],param1[i],param2[i],param3[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
