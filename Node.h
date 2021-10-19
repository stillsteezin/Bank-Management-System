//
// Created by Anastasia  on 10/19/21.
//

#ifndef UNTITLED7_NODE_H
#define UNTITLED7_NODE_H

#pragma once
# include <iostream>
using namespace std;
# include <fstream>
# include <string>
# include "Node_1.h"
class Node
{
public:

    Node * next;
    Node_1 * pre;
    int data;
    Node();
    Node(int);
};


#endif //UNTITLED7_NODE_H
