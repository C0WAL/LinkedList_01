#include "LinkedList_01_lib.h"

void LinkedList::add(int a)
{
    Node *new_node;
    new_node = new Node(a);
    if(start == NULL)
    {
        start = new_node;
        last = new_node;
    }
    else
    {
        last->next = new_node;
        last = new_node;
    }
    counter++;
}

LinkedList::~LinkedList()
{
    Node* run = start;
    Node *killer;
    while(run->next!=NULL)
    {
        killer = run;
        run = run->next;
        delete killer;
        counter--;
    }
}

LinkedList::LinkedList()
{
    counter = 0;
    start = NULL;
    last = NULL;
}

void LinkedList::print()
{
    Node* run = start;
    while(run!=NULL)
    {
        cout << run->value << " ";
        run = run->next;
    }
    cout << endl;
}

void LinkedList::deleteFirst()
{
    Node *killer;
    if(start == NULL) throw out_of_range("Lista jest pusta");

    killer = start;
    start = start->next;
    delete killer;
}

void LinkedList::deleteLast()
{
    Node *killer;
    Node *run = start;
    Node *arun = NULL;
    if(start == NULL) throw out_of_range("Lista jest pusta");
    while(run->next!=NULL)
    {

        arun = run;
        run = run->next;
    }
    last = arun;
    arun->next = NULL;
    killer = run;
    delete killer;


}

void LinkedList::deleteSome()
{
    Node *killer;
    Node *run = start;
    Node *arun = NULL;
    if(start == NULL) throw out_of_range("Lista jest pusta");
    while(run!=NULL)
    {
        if(run->value > 9)
        {
            if(run==start)
            {
                killer = run;
                start = run->next;
                run= run->next;
                delete killer;
            }
            else if(run == last)
            {
                last = arun;
                arun->next = NULL;
                killer = run;
                run = NULL;
                delete killer;
            }
            else
            {
                arun->next = run->next;
                killer = run;
                run = run->next;
                delete killer;
            }
        }
        else
        {
            arun = run;
            run = run->next;
        }

    }
}

void LinkedList::Sequence3()
{
    Node* before_run = start;
    Node* run = before_run->next;
    Node* after_run = run->next;
    Node* killer;

    while(after_run!=NULL)
    {
        if(before_run->value+after_run->value>run->value)
        {
            before_run->next = after_run;
            killer = run;
            run->next = NULL;
            delete killer;
        }
        if(after_run->next!=NULL && after_run->next->next !=NULL && after_run->next->next->next!=NULL)
        {
        before_run = after_run->next;
        run = before_run->next;
        after_run = run->next;
        }
        else{
            return;
        }



    }
}

void LinkedList::Sequence4()
{
    Node* before_first = NULL;
    Node* first_node = start;
    Node* second_node = first_node->next;
    Node* third_node = second_node->next;
    Node* fourth_node = third_node->next;
    Node* killer;

    while(fourth_node!=NULL)
    {
        if(first_node->value+third_node->value>second_node->value+fourth_node->value)
        {
            if(first_node==start)
            {
                killer = first_node;
                start = second_node;
                first_node->next = NULL;
                delete killer;
            }
            else
            {
                before_first->next = second_node;
                killer = first_node;
                first_node->next = NULL;
                delete killer;
            }
            if(fourth_node==last)
            {
                last = third_node;
                third_node->next = NULL;
                killer = fourth_node;
                delete killer;
            }
            else
            {
                third_node->next = fourth_node->next;
                before_first = third_node;
                killer = fourth_node;
                fourth_node->next = NULL;
                delete killer;
            }
        }
        else
        {
            before_first=fourth_node;
        }
        if(before_first->next!=NULL &&
           before_first->next->next!=NULL &&
           before_first->next->next->next!=NULL &&
           before_first->next->next->next->next!=NULL)
        {
        first_node = before_first->next;
        second_node = first_node->next;
        third_node = second_node->next;
        fourth_node = third_node->next;
        }
        else{
            return;
        }
    }
}



