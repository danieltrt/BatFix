Nodes
1;special;;;
2;statement;int min_prefix_sum = 0;14;
3;statement;int res = Integer.MIN_VALUE;15;
4;statement;int[] prefix_sum = new int[foo_1];16;
5;statement;foo_1[0] = foo_2[0];17;
6;statement;int i = 1;18;
7;conditional;foo_1 < foo_2;19;
8;statement;foo_1[foo_2] = foo_3[foo_4 - 1] + foo_5[foo_6];20;
9;statement;i++;20;
10;statement;int i = 0;21;
11;conditional;foo_1 < foo_2;22;
12;statement;res = fun_1(foo_1, foo_2[foo_3] - foo_4);24;
13;statement;min_prefix_sum = fun_1(foo_1, foo_2[foo_3]);25;
14;statement;i++;23;
15;statement;return foo_1;27;
16;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;10;
7;9;
8;7;
9;11;
10;12;15;
11;13;
12;14;
13;11;
14;16;
15;
