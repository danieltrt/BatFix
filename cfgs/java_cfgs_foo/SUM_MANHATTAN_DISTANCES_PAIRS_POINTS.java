Nodes
1;special;;;
2;statement;int sum = 0;14;
3;statement;int i = 0;15;
4;conditional;foo_1 < foo_2;16;
5;statement;int j = foo_1 + 1;17;
6;conditional;foo_1 < foo_2;18;
7;statement;sum += fun_1(foo_1[foo_2] - foo_3[foo_4]) + fun_2(foo_5[foo_6] - foo_7[foo_8]);19;
8;statement;j++;19;
9;statement;i++;17;
10;statement;return foo_1;20;
11;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;10;
4;6;
5;7;9;
6;8;
7;6;
8;4;
9;11;
10;
