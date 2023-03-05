#include "node.h"
#include <iostream>
#include "spisok.h"

int main()
{
    Spisok spisokOne;
    Spisok* spisokTwo = new Spisok();

   
    spisokOne.BackAdd(4);
    spisokOne.BackAdd(5);
    spisokOne.BackAdd(6);
    spisokOne.BackAdd(1);
    spisokOne.BackAdd(2);
    spisokOne.BackAdd(3);
    


    spisokTwo->BackAdd(8);
    spisokTwo->BackAdd(8);
    spisokTwo->BackAdd(8);

    std::cout << "SpisokOne: ";
    spisokOne.printAll();
    std::cout << "\n";

    std::cout << "SpisokTwo: ";
    spisokTwo->printAll();
    std::cout << "\n";
    
    std::cout << "SpisokOne + SpisokTwo in the center: ";
    spisokOne.InsertListInCenter(spisokTwo);
    spisokOne.printAll();
    std::cout << "\n";

    spisokOne.minNodeToHead();

    spisokOne.printAll();

    return 0;
}
 