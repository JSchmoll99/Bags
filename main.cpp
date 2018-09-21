#include <iostream>
#include "Bag.h"
#include "ArrayBag.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    Bag<int> *bag = new ArrayBag{};
    return 0;
}