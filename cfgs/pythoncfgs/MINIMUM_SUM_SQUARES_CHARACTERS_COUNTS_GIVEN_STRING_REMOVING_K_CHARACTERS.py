Nodes
1;statement;foo_1 = fun_1(foo_2);8;
2;conditional;foo_1 >= foo_2;9;
3;statement;foo_1 = [0] * foo_2;11;
4;conditional;foo < foo;12;
5;statement;foo_1 = fun_1();14;
6;conditional;foo < foo;15;
7;conditional;foo_1 > 0;17;
8;statement;foo_1 = 0;22;
9;conditional;not fun_1();23;
10;statement;return foo_1;27;
11;statement;foo_1 = fun_1();24;
12;statement;foo_1 = foo_2 * -1;25;
13;statement;foo_1 += foo_2 * foo_3;26;
14;statement;foo_1 = fun_1();18;
15;statement;foo_1 = foo_2 + 1;19;
16;statement;fun_1(foo_1, foo_2);20;
17;statement;foo_1 = foo_2 - 1;21;
18;statement;fun_1(-foo_1[foo_2]);16;
19;statement;foo_1[fun_1(foo_2[foo_3]) - 97] += 1;13;
20;statement;return 0;10;
21;exit;;
Edges
0;2;
1;3;20;
2;4;
3;5;19;
4;6;
5;7;18;
6;8;14;
7;9;
8;10;11;
9;21;
10;12;
11;13;
12;9;
13;15;
14;16;
15;17;
16;7;
17;6;
18;4;
19;21;
20;
