Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;int C = 0;15;
4;statement;int c1 = 0;15;
5;statement;int c2 = 0;15;
6;statement;int i = 0;16;
7;conditional;foo_1 < foo_2;17;
8;conditional;fun_1(foo_2) == 'a';19;
9;statement;c1++;19;
10;conditional;fun_1(foo_2) == 'b';20;
11;statement;c2++;21;
12;statement;C += foo_1;22;
13;statement;i++;18;
14;statement;return (foo_1 * foo_2) + ((((foo_3 * (foo_4 - 1)) / 2) * foo_5) * foo_6);25;
15;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;14;
7;9;10;
8;10;
9;11;13;
10;12;
11;13;
12;7;
13;15;
14;
