Nodes
1;statement;foo_1 = 0;8;
2;conditional;fun_1(foo_1);9;
3;conditional;foo < foo;16;
4;statement;return foo_1;23;
5;statement;foo_1 = 0;17;
6;conditional;fun_1(foo_1 - 1, 0, -1);18;
7;conditional;foo_1 > 1 and foo_2 == 1;21;
8;statement;foo_1 += 1;22;
9;conditional;foo_1[foo_2][foo_3 - 1] <= foo_4[foo_5][foo_6];19;
10;statement;foo_1 = 0;10;
11;conditional;fun_1(foo_1 - 1);11;
12;conditional;foo_1 == foo_2 - 2;14;
13;statement;foo_1 += 1;15;
14;conditional;foo_1[foo_2][foo_3 + 1] <= foo_4[foo_5][foo_6];12;
15;exit;;
Edges
0;2;
1;3;10;
2;4;5;
3;15;
4;6;
5;7;9;
6;3;8;
7;3;
8;6;7;
9;11;
10;12;14;
11;2;13;
12;2;
13;11;12;
14;
