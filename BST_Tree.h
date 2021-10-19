//
// Created by Anastasia  on 10/19/21.
//

#ifndef UNTITLED7_BST_TREE_H
#define UNTITLED7_BST_TREE_H


#pragma once
# include "BST_Node.h"
# include "Hashtable.h"
# include <stdio.h>
class BST_Tree
{
    vector <int> v;

public:
    BST_Tree();
    Hashtable h;
    BST_Node *Root;
    void add_Account(string, string, int, int, int);
    BST_Node* delete_Account(BST_Node *, int);
    void withdraw(int,int);
    void deposit(int,int);
    void editAccount_byAdmin();
    void transfer(int,int,int);
    void transaction_history();
    void findMax(BST_Node*);
    void load_Server();
    void update_server(BST_Node *);
    BST_Node* search(BST_Node*,int);
    void printoinfo(BST_Node*);
};


#endif //UNTITLED7_BST_TREE_H
