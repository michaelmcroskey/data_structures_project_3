Project 03 - Key-Value Store I
==============================

This [project] implements a variety of [map] backends for a basic [key-value
store].

[project]:          https://www3.nd.edu/~pbui/teaching/cse.30331.fa16/project03.html
[map]:              https://en.wikipedia.org/wiki/Associative_array
[key-value store]:  https://en.wikipedia.org/wiki/Key-value_database

Members
-------

Michael McRoskey (mmcrosk1)
Troy Prince (tprince)
David Mellitt (dmellitt)

Questions
---------

**1) What is complexity of each of the map backends (ie. Unsorted, Sorted, BST, RBTree, Treap)? For each implementation, briefly explain the best, average, and worst case complexities of inserting and searching using the particular method in terms of Big-O notation.**

**UNSORTED**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O( 1 ) | O( n ) | O( n ) |
| SEARCH      | O( 1 ) | O( n ) | O( n ) |

**SORTED**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O( 1 ) |O(nlogn)|O(nlogn)|
| SEARCH      | O( 1 )| O(logn)| O(logn)|

**BST**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O( 1 ) | O(logn)| O( n ) |
| SEARCH      | O( 1 ) | O(logn)| O( n ) |

**RB-TREE**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O( 1 ) | O(logn)| O(logn)|
| SEARCH      | O( 1 ) | O(logn)| O(logn)|

**TREAP**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O( 1 ) | O(logn)| O( n ) |
| SEARCH      | O( 1 ) | O(logn)| O( n ) |


**2) What is complexity of each of the map backends (ie. Unsorted, Sorted, BST, RBTree, Treap)? For each implementation, briefly explain the best, average, and worst case complexities of inserting and searching using the particular method in terms of Big-O notation.**

