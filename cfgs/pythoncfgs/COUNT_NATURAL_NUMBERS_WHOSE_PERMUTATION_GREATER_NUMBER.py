Nodes
1;statement;foo_1 = 0;8;
2;conditional;foo < foo;9;
3;statement;return foo_1;22;
4;statement;foo_1 = [];10;
5;conditional;foo_1 <= foo_2;11;
6;conditional;fun_1(foo_1) != 0;14;
7;statement;foo_1 = foo_2[-1];15;
8;statement;fun_1();16;
9;conditional;foo < foo;17;
10;statement;foo_1 = foo_2 * 10 + foo_3;18;
11;conditional;foo_1 <= foo_2;19;
12;statement;fun_1(foo_1);20;
13;statement;foo_1 += 1;21;
14;statement;fun_1(foo_1);12;
15;statement;foo_1 += 1;13;
16;exit;;
Edges
0;2;
1;3;4;
2;16;
3;5;
4;6;14;
5;2;7;
6;8;
7;9;
8;6;10;
9;11;
10;9;12;
11;13;
12;9;
13;15;
14;6;
15;
