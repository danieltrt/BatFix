int minDifferenceAmongMaxMin ( int arr [ ] , int N , int K ) {
  sort ( arr , arr + N ) ;
  int res = 2147483647 ;
  for ( int i = 0 ;
  i < ( N - K ) + 1 ;
  i ++ ) {
    int curSeqDiff = arr [ i + K - 1 ] - arr [ i ] ;
    res = min ( res , curSeqDiff ) ;
  }
  return res ;
}
