// map.h

#pragma once

// Includes --------------------------------------------------------------------

#include <iostream>
#include <string>

// Type definitions ------------------------------------------------------------

typedef enum {
    DUMP_KEY,
    DUMP_VALUE,
    DUMP_KEY_VALUE,
    DUMP_VALUE_KEY,
} DumpFlag;

typedef std::pair<std::string, std::string> Entry;

// Constants -------------------------------------------------------------------

extern const Entry NONE;

// Structures ------------------------------------------------------------------

struct Node {
    Entry entry;
    int     priority;
    Node    *left;
    Node    *right;
};

// Classes ---------------------------------------------------------------------

class Map {
public:
    virtual void            insert(const std::string &key, const std::string &value) {}
    virtual const Entry     search(const std::string &key) { return NONE; }
    virtual void            dump(std::ostream &os, DumpFlag flag) {}
    virtual                ~Map() {}
};

class UnsortedMap : public Map {
public:
            void            insert(const std::string &key, const std::string &value);
            const Entry     search(const std::string &key);
            void            dump(std::ostream &os, DumpFlag flag);
private:
};

class SortedMap : public Map {
public:
            void            insert(const std::string &key, const std::string &value);
            const Entry     search(const std::string &key);
            void            dump(std::ostream &os, DumpFlag flag);
private:
};

class BSTMap : public Map {
public:
            void            insert(const std::string &key, const std::string &value);
            const Entry     search(const std::string &key);
            void            dump(std::ostream &os, DumpFlag flag);
private:
};

class RBTreeMap : public Map {
public:
            void            insert(const std::string &key, const std::string &value);
            const Entry     search(const std::string &key);
            void            dump(std::ostream &os, DumpFlag flag);
private:
};

class TreapMap : public Map {
public:
            void            insert(const std::string &key, const std::string &value);
            const Entry     search(const std::string &key);
            void            dump(std::ostream &os, DumpFlag flag);
private:
};

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp: