#include "LinkedList_01_lib.h"

int main()
{
    LinkedList A;
    A.add(11);
    A.add(10);
    A.add(15);
    A.add(7);
    A.add(15);
    A.add(3);
    A.add(9);
    A.add(1);
    A.add(0);
    A.print();
    cout << "---------------------" << endl ;
    A.Sequence3();
    A.print();
    // IN: 11,15,11,9,10,3,7
    //OUT: 11,11,9,3,7
    LinkedList B;
    B.add(11);
    B.add(11);
    B.add(9);
    B.add(10);
    B.add(3);
    B.add(5);
    B.add(9);
    B.add(1);
    B.add(5);
    B.print();
    cout << "---------------------" << endl;
    B.Sequence4();
    B.print();
    // IN: 11,11,9,10,3,7,15,8,2,5,17,8,1,7
    //OUT: 11,11,9,10,7,15,5,17,1,7

}
