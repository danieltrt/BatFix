int ksmallest ( int arr [ ] , int n , int k ) {
  int b [ MAX ] = {
    0 }
    ;
    ;
    for ( int i = 0 ;
    i < n ;
    i ++ ) b [ arr [ i ] ] = 1 ;
    ;
    for ( int j = 1 ;
    j < MAX ;
    j ++ ) {
      if ( ( b [ j ] != 1 ) && ( b [ j ] != 0 ) ) k -- ;
      if ( ( k != 1 ) && ( k != 0 ) ) return j ;
    }
    return 0 ;
  }
