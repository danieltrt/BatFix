Nodes
1;special;;;
2;statement;Stack<Character> Stack = new Stack<>();14;
3;statement;char[] str = fun_1();15;
4;statement;char ch;16;
5;conditional;foo_1;16;
6;conditional;foo_1 == ')';17;
7;statement;char top = fun_1();18;
8;statement;fun_1();19;
9;statement;int elementsInside = 0;20;
10;conditional;foo_1 != '(';21;
11;statement;elementsInside++;22;
12;statement;top = fun_1();23;
13;statement;fun_1();24;
14;conditional;foo_1 < 1;26;
15;statement;return true;27;
16;exit;;;
17;statement;fun_1(foo_2);31;
18;statement;return false;34;
Edges
0;2;
1;3;
2;4;
3;5;
4;6;18;
5;7;17;
6;8;
7;9;
8;10;
9;14;11;
10;12;
11;13;
12;10;
13;15;5;
14;16;
15;
16;5;
17;16;