| Backend     | NITEMS    | PADLENGTH | Insert Time   | Search Time   |
|-------------|-----------|-----------|---------------|---------------|
| UNSORTED    | 10        | 1         |    .00003373  |    .00001131  |
| UNSORTED    | 100       | 1         |    .000332    |    .000528    |
| UNSORTED    | 1000      | 1         |    .02998     |    .04635     |
| UNSORTED    | 10000     | 1         |   2.49132     |   4.05861     |
| UNSORTED    | 100000    | 1         | 265.863       | 418.904       |
| UNSORTED    | 1000000   | 1         |   INFINITY    |   INFINITY    |
| UNSORTED    | 10000000  | 1         |   INFINITY    |   INFINITY    |
| UNSORTED    | 10        | 2         |    .000128    |    .00000668  |
| UNSORTED    | 100       | 2         |    .000224    |    .0003175   |
| UNSORTED    | 1000      | 2         |    .01708     |    .027334    |
| UNSORTED    | 10000     | 2         |   1.637       |   2.58275     |
| UNSORTED    | 100000    | 2         | 164.698       | 261.127       |
| UNSORTED    | 1000000   | 2         |   INFINITY    |     N/A       |
| UNSORTED    | 10000000  | 2         |   INFINITY    |     N/A       |
| UNSORTED    | 10        | 4         |    .00004218  |    .00001068  |
| UNSORTED    | 100       | 4         |    .000417    |    .000488    |
| UNSORTED    | 1000      | 4         |    .0218      |    .0291      |
| UNSORTED    | 10000     | 4         |   1.796       |   2.741       |
| UNSORTED    | 100000    | 4         | 163.084       | 258.539       |
| UNSORTED    | 1000000   | 4         |   INFINITY    |     N/A       |
| UNSORTED    | 10000000  | 4         |   INFINITY    |     N/A       |
| UNSORTED    | 10        | 8         | 0             | 0             |
| UNSORTED    | 100       | 8         | 0             | 0             |
| UNSORTED    | 1000      | 8         | 0             | 0             |
| UNSORTED    | 10000     | 8         | 0             | 0             |
| UNSORTED    | 100000    | 8         | 0             | 0             |
| UNSORTED    | 1000000   | 8         | 0             | 0             |
| UNSORTED    | 10000000  | 8         | 0             | 0             |
|-------------|-----------|-----------|---------------|---------------|
| SORTED      | 10        | 1         |   .0000387    |   .000011625  |
| SORTED      | 100       | 1         |   .001787     |   .0001246    |
| SORTED      | 1000      | 1         |   .335974     |   .001787     |
| SORTED      | 10000     | 1         | 47.3355       |   .021294     |
| SORTED      | 100000    | 1         |   INFINITY    |      N/A      |
| SORTED      | 1000000   | 1         |   INFINITY    |      N/A      |
| SORTED      | 10000000  | 1         |   INFINITY    |      N/A      |
| SORTED      | 10        | 2         |   .0000352    |   .00001058   |
| SORTED      | 100       | 2         |   .000447     |   .0000861    |
| SORTED      | 1000      | 2         |   .1213       |   .00116      |
| SORTED      | 10000     | 2         | 13.6249       |   .0149       |
| SORTED      | 100000    | 2         |   INFINITY    |     N/A       |
| SORTED      | 1000000   | 2         |   INFINITY    |     N/A       |
| SORTED      | 10000000  | 2         |   INFINITY    |     N/A       |
| SORTED      | 10        | 4         |   .0000387    |   .0000122    |
| SORTED      | 100       | 4         |   .000476     |   .0000878    |
| SORTED      | 1000      | 4         |   .0424       |   .00121      |
| SORTED      | 10000     | 4         |  3.907        |   .0157       |
| SORTED      | 100000    | 4         |   INFINITY    |     N/A       |
| SORTED      | 1000000   | 4         |   INFINITY    |     N/A       |
| SORTED      | 10000000  | 4         |   INFINITY    |     N/A       |
| SORTED      | 10        | 8         | 0             | 0             |
| SORTED      | 100       | 8         | 0             | 0             |
| SORTED      | 1000      | 8         | 0             | 0             |
| SORTED      | 10000     | 8         | 0             | 0             |
| SORTED      | 100000    | 8         | 0             | 0             |
| SORTED      | 1000000   | 8         | 0             | 0             |
| SORTED      | 10000000  | 8         | 0             | 0             |
| ----------- | --------- | --------- | ------------- | ------------- |
| BST         | 10        | 1         |    .00002723  |    .00000898  |
| BST         | 100       | 1         |    .0001158   |    .0000853   |
| BST         | 1000      | 1         |    .001255    |    .001199    |
| BST         | 10000     | 1         |    .015535    |    .015627    |
| BST         | 100000    | 1         |    .19758     |    .194388    |
| BST         | 1000000   | 1         |   2.30758     |   2.37186     |
| BST         | 10000000  | 1         |  25.2057      |  23.2448      |
| BST         | 10        | 2         |    .000039    |    .00001767  |
| BST         | 100       | 2         |    .000555    |    .0004629   |
| BST         | 1000      | 2         |    .00679     |    .00621     |
| BST         | 10000     | 2         |    .0689      |    .0651      |
| BST         | 100000    | 2         |    .728       |    .691       |
| BST         | 1000000   | 2         |   7.874       |   7.505       |
| BST         | 10000000  | 2         |  85.121       |  80.809       |
| BST         | 10        | 4         |    .0000377   |    .0000117   |
| BST         | 100       | 4         |    .0002924   |    .0002588   |
| BST         | 1000      | 4         |    .02319     |    .023266    |
| BST         | 10000     | 4         |   2.7283      |   2.569       |
| BST         | 100000    | 4         |  28.526       |  27.696       |
| BST         | 1000000   | 4         | 292.782       | 280.089       |
| BST         | 10000000  | 4         |   INFINITY    |     N/A       |
| BST         | 10        | 8         |    .0000357   |    .00001101  |
| BST         | 100       | 8         |    .000297    |    .000264    |
| BST         | 1000      | 8         |    .0239      |    .0246      |
| BST         | 10000     | 8         |   3.077       |   2.882       |
| BST         | 100000    | 8         |   INFINITY    |     N/A       |
| BST         | 1000000   | 8         |   INFINTIY    |     N/A       |
| BST         | 10000000  | 8         |   INFINTIY    |     N/A       |
| ----------- | --------- | --------- | ------------- | ------------- |
| RB-TREE     | 10        | 1         |     .0000419  |    .00002055  |
| RB-TREE     | 100       | 1         |     .0004916  |    .0006208   |
| RB-TREE     | 1000      | 1         |     .03857    |    .05547     |
| RB-TREE     | 10000     | 1         |    4.14356    |   5.78877     |
| RB-TREE     | 100000    | 1         | 481.177       | 611.944       |
| RB-TREE     | 1000000   | 1         |   INFINITY    |      N/A      |
| RB-TREE     | 10000000  | 1         |   INFINITY    |   INFINITY    |
| RB-TREE     | 10        | 2         |     .0000636  |    .00000742  |
| RB-TREE     | 100       | 2         |     .000419   |    .000385    |
| RB-TREE     | 1000      | 2         |     .0275     |    .0345      |
| RB-TREE     | 10000     | 2         |    2.562      |   3.450       |
| RB-TREE     | 100000    | 2         |  271.579      | 361.507       |
| RB-TREE     | 1000000   | 2         |   INFINITY    |      N/A      |
| RB-TREE     | 10000000  | 2         |   INFINITY    |      N/A      |
| RB-TREE     | 10        | 4         |     .0000925  |    .00000848  |
| RB-TREE     | 100       | 4         |     .000472   |    .000649    |
| RB-TREE     | 1000      | 4         |     .0311     |    .0363      |
| RB-TREE     | 10000     | 4         |    2.668      |   3.491       |
| RB-TREE     | 100000    | 4         | 262.367       | 455.838       |
| RB-TREE     | 1000000   | 4         |   INFINITY    |     N/A       |
| RB-TREE     | 10000000  | 4         |   INFINITY    |     N/A       |
| RB-TREE     | 10        | 8         | 0             | 0             |
| RB-TREE     | 100       | 8         | 0             | 0             |
| RB-TREE     | 1000      | 8         | 0             | 0             |
| RB-TREE     | 10000     | 8         | 0             | 0             |
| RB-TREE     | 100000    | 8         | 0             | 0             |
| RB-TREE     | 1000000   | 8         | 0             | 0             |
| RB-TREE     | 10000000  | 8         | 0             | 0             |
| ----------- | --------- | --------- | ------------- | ------------- |
| TREAP       | 10        | 1         |     .0001235  |     .0000085  |
| TREAP       | 100       | 1         |     .007969   |     .0000793  |
| TREAP       | 1000      | 1         |     .007969   |     .000994   |
| TREAP       | 10000     | 1         |     .08282    |     .011505   |
| TREAP       | 100000    | 1         |     .86396    |     .153424   |
| TREAP       | 1000000   | 1         |    8.4435     |    1.55775    |
| TREAP       | 10000000  | 1         |   87.63       |   17.7718     |
| TREAP       | 10        | 2         |     .000583   |     .0000121c |
| TREAP       | 100       | 2         |     .000648   |     .0000915  |
| TREAP       | 1000      | 2         |     .00861    |     .00109    |
| TREAP       | 10000     | 2         |     .0729     |     .0143     |
| TREAP       | 100000    | 2         |     .745      |     .172      |
| TREAP       | 1000000   | 2         |    7.894      |    2.053      |
| TREAP       | 10000000  | 2         |   84.346      |   24.635      |
| TREAP       | 10        | 4         | 0             | 0             |
| TREAP       | 100       | 4         | 0             | 0             |
| TREAP       | 1000      | 4         | 0             | 0             |
| TREAP       | 10000     | 4         | 0             | 0             |
| TREAP       | 100000    | 4         | 0             | 0             |
| TREAP       | 1000000   | 4         | 0             | 0             |
| TREAP       | 10000000  | 4         | 0             | 0             |
| TREAP       | 10        | 8         | 0             | 0             |
| TREAP       | 100       | 8         | 0             | 0             |
| TREAP       | 1000      | 8         | 0             | 0             |
| TREAP       | 10000     | 8         | 0             | 0             |
| TREAP       | 100000    | 8         | 0             | 0             |
| TREAP       | 1000000   | 8         | 0             | 0             |
| TREAP       | 10000000  | 8         | 0             | 0             |
| ----------- | --------- | --------- | ------------- | ------------- |

**3) Using frequencies, compute the word count on at least three texts from Project Gutenberg using all five different backends.**

| Backend     | Text                  | File Size | Elasped Time  |
|-------------|-----------------------|-----------|---------------|
| UNSORTED    | Beowulf.txt           | 0         | 0             |
| SORTED      | Beowulf.txt           | 0         | 0             |
| BST         | Beowulf.txt           | 0         | 0             |
| RB-TREE     | Beowulf.txt           | 0         | 0             |
| TREAP       | Beowulf.txt           | 0         | 0             |
| ----------- | --------------------- | --------- | ------------- |
| UNSORTED    | TheJungleBook.txt     | 0         | 0             |
| SORTED      | TheJungleBook.txt     | 0         | 0             |
| BST         | TheJungleBook.txt     | 0         | 0             |
| RB-TREE     | TheJungleBook.txt     | 0         | 0             |
| TREAP       | TheJungleBook.txt     | 0         | 0             |
| ----------- | --------------------- | --------- | ------------- |
| UNSORTED    | PeterPan.txt          | 0         | 0             |
| SORTED      | PeterPan.txt          | 0         | 0             |
| BST         | PeterPan.txt          | 0         | 0             |
| RB-TREE     | PeterPan.txt          | 0         | 0             |
| TREAP       | PeterPan.txt          | 0         | 0             |
| ----------- | --------------------- | --------- | ------------- |

**4) After you have performed your benchmarks:**

 - **Discuss the relative performance of each map implementation and try to explain the differences.** 


 - **What effect did NITEMS, PADLENGTH, and File Size have on the performance of each backend in your experiments?**


 - **In your opinion, which map backend is the best? Justify your conclusion by examining the trade-offs for the chosen backend and based on your experimental results.** 


Individual Group Contributions
------------------------------

**Michael McRoskey** (mmcrosk1): Implemented frequencies.cpp, map_bench.cpp, rbtree.cpp, unsorted.cpp. Worked on sorted.cpp and README.md.

**Troy Prince** (tprince): Worked a little on the programs but did most of the README (including running all the backends for all the different values of n and p) 

**David Mellitt** (dmellitt): A lot of the code and quite a bit of the README.




