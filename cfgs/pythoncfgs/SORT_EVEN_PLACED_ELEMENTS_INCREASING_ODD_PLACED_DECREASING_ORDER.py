Nodes
1;statement;foo_1 = [];8;
2;statement;foo_1 = [];9;
3;conditional;fun_1(foo_1);10;
4;statement;foo_1 = fun_1(foo_2);15;
5;statement;foo_1 = fun_1(foo_2);16;
6;statement;foo_1 = foo_2[::-1];17;
7;statement;foo_1 = 0;18;
8;conditional;fun_2(fun_2(foo_1));19;
9;statement;fun_2(fun_2(foo_1));22;
10;statement;foo_1[foo_2] = foo_3[foo_4];23;
11;statement;foo_1 += 1;24;
12;statement;foo_1[foo_2] = foo_3[foo_4];20;
13;statement;foo_1 += 1;21;
14;conditional;foo_1 % 2 == 0;11;
15;statement;fun_1(foo_1[foo_2]);14;
16;statement;fun_1(foo_1[foo_2]);12;
17;exit;;
Edges
0;2;
1;3;
2;4;14;
3;5;
4;6;
5;7;
6;8;
7;9;12;
8;10;
9;11;
10;9;
11;13;
12;8;
13;15;16;
14;3;
15;3;
16;
