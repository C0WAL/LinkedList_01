#ifndef LINKEDLIST_01_LIB_H_INCLUDED
#define LINKEDLIST_01_LIB_H_INCLUDED

#include <iostream>
using namespace std;

struct LinkedList
{
private:
    struct Node
    {
        int value;
        Node* next;
        Node(int v,Node* n = NULL)
        {
            this->value = v;
            this->next = n;
        }
    };
        Node* start;
        Node* last;
        int counter;
public:
    void print();
    void deleteFirst();
    void deleteSome();
    void deleteLast();
    void Sequence3();
    void Sequence4();
    LinkedList();
    ~LinkedList();
    void add(int a);

};


#endif // LINKEDLIST_01_LIB_H_INCLUDED
