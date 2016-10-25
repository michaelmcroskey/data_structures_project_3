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

*1) What is complexity of each of the map backends (ie. Unsorted, Sorted, BST, RBTree, Treap)? For each implementation, briefly explain the best, average, and worst case complexities of inserting and searching using the particular method in terms of Big-O notation.*

*UNSORTED*

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |

*SORTED*

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |

*BST*

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |

*RB-TREE*

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |

*TREAP*

| Backend     | BEST   | AVG    | WORST  |
|-------------|--------|--------|--------|
| INSERT      | O(   ) | O(   ) | O(   ) |
| SEARCH      | O(   ) | O(   ) | O(   ) |


*2) What is complexity of each of the map backends (ie. Unsorted, Sorted, BST, RBTree, Treap)? For each implementation, briefly explain the best, average, and worst case complexities of inserting and searching using the particular method in terms of Big-O notation.*

| Backend     | NITEMS    | PADLENGTH | Insert Time   | Search Time   |
|-------------|-----------|-----------|---------------|---------------|
| UNSORTED    | 10        | 1         | 0             | 0             |
| UNSORTED    | 100       | 1         | 0             | 0             |
| UNSORTED    | 1000      | 1         | 0             | 0             |
| UNSORTED    | 10000     | 1         | 0             | 0             |
| UNSORTED    | 100000    | 1         | 0             | 0             |
| UNSORTED    | 1000000   | 1         | 0             | 0             |
| UNSORTED    | 10000000  | 1         | 0             | 0             |
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
| SORTED      | 10        | 1         | 0             | 0             |
| SORTED      | 100       | 1         | 0             | 0             |
| SORTED      | 1000      | 1         | 0             | 0             |
| SORTED      | 10000     | 1         | 0             | 0             |
| SORTED      | 100000    | 1         | 0             | 0             |
| SORTED      | 1000000   | 1         | 0             | 0             |
| SORTED      | 10000000  | 1         | 0             | 0             |
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
| BST         | 10        | 1         | 0             | 0             |
| BST         | 100       | 1         | 0             | 0             |
| BST         | 1000      | 1         | 0             | 0             |
| BST         | 10000     | 1         | 0             | 0             |
| BST         | 100000    | 1         | 0             | 0             |
| BST         | 1000000   | 1         | 0             | 0             |
| BST         | 10000000  | 1         | 0             | 0             |
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
| RB-TREE     | 10        | 1         | 0             | 0             |
| RB-TREE     | 100       | 1         | 0             | 0             |
| RB-TREE     | 1000      | 1         | 0             | 0             |
| RB-TREE     | 10000     | 1         | 0             | 0             |
| RB-TREE     | 100000    | 1         | 0             | 0             |
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

*3) Using frequencies, compute the word count on at least three texts from Project Gutenberg using all five different backends.*

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

*4) After you have performed your benchmarks:*

 - *Discuss the relative performance of each map implementation and try to explain the differences.* 


 - *What effect did NITEMS, PADLENGTH, and File Size have on the performance of each backend in your experiments?*


 - *In your opinion, which map backend is the best? Justify your conclusion by examining the trade-offs for the chosen backend and based on your experimental results.* 


Individual Group Contributions
------------------------------

*Michael McRoskey* (mmcrosk1): 

*Troy Prince* (tprince): 

*David Mellitt* (dmellitt):




