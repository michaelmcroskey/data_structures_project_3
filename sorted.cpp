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
    
    
    
    Entry a(key, value);
    IT it = entries.begin();
    
    if (entries.size()==0){
        entries.insert(it, a);
    } else {
        while(it->first < key){
            it++;
            std::cout << "in here"<< std::endl;
        }
        entries.insert(it, a);
    }
}

const Entry     SortedMap::search(const std::string &key) {
    
    return binary_search(entries.begin(), entries.end(), key);
    
}

void            SortedMap::dump(std::ostream &os, DumpFlag flag) {
    
    for (auto i : entries){
        if (flag == DUMP_KEY){
            os << i.first << std::endl;
        } else if (flag == DUMP_VALUE){
            os << i.second << std::endl;
        } else if (flag == DUMP_KEY_VALUE){
            os << i.first << "/t" << i.second << std::endl;
        } else if (flag == DUMP_VALUE_KEY){
            os << i.second << "/t" << i.first << std::endl;
        }
    }
}

// Internal Functions ----------------------------------------------------------

const Entry   binary_search(const IT &start, const IT &end, const std::string &target) {
   
//    auto lower = std::lower_bound(start, end, target);
//    bool cmp = target < lower->first;
//    
//    if (!(lower == end) && !cmp){
//        Entry a(lower->first, lower->second);
//        return a;
//    } else {
//        return NONE;
//    }
    
    return NONE;
}

void padTo(std::string &str, const size_t num, const char paddingChar = ' ')
{
    if(num > str.size())
    	str.insert(0, num - str.size(), paddingChar);
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp: