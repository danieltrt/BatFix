Nodes
1;special;;;
2;conditional;foo_1 <= 1;14;
3;statement;return false;14;
4;exit;;;
5;conditional;foo_1 <= 3;15;
6;statement;return true;15;
7;conditional;((foo_1 % 2) == 0) || ((foo_2 % 3) == 0);16;
8;statement;return false;16;
9;statement;int i = 5;17;
10;conditional;(foo_1 * foo_2) <= foo_3;18;
11;conditional;((foo_1 % foo_2) == 0) || ((foo_3 % (foo_4 + 2)) == 0);19;
12;statement;return false;19;
13;statement;i = foo_1 + 6;19;
14;statement;return true;20;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;7;
5;4;
6;8;9;
7;4;
8;10;
9;11;14;
10;12;13;
11;4;
12;10;
13;4;
