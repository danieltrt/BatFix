Nodes
1;statement;foo_1 = 0;8;
2;conditional;fun_1(foo_1);9;
3;statement;return 2 * foo_1;11;
4;statement;foo_1 += foo_2 * (foo_3 - foo_4);10;
5;exit;;
Edges
0;2;
1;3;4;
2;5;
3;2;
4;
