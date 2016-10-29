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
| UNSORTED    | 10        | 8         |    .0000563   |    .0000102   |
| UNSORTED    | 100       | 8         |    .000311    |    .000392    |
| UNSORTED    | 1000      | 8         |    .0263      |    .0345      |
| UNSORTED    | 10000     | 8         |   2.261       |   3.2805      |
| UNSORTED    | 100000    | 8         | 214.553       | 309.796       |
| UNSORTED    | 1000000   | 8         |   INFINITY    |     N/A       |
| UNSORTED    | 10000000  | 8         |   INFINITY    |     N/A       |
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
| SORTED      | 10        | 8         |   .0000372    |   .0000128    |
| SORTED      | 100       | 8         |   .000572     |   .0000958    |
| SORTED      | 1000      | 8         |   .0488       |   .00126      |
| SORTED      | 10000     | 8         |  4.392        |   .0159             |
| SORTED      | 100000    | 8         |   INFINITY    |     N/A       |
| SORTED      | 1000000   | 8         |   INFINITY    |     N/A       |
| SORTED      | 10000000  | 8         |   INFINITY    |     N/A       |
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
| RB-TREE     | 10        | 1         |     .0000250  |    .0000108   |
| RB-TREE     | 100       | 1         |     .000127   |    .0000669   |
| RB-TREE     | 1000      | 1         |     .00158    |    .000845    |
| RB-TREE     | 10000     | 1         |     .0217     |    .0103      |
| RB-TREE     | 100000    | 1         |     .249      |    .121       |
| RB-TREE     | 1000000   | 1         |    2.935      |   1.388       |
| RB-TREE     | 10000000  | 1         |   33.942      | 15.6531       |
| RB-TREE     | 10        | 2         |     .0000305  |    .00000819  |
| RB-TREE     | 100       | 2         |     .000164   |    .0000673   |
| RB-TREE     | 1000      | 2         |     .00159    |    .000822    |
| RB-TREE     | 10000     | 2         |     .0217     |    .0103      |
| RB-TREE     | 100000    | 2         |     .249      |    .122       |
| RB-TREE     | 1000000   | 2         |    2.936      |   1.378       |
| RB-TREE     | 10000000  | 2         |   34.066      |  15.651       |
| RB-TREE     | 10        | 4         |     .0000302  |    .00000775  |
| RB-TREE     | 100       | 4         |     .000379   |    .000163    |
| RB-TREE     | 1000      | 4         |     .00192    |    .000872    |
| RB-TREE     | 10000     | 4         |     .0261     |    .0100      |
| RB-TREE     | 100000    | 4         |     .227      |    .120       |
| RB-TREE     | 1000000   | 4         |    3.051      |   1.378       |
| RB-TREE     | 10000000  | 4         |   33.532      |  15.620       |
| RB-TREE     | 10        | 8         |    .0000313   |    .00000821  |
| RB-TREE     | 100       | 8         |    .000146    |    .0000822   |
| RB-TREE     | 1000      | 8         |    .00190     |    .000910    |
| RB-TREE     | 10000     | 8         |    .0271      |    .0107      |
| RB-TREE     | 100000    | 8         |    .319       |    .123       |
| RB-TREE     | 1000000   | 8         |   3.818       |   1.380       |
| RB-TREE     | 10000000  | 8         |  44.257       |  15.357       |
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
| TREAP       | 10        | 4         |    0.000105   |    0.00000973 |
| TREAP       | 100       | 4         |    0.000764   |    0.0000956  |
| TREAP       | 1000      | 4         |    0.00718    |    0.00117    |
| TREAP       | 10000     | 4         |    0.0684     |    0.0142     |
| TREAP       | 100000    | 4         |    0.749      |    0.174      |
| TREAP       | 1000000   | 4         |    8.322      |    2.107      |
| TREAP       | 10000000  | 4         |   83.713      |   24.636      |
| TREAP       | 10        | 8         |    .000140    |    .0000151   |
| TREAP       | 100       | 8         |    .000638    |    .0000842   |
| TREAP       | 1000      | 8         |    .00634     |    .00106     |
| TREAP       | 10000     | 8         |    .0705      |    .0145      |
| TREAP       | 100000    | 8         |    .715       |    .181       |
| TREAP       | 1000000   | 8         |   7.511       |   2.204       |
| TREAP       | 10000000  | 8         |  76.807       |  25.250       |
| ----------- | --------- | --------- | ------------- | ------------- |

