//
// Created by Anastasia  on 10/19/21.
//
#pragma once
# include "Node.h"
# include "Node_1.h"

class Hashtable
{
public:
    Node * start;
    Hashtable();
    void startHash();
    void loadhashtable();
    void add(int,int);
    bool match(int,int);
    void display();
    void displayPasswords();
    void delete_password(int);
};

#ifndef UNTITLED7_HASHTABLE_H
#define UNTITLED7_HASHTABLE_H

#endif //UNTITLED7_HASHTABLE_H
