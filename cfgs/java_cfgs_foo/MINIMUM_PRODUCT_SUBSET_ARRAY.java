Nodes
1;special;;;
2;conditional;foo_1 == 1;14;
3;statement;return foo_1[0];14;
4;exit;;;
5;statement;int negmax = Integer.MIN_VALUE;15;
6;statement;int posmin = Integer.MAX_VALUE;16;
7;statement;int count_neg = 0;17;
8;statement;int count_zero = 0;17;
9;statement;int product = 1;18;
10;statement;int i = 0;19;
11;conditional;foo_1 < foo_2;20;
12;conditional;foo_1[foo_2] == 0;22;
13;statement;count_zero++;23;
14;statement;continue;24;
15;conditional;foo_1[foo_2] < 0;26;
16;statement;count_neg++;27;
17;statement;negmax = fun_1(foo_1, foo_2[foo_3]);28;
18;conditional;(foo_1[foo_2] > 0) && (foo_3[foo_4] < foo_5);30;
19;statement;posmin = foo_1[foo_2];30;
20;statement;product *= foo_1[foo_2];31;
21;statement;i++;21;
22;conditional;(foo_1 == foo_2) || ((foo_3 == 0) && (foo_4 > 0));33;
23;statement;return 0;33;
24;conditional;foo_1 == 0;34;
25;statement;return foo_1;34;
26;conditional;((foo_1 % 2) == 0) && (foo_2 != 0);35;
27;statement;product = foo_1 / foo_2;36;
28;statement;return foo_1;38;
Edges
0;2;
1;3;5;
2;4;
3;
4;6;
5;7;
6;8;
7;9;
8;10;
9;11;
10;12;22;
11;13;15;
12;14;
13;11;
14;16;18;
15;17;
16;18;
17;19;20;
18;20;
19;21;
20;11;
21;23;24;
22;4;
23;25;26;
24;4;
25;27;28;
26;28;
27;4;
