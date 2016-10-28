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
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |

**SORTED**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |

**BST**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |

**RB-TREE**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |

**TREAP**

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |


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
| UNSORTED    | 10        | 2         | 0             | 0             |
| UNSORTED    | 100       | 2         | 0             | 0             |
| UNSORTED    | 1000      | 2         | 0             | 0             |
| UNSORTED    | 10000     | 2         | 0             | 0             |
| UNSORTED    | 100000    | 2         | 0             | 0             |
| UNSORTED    | 1000000   | 2         | 0             | 0             |
| UNSORTED    | 10000000  | 2         | 0             | 0             |
| UNSORTED    | 10        | 4         | 0             | 0             |
| UNSORTED    | 100       | 4         | 0             | 0             |
| UNSORTED    | 1000      | 4         | 0             | 0             |
| UNSORTED    | 10000     | 4         | 0             | 0             |
| UNSORTED    | 100000    | 4         | 0             | 0             |
| UNSORTED    | 1000000   | 4         | 0             | 0             |
| UNSORTED    | 10000000  | 4         | 0             | 0             |
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
| SORTED      | 100000    | 1         |   INFINITY    | 0             |
| SORTED      | 1000000   | 1         |   INFINITY    | 0             |
| SORTED      | 10000000  | 1         |   INFINITY    | 0             |
| SORTED      | 10        | 2         | 0             | 0             |
| SORTED      | 100       | 2         | 0             | 0             |
| SORTED      | 1000      | 2         | 0             | 0             |
| SORTED      | 10000     | 2         | 0             | 0             |
| SORTED      | 100000    | 2         | 0             | 0             |
| SORTED      | 1000000   | 2         | 0             | 0             |
| SORTED      | 10000000  | 2         | 0             | 0             |
| SORTED      | 10        | 4         | 0             | 0             |
| SORTED      | 100       | 4         | 0             | 0             |
| SORTED      | 1000      | 4         | 0             | 0             |
| SORTED      | 10000     | 4         | 0             | 0             |
| SORTED      | 100000    | 4         | 0             | 0             |
| SORTED      | 1000000   | 4         | 0             | 0             |
| SORTED      | 10000000  | 4         | 0             | 0             |
| SORTED      | 10        | 8         | 0             | 0             |
| SORTED      | 100       | 8         | 0             | 0             |
| SORTED      | 1000      | 8         | 0             | 0             |
| SORTED      | 10000     | 8         | 0             | 0             |
| SORTED      | 100000    | 8         | 0             | 0             |
| SORTED      | 1000000   | 8         | 0             | 0             |
| SORTED      | 10000000  | 8         | 0             | 0             |
| ----------- | --------- | --------- | ------------- | ------------- |
| BST         | 10        | 1         |   .00002723   |   .00000898   |
| BST         | 100       | 1         |   .0001158    |   .0000853    |
| BST         | 1000      | 1         |   .001255     |   .001199     |
| BST         | 10000     | 1         |   .015535     |   .015627     |
| BST         | 100000    | 1         |   .19758      |   .194388     |
| BST         | 1000000   | 1         |  2.30758      |  2.37186      |
| BST         | 10000000  | 1         | 25.2057       | 23.2448       |
| BST         | 10        | 2         | 0             | 0             |
| BST         | 100       | 2         | 0             | 0             |
| BST         | 1000      | 2         | 0             | 0             |
| BST         | 10000     | 2         | 0             | 0             |
| BST         | 100000    | 2         | 0             | 0             |
| BST         | 1000000   | 2         | 0             | 0             |
| BST         | 10000000  | 2         | 0             | 0             |
| BST         | 10        | 4         | 0             | 0             |
| BST         | 100       | 4         | 0             | 0             |
| BST         | 1000      | 4         | 0             | 0             |
| BST         | 10000     | 4         | 0             | 0             |
| BST         | 100000    | 4         | 0             | 0             |
| BST         | 1000000   | 4         | 0             | 0             |
| BST         | 10000000  | 4         | 0             | 0             |
| BST         | 10        | 8         | 0             | 0             |
| BST         | 100       | 8         | 0             | 0             |
| BST         | 1000      | 8         | 0             | 0             |
| BST         | 10000     | 8         | 0             | 0             |
| BST         | 100000    | 8         | 0             | 0             |
| BST         | 1000000   | 8         | 0             | 0             |
| BST         | 10000000  | 8         | 0             | 0             |
| ----------- | --------- | --------- | ------------- | ------------- |
| RB-TREE     | 10        | 1         |     .0000419  |    .00002055  |
| RB-TREE     | 100       | 1         |     .0004916  |    .0006208   |
| RB-TREE     | 1000      | 1         |     .03857    |    .05547     |
| RB-TREE     | 10000     | 1         |    4.14356    |   5.78877     |
| RB-TREE     | 100000    | 1         | 481.177       | 0             |
| RB-TREE     | 1000000   | 1         | 0             | 0             |
| RB-TREE     | 10000000  | 1         | 0             | 0             |
| RB-TREE     | 10        | 2         | 0             | 0             |
| RB-TREE     | 100       | 2         | 0             | 0             |
| RB-TREE     | 1000      | 2         | 0             | 0             |
| RB-TREE     | 10000     | 2         | 0             | 0             |
| RB-TREE     | 100000    | 2         | 0             | 0             |
| RB-TREE     | 1000000   | 2         | 0             | 0             |
| RB-TREE     | 10000000  | 2         | 0             | 0             |
| RB-TREE     | 10        | 4         | 0             | 0             |
| RB-TREE     | 100       | 4         | 0             | 0             |
| RB-TREE     | 1000      | 4         | 0             | 0             |
| RB-TREE     | 10000     | 4         | 0             | 0             |
| RB-TREE     | 100000    | 4         | 0             | 0             |
| RB-TREE     | 1000000   | 4         | 0             | 0             |
| RB-TREE     | 10000000  | 4         | 0             | 0             |
| RB-TREE     | 10        | 8         | 0             | 0             |
| RB-TREE     | 100       | 8         | 0             | 0             |
| RB-TREE     | 1000      | 8         | 0             | 0             |
| RB-TREE     | 10000     | 8         | 0             | 0             |
| RB-TREE     | 100000    | 8         | 0             | 0             |
| RB-TREE     | 1000000   | 8         | 0             | 0             |
| RB-TREE     | 10000000  | 8         | 0             | 0             |
| ----------- | --------- | --------- | ------------- | ------------- |
| TREAP       | 10        | 1         | 0             | 0             |
| TREAP       | 100       | 1         | 0             | 0             |
| TREAP       | 1000      | 1         | 0             | 0             |
| TREAP       | 10000     | 1         | 0             | 0             |
| TREAP       | 100000    | 1         | 0             | 0             |
| TREAP       | 1000000   | 1         | 0             | 0             |
| TREAP       | 10000000  | 1         | 0             | 0             |
| TREAP       | 10        | 2         | 0             | 0             |
| TREAP       | 100       | 2         | 0             | 0             |
| TREAP       | 1000      | 2         | 0             | 0             |
| TREAP       | 10000     | 2         | 0             | 0             |
| TREAP       | 100000    | 2         | 0             | 0             |
| TREAP       | 1000000   | 2         | 0             | 0             |
| TREAP       | 10000000  | 2         | 0             | 0             |
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

**Troy Prince** (tprince): 

**David Mellitt** (dmellitt):




