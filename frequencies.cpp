// freqencies.cpp

// Includes --------------------------------------------------------------

#include "map.h"

#include <cassert>
#include <iostream>
#include <string>

#include <strings.h>
#include <unistd.h>

// Functions --------------------------------------------------------------

void usage(int status) {
    std::cout << "usage: frequencies" << std::endl
              << "    -b BACKEND    Which Map backend (unsorted, sorted, bst, rbtree, treap)" << std::endl
              << "    -d DUMPFLAG   Which dump flag (key, value, key_value, value_key)" << std::endl;
    exit(status);
}

void parse_command_line_options(int argc, char *argv[], Map *&map, DumpFlag &flag) {
    int c;

    while ((c = getopt(argc, argv, "hb:d:")) != -1) {
        switch (c) {
            case 'b':
                if (strcasecmp(optarg, "unsorted") == 0) {
                        map = new UnsortedMap();
                } else if (strcasecmp(optarg, "sorted") == 0) {
                    map = new SortedMap();
                } else if (strcasecmp(optarg, "bst") == 0) {
                    map = new BSTMap();
                } else if (strcasecmp(optarg, "rbtree") == 0) {
                        map = new RBTreeMap();
                } else if (strcasecmp(optarg, "treap") == 0) {
                    map = new TreapMap();
                } else {
                        usage(1);
                }
                break;
            case 'd':
                if (strcasecmp(optarg, "key") == 0) {
                    flag = DUMP_KEY;
                } else if (strcasecmp(optarg, "value") == 0) {
                    flag = DUMP_VALUE;
                } else if (strcasecmp(optarg, "key_value") == 0) {
                    flag = DUMP_KEY_VALUE;
                } else if (strcasecmp(optarg, "value_key") == 0) {
                    flag = DUMP_VALUE_KEY;
                } else {
                    flag = DUMP_VALUE_KEY;
                    usage(1);
                }
                break;
            case 'h':
                usage(0);
                break;
            default:
                usage(1);
                break;
        }
    }

    if (map == nullptr) 
        	map = new UnsortedMap();
}

// Main execution --------------------------------------------------------------

int main(int argc, char *argv[]) {
    //inserts words into map that counts word appearences
    Map *map = nullptr;
    DumpFlag flag = DUMP_VALUE_KEY;;
    
    parse_command_line_options(argc, argv, map, flag);
    
    std::string word;
    
    while(std::cin >> word){
        auto result = map->search(word);
        if(result != NONE){
	    //increment count if word is already in map
            int count = std::stoi(result.second);
            count++;
            map->insert(word, std::to_string(count));
        } else {    
	    //add word and 1 to map if word was not already in map
            map->insert(word, "1");
        }
    }
    map->dump(std::cout, flag);
    
    return EXIT_SUCCESS;;
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
