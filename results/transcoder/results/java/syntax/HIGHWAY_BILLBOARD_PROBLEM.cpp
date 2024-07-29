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
#include <queue>

#include <fstream>
#include <iomanip>
#include <vector>
#include <queue>

#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
using namespace std;
int f_gold ( int m, int x [ ], int revenue [ ], int n, int t ) {
  int maxRev [ m + 1 ];
  memset ( maxRev, 0, sizeof ( maxRev ) );
  int nxtbb = 0;
  for ( int i = 1;
  i <= m;
  i ++ ) {
    if ( nxtbb < n ) {
      if ( x [ nxtbb ] != i ) maxRev [ i ] = maxRev [ i - 1 ];
      else {
        if ( i <= t ) maxRev [ i ] = max ( maxRev [ i - 1 ], revenue [ nxtbb ] );
        else maxRev [ i ] = max ( maxRev [ i - t - 1 ] + revenue [ nxtbb ], maxRev [ i - 1 ] );
        nxtbb ++;
      }
    }
    else maxRev [ i ] = maxRev [ i - 1 ];
  }
  return maxRev [ m ];
}


int foo;
int f_filled ( int m, vector < int > x, vector < int > revenue, int n, int t ) {
  vector < int > maxRev ( m + 1, 0 );
  for ( int i = 0;
  i < m + 1;
  i ++ ) {
    maxRev [ i ] = 0;
  }
  int nxtbb = 0;
  for ( int i = 1;
  i <= m;
  i ++ ) {
    if ( nxtbb < n ) {
      if ( x [ nxtbb ] != i ) {
        maxRev [ i ] = maxRev [ i - 1 ];
      }
      else {
        if ( i <= t ) {
          maxRev [ i ] = max ( maxRev [ i - 1 ], revenue [ nxtbb ] );
        }
        else {
          maxRev [ i ] = max ( maxRev [ i - t - 1 ] + revenue [ nxtbb ], maxRev [ i - 1 ] );
        }
        nxtbb ++;
      }
    }
    else {
      maxRev [ i ] = maxRev [ i - 1 ];
    }
  }
  return maxRev [ m ];
}



int f_filled_inner(int param0, int   param1 [ ], int   param2 [ ], int param3, int param4)
{
vector < int > vect_param1(param1, param1 + param3);
vector < int > vect_param2(param2, param2 + param3);
return  f_filled(param0,vect_param1,vect_param2,param3,param4);
}

int main() {
    int n_success = 0;
    vector<int> param0 {16,39,5,10,14,32,2,22,15,8};
    vector<vector<int>> param1 {{6,15,15,18,23,29,32,36,37,39,40,41,44,49,51,52,53,57,66,68,82,89,96},{76,60,88,46,-20,-78,-22,54,-18,92,-42,-66,-90,-72,-48,22,-72,-42,-46,94,82,-78,14,86,10,-64,-78,66,78,-36,50,-20,-40,-12,10,-46,56,-18,4,-76,-64,74,22,34,4,-2},{0,0,0,1,1,1,1,1,1,1},{21,69,30,10,71,72,71,78,30,9,72,10,7,87,30,46,56,74,73,60,86},{-76,-76,-66,-64,-62,-60,-52,-48,-42,-28,-14,-6,-6,16,20,20,38,46,58,60,70,72,86,98},{1,1,0,0,0,0,0,0,1,1,1,1,1,0,1,0,0,0,1,0,0,1,1,0,0,1,1,1,0,1,0,1,1,0,1,0,1},{16,38,72,82},{28,-76,42,-2,30,-10,52,66,26,96,96,-72,26,-86,-30,-78,32,-32,58,12,-72,8,34,-68,-28,-66},{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{95,12,65,97,92,49,94,32,37,97,9,35}};
    vector<vector<int>> param2 {{1,2,5,5,24,26,31,32,33,41,57,59,71,75,79,87,87,88,92,94,96,96,99},{28,8,-60,84,68,-54,-56,0,-68,-84,-6,92,-80,-24,86,-6,-44,82,74,90,-46,40,62,50,-42,38,78,94,46,-14,-48,66,70,52,10,-88,54,-10,98,34,16,-2,-62,-56,-40,86},{0,0,0,0,0,0,0,1,1,1},{72,45,7,30,76,35,75,72,4,7,55,56,7,52,48,27,11,76,66,48,33},{-90,-82,-78,-76,-74,-52,-48,-44,-44,-40,-38,-14,-6,10,20,38,38,40,44,48,52,54,76,78},{0,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,0,1,1,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1},{15,34,56,74},{68,-38,34,20,40,78,52,80,58,-12,-18,10,40,34,20,-32,-8,-46,8,62,94,-30,-94,26,-40,64},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{25,32,14,49,90,37,92,1,8,75,50,9}};
    vector<int> param3 {12,25,9,18,15,28,2,13,25,9};
    vector<int> param4 {12,27,6,20,17,36,3,16,15,8};
    for(int i = 0; i < param0.size(); ++i)
    {
        if(f_filled_inner(param0[i],&param1[i].front(),&param2[i].front(),param3[i],param4[i]) == f_gold(param0[i],&param1[i].front(),&param2[i].front(),param3[i],param4[i]))
        {
            n_success+=1;
        }
    }
    cout << "#Results:" << " " << n_success << ", " << param0.size();
    return 0;
}
