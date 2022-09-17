[root@localhost temp]# gcc -o optimize optimize.c 
[root@localhost temp]# gcc -O -o optimize1 optimize.c 
[root@localhost temp]# gcc -O2 -o optimize2 optimize.c 
[root@localhost temp]# gcc -O3 -o optimize3 optimize.c

[root@localhost temp]# time ./optimize
Result=400001999.000000

real	0m1.252s
user	0m1.237s
sys	0m0.002s
[root@localhost temp]# time ./optimize1
Result=400001999.000000

real	0m0.683s
user	0m0.674s
sys	0m0.001s
[root@localhost temp]# time ./optimize2
Result=400001999.000000

real	0m0.675s
user	0m0.667s
sys	0m0.000s
[root@localhost temp]# time ./optimize3
Result=400001999.000000

real	0m0.673s
user	0m0.666s
sys	0m0.000s
