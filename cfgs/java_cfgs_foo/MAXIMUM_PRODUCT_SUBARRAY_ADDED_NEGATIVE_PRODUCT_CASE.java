Nodes
1;special;;;
2;statement;int i;14;
3;statement;int ans = Integer.MIN_VALUE;15;
4;statement;int maxval = 1;16;
5;statement;int minval = 1;17;
6;statement;int prevMax;18;
7;statement;i = 0;19;
8;conditional;foo_1 < foo_2;20;
9;conditional;foo_1[foo_2] > 0;22;
10;statement;maxval = foo_1 * foo_2[foo_3];23;
11;statement;minval = fun_1(1, foo_1 * foo_2[foo_3]);24;
12;conditional;foo_1[foo_2] == 0;26;
13;statement;minval = 1;27;
14;statement;maxval = 0;28;
15;conditional;foo_1[foo_2] < 0;30;
16;statement;prevMax = foo_1;31;
17;statement;maxval = foo_1 * foo_2[foo_3];32;
18;statement;minval = foo_1 * foo_2[foo_3];33;
19;statement;ans = fun_1(foo_1, foo_2);35;
20;conditional;foo_1 <= 0;36;
21;statement;maxval = 1;37;
22;statement;i++;21;
23;statement;return foo_1;40;
24;exit;;;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;
6;8;
7;9;23;
8;10;12;
9;11;
10;19;
11;13;15;
12;14;
13;19;
14;16;19;
15;17;
16;18;
17;19;
18;20;
19;21;22;
20;22;
21;8;
22;24;
23;
