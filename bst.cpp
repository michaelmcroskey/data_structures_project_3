// bst.cpp: BST Map

#include "map.h"
#include <iostream>
#include <stdexcept>

// Prototypes ------------------------------------------------------------------

Node *insert_r(Node *node, const std::string &key, const std::string &value);
Node *search_r(Node *node, const std::string &key);
void    dump_r(Node *node, std::ostream &os, DumpFlag flag);

// Methods ---------------------------------------------------------------------

void            BSTMap::insert(const std::string &key, const std::string &value) {
    root = insert_r(root, key, value);
}

const Entry     BSTMap::search(const std::string &key) {

    Node *result = search_r(root, key);
    if(result)
        return result->entry;

    return NONE;
}

void            BSTMap::dump(std::ostream &os, DumpFlag flag) {
    dump_r(root, os, flag );
}

// Internal Functions ----------------------------------------------------------

Node *insert_r(Node *node, const std::string &key, const std::string &value) {
    if(!node)
        node = new Node(key, value, 0);
    else if( key <= node->entry.first )
        node->left = insert_r(node->left, key, value);
    else
        node->right = insert_r(node->right, key, value);

    return node;
}

Node *search_r(Node *node, const std::string &key) {
    if(!node)
        return NULL;
    else if(key < node->entry.first )
        return search_r( node->left, key );
    else if(key > node->entry.first )
        return search_r( node->right, key );

    return node;
}

void dump_r(Node *node, std::ostream &os, DumpFlag flag) {
    if(!node)
        return;

    dump_r(node->left, os, flag);

    Entry i = node->entry;

    if (flag == DUMP_KEY){
        os << i.first << std::endl;
    } else if (flag == DUMP_VALUE){
        os << i.second << std::endl;
    } else if (flag == DUMP_KEY_VALUE){
        os << i.first << "\t" << i.second << std::endl;
    } else if (flag == DUMP_VALUE_KEY){
        os << i.second << "\t" << i.first << std::endl;
    }

    dump_r(node->right, os, flag);
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