**3) Using frequencies, compute the word count on at least three texts from Project Gutenberg using all five different backends.**

| Backend     | Text                  | File Size | Elapsed Time  |
|-------------|-----------------------|-----------|---------------|
| UNSORTED    | Beowulf.txt           | 294K      |  7.796        |
| SORTED      | Beowulf.txt           | -         | 65.680        |
| BST         | Beowulf.txt           | -         |  0.193        |
| RB-TREE     | Beowulf.txt           | -         |  0.253        |
| TREAP       | Beowulf.txt           | -         |  0.227        |
| ----------- | --------------------- | --------- | ------------- |
| UNSORTED    | TheJungleBook.txt     | 297K      |  6.155        |
| SORTED      | TheJungleBook.txt     | -         | 46.603        |
| BST         | TheJungleBook.txt     | -         |  0.219        |
| RB-TREE     | TheJungleBook.txt     | -         |  0.262        |
| TREAP       | TheJungleBook.txt     | -         |  0.250        |
| ----------- | --------------------- | --------- | ------------- |
| UNSORTED    | PeterPan.txt          | 285K      |  5.456        |
| SORTED      | PeterPan.txt          | -         | 43.566        |
| BST         | PeterPan.txt          | -         |  0.202        |
| RB-TREE     | PeterPan.txt          | -         |  0.252        |
| TREAP       | PeterPan.txt          | -         |  0.238        |
| ----------- | --------------------- | --------- | ------------- |

**4) After you have performed your benchmarks:**

 - **Discuss the relative performance of each map implementation and try to explain the differences.** 

UNSORTED: Fairly slow, benchmark for -n 10000 -p 1 took a few seconds for both operations. Insertion and search
          may look through every element, O(n).
          
SORTED:   Slowest. For benchmark -n 10000 -p 1 took less than a tenth of a second to search, but over
          45 seconds to insert. Binary search is fast, but sorting takes too long.
          
BST:      Pretty fast. Less than 0.02 sec each for bench -n 10000 -p 1. Vulnerable to
          padding.

RBTREE:   Fastest in benchmarks, best backend as n increases due to self-balancing. Slower than treap
          and bst for books. Books may be random enough that self balancing is not worth it.

TREAP:    Slower than BST without padding, much faster with padding.

 - **What effect did NITEMS, PADLENGTH, and File Size have on the performance of each backend in your experiments?**

NITEMS had the expected effect when looking at each backend's complexity.

Padding hurt BST since padded numbers group to one side of non-padded numbers, distancing the root from
many numbers. For the other backends, padding seemed to help up until a certain point (best around 4).

Smaller file size seemed to speed up every backend but BST. Peter Pan was smallest and had the shortest time
for these. However, Beowulf was not the largest file but was slowest on every backend but BST. This could
be due to a greater range of vocabulary, which would benefit BST and hurt trees that self balance.

 - **In your opinion, which map backend is the best? Justify your conclusion by examining the trade-offs for the chosen backend and based on your experimental results.** 

rbtree. It was very slightly slower than others with the books due to self balancing, but dominated the benchmarks
because of its better worst-case complexity.


Individual Group Contributions
------------------------------

**Michael McRoskey** (mmcrosk1): Implemented frequencies.cpp, map_bench.cpp, rbtree.cpp, unsorted.cpp. Worked on sorted.cpp and README.md.

**Troy Prince** (tprince): Worked on frequencies, sorted, did most of the README (including running all the backends for all the different values of n and p) 

**David Mellitt** (dmellitt): Worked on sorted, bst, treap, README.
