#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

int main() {
    string command;
    vector<string> backendList = {"unsorted", "sorted","bst", "rbtree", "treap"};
    for(auto backend : backendList) {
	for(int n=10; n<=10000000; n=10*n) {
	    command = "map_bench -b " + backend + " -n " + to_string(n);
	    cout << command << endl;
	    system(command.c_str());
	    cout << endl;
	}

    }
}
