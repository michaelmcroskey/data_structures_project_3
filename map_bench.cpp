// map_bench.cpp

#include "map.h"
#include <chrono>
#include <cassert>
#include <iostream>
#include <string>

#include <strings.h>
#include <unistd.h>

// Utility functions -----------------------------------------------------------

void usage(int status) {
    std::cout << "usage: map_bench" << std::endl
              << "    -b BACKEND    Which Map backend (unsorted, sorted, bst, rbtree, treap)" << std::endl
              << "    -n NITEMS     Number of items to benchmark" << std::endl
              << "    -p PADLENGTH  Amount to pad the keys with leading 0's" << std::endl;

    exit(status);
}

void parse_command_line_options(int argc, char *argv[], Map *&map, int *NITEMS, int *PADLENGTH) {
    int c;

    while ((c = getopt(argc, argv, "hb:n:p:")) != -1) {
        switch (c) {
            case 'b':
                if (strcasecmp(optarg, "unsorted") == 0) {
                    map = new UnsortedMap();
//                } else if (strcasecmp(optarg, "sorted") == 0) {
//                    map = new SortedMap();
//                } else if (strcasecmp(optarg, "bst") == 0) {
//                    map = new BSTMap();
                } else if (strcasecmp(optarg, "rbtree") == 0) {
                    map = new RBTreeMap();
//                } else if (strcasecmp(optarg, "treap") == 0) {
//                    map = new TreapMap();
                } else {
                    usage(1);
                }
                break;
            case 'n':
                *NITEMS = std::stoi(optarg);
                break;
            case 'p':
                *PADLENGTH = std::stoi(optarg);
                break;
            case 'h':
                usage(0);
                break;
            default:
                *NITEMS = 1;
                *PADLENGTH = 1;
                usage(1);
                break;
        }
    }

    if (map == nullptr) {
        	map = new UnsortedMap();
        *NITEMS = 1;
        *PADLENGTH = 1;
    }
}

void padTo(std::string &str, const size_t num, const char paddingChar = ' '){
    if(num > str.size())
    	str.insert(0, num - str.size(), paddingChar);
}


// Main execution --------------------------------------------------------------

int main(int argc, char *argv[]) {
    Map *map = nullptr;
    int NITEMS = 1, PADLENGTH = 1;
    
    parse_command_line_options(argc, argv, map, &NITEMS, &PADLENGTH);
    
    // TIMED INSERT --------------------------------------------
    auto start = std::chrono::high_resolution_clock::now();
    // Insert 1 - N
    for (int i=0; i<NITEMS; i++) {
        std::string s = std::to_string(i);
        padTo(s, PADLENGTH);
        	map->insert(s, s);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end-start;
    std::cout << "Insert: "<< diff.count() << " s" << std::endl;
    
    // TIMED SEARCH --------------------------------------------
    start = std::chrono::high_resolution_clock::now();
    // Search 1 - N
    for (int i=0; i<NITEMS; i++) {
        std::string s = std::to_string(i);
        padTo(s, PADLENGTH);
        	assert(map->search(s) != NONE);
    }
    end = std::chrono::high_resolution_clock::now();
    diff = end-start;
    std::cout << "Search: "<< diff.count() << " s" << std::endl;
    
    return EXIT_SUCCESS;
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
