Nodes
1;special;;;
2;statement;int n = fun_1();14;
3;statement;int ans = -1;15;
4;statement;String num = "";16;
5;statement;int i = 1;17;
6;conditional;foo_1 < (1 << foo_2);18;
7;statement;String str = "";20;
8;statement;int j = 0;21;
9;conditional;foo_1 < foo_2;22;
10;conditional;((foo_1 >> foo_2) & 1) == 1;24;
11;statement;str += fun_1(foo_2);25;
12;statement;j++;23;
13;conditional;fun_1(0) != '0';28;
14;statement;int temp = 0;29;
15;statement;int j = 0;30;
16;conditional;foo_1 < fun_1();31;
17;statement;temp = (foo_1 * 10) + ((int) (fun_1(foo_3) - '0'));32;
18;statement;j++;32;
19;statement;int k = ((int) (fun_1(foo_1)));33;
20;conditional;(foo_1 * foo_2) == foo_3;34;
21;conditional;foo_1 < ((int) (fun_1()));35;
22;statement;ans = ((int) (fun_1()));36;
23;statement;num = foo_1;37;
24;statement;i++;19;
25;conditional;foo_1 == (-1);42;
26;statement;return foo_1;42;
27;exit;;;
28;statement;System.fun_1(foo_1 + " ");44;
29;statement;return foo_1 - foo_2;45;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;
5;7;25;
6;8;
7;9;
8;10;13;
9;11;12;
10;12;
11;9;
12;14;24;
13;15;
14;16;
15;17;19;
16;18;
17;16;
18;20;
19;21;24;
20;22;24;
21;23;
22;24;
23;6;
24;26;28;
25;27;
26;
27;29;
28;27;
