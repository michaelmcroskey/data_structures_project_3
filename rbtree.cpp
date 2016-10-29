// rbtree.cpp: RBTree Map

#include <map>
#include "map.h"

#include <algorithm>

// Methods --------------------------------------------------------------------

void            RBTreeMap::insert(const std::string &key, const std::string &value) {
    Entry a(key, value);
    auto in = entries.insert(a);
    (*in.first).second = value;
}

const Entry     RBTreeMap::search(const std::string &key) {
    auto it = entries.find(key);
    if(it != entries.end())
        return *it;
            
    return NONE;
}

void            RBTreeMap::dump(std::ostream &os, DumpFlag flag) {
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
