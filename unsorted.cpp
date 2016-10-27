// unsorted.cpp: Unsorted Map

#include "map.h"
#include <vector>

// Methods --------------------------------------------------------------------

void            UnsortedMap::insert(const std::string &key, const std::string &value) {
    for (auto& i : entries){
        if (i.first == key){
            i.second = value;
            return;
        }
    }
    Entry a(key, value);
    entries.push_back(a);
}

const Entry     UnsortedMap::search(const std::string &key) {
    for(auto i : entries)
        if (i.first == key)
            return i;
            
    return NONE;
}

void            UnsortedMap::dump(std::ostream &os, DumpFlag flag) {
    
    for (auto i : entries){
        if (flag == DUMP_KEY){
            os << i.first << std::endl;
        } else if (flag == DUMP_VALUE){
            os << i.second << std::endl;
        } else if (flag == DUMP_KEY_VALUE){
            os << i.first << "\t" << i.second << std::endl;
        } else if (flag == DUMP_VALUE_KEY){
            os << i.second << "\t" << i.first << std::endl;
        }
    }
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:

