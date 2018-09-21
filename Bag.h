/**
 * CSC 232 Data Structures
 * Missouri State University - Fall 2018
 * 
 * TODO: General task
 *
 * @file Bag.h
 * @author Jacob Schmoll <Schmoll99@live.missouristate.edu>
 *@brief TODO: Fill me in
*/

#ifndef BAGPROJECT_BAG_H
#define BAGPROJECT_BAG_H

#include <cstddef>
#include <iostream>

using bag_count_t = size_t;

template<typename Object>
class Bag {
public:
    virtual bag_count_t getCurrentSize() = 0;

    virtual ~Bag() {
        std::cout << "It was nice knowing you. . ." << std::endl;
    }

};

#endif //BAGPROJECT_BAG_H
