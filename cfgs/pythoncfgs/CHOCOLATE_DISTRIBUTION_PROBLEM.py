Nodes
1;conditional;foo_1 == 0 or foo_2 == 0;10;
2;statement;fun_1();12;
3;conditional;foo_1 < foo_2;13;
4;statement;foo_1 = foo_2.maxsize;15;
5;statement;foo_1 = 0;16;
6;statement;foo_1 = 0;17;
7;statement;foo_1 = 0;18;
8;conditional;foo_1 + foo_2 - 1 < foo_3;19;
9;statement;return foo_1[foo_2] - foo_3[foo_4];26;
10;statement;foo_1 = foo_2[foo_3 + foo_4 - 1] - foo_5[foo_6];20;
11;conditional;foo_1 < foo_2;21;
12;statement;foo_1 += 1;25;
13;statement;foo_1 = foo_2;22;
14;statement;foo_1 = foo_2;23;
15;statement;foo_1 = foo_2 + foo_3 - 1;24;
16;statement;return -1;14;
17;statement;return 0;11;
18;exit;;
Edges
0;2;17;
1;3;
2;4;16;
3;5;
4;6;
5;7;
6;8;
7;9;10;
8;18;
9;11;
10;12;13;
11;8;
12;14;
13;15;
14;12;
15;18;
16;18;
17;
