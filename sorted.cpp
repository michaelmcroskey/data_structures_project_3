// sorted.cpp: Sorted Map
#include "map.h"
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>

// Type Definitions ------------------------------------------------------------
typedef std::vector<Entry>::iterator IT;

// Prototypes ------------------------------------------------------------------
const Entry     binary_search(const IT &start, const IT &end, const std::string &key);

// Methods ---------------------------------------------------------------------
void            SortedMap::insert(const std::string &key, const std::string &value) {
    
    for (auto& i : entries){
        if (i.first == key){
            i.second = value;
            return;
        }
        if (i.first > key ){
            Entry a(key, value);
            entries.push_back(a);
            std::sort(entries.begin(), entries.end());
            return;
        }
    }
    Entry a(key, value);
    entries.push_back(a);
}
const Entry     SortedMap::search(const std::string &key) {
    if(entries.size() > 0)   
        return binary_search(entries.begin(), entries.end(), key);

    return NONE;
    
}
void            SortedMap::dump(std::ostream &os, DumpFlag flag) {
    
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

// Internal Functions ----------------------------------------------------------
const Entry   binary_search(const IT &start, const IT &end, const std::string &target) {

    IT left = start;
    IT right = end;
    right--;
    
    while(left <= right){
        IT temp = left;
        std::advance(temp,std::distance(left,right)/2);
        Entry a = *(temp);
        if(a.first < target)
            left = ++temp;
        else if(a.first > target)
            right = --temp;
        else
            return a;
    }
    
    return NONE;
}


// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
