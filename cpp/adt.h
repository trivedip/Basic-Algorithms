//
// Created by pgt6 on 1/10/2020.
//

#ifndef CPP_ADT_H
#define CPP_ADT_H
#include <iostream>
#include <string>
template <class T>
class LinkedList {
private:

    struct Node {
        T value;
        Node* next;
        Node(T val) : value(val), next(NULL){};
    };

public:
    Node* head=NULL;
    Node* _next=NULL;
    LinkedList(T val){
        Node* head_ptr = new Node(val);
        if(head==NULL){head = head_ptr;}
    };
//    append takes O(n) time.
    void append(T val);
//    appendFront takes O(1) time.
    void appendFront(T val);
    void print();
    T next();
    T operator+(Node) const;
};
#include "adt.cpp"

template <class Tr>
class Tree{
private:
    typedef struct Node{
        Tr value;
        Node* left;
        Node* right;
        Node(Tr val):value(val), left(NULL), right(NULL){};
    }Node,*nodeptr;
    void assignLeft(Tr val);
    void assignRight(Tr val);
public:
//    Node* head= NULL;
    Tree(Tr val){
//        if(!head){
           nodeptr head = new Node(val);
//        }
    }
    void append(Tr val);

};

#endif //CPP_ADT_H
