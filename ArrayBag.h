/**
 * CSC 232 Data Structures
 * Missouri State University - Fall 2018
 * 
 * TODO: General task
 *
 * @file ArrayBag.h
 * @author Jacob Schmoll <Schmoll99@live.missouristate.edu>
 *@brief TODO: Fill me in
*/

#ifndef BAGPROJECT_ARRAYBAG_H
#define BAGPROJECT_ARRAYBAG_H

#include "Bag.h"


template<typename Object>
class ArrayBag : public Bag<Object> {
public:
    bag_count_t getCurrentSize() = 0;

public
};


#endif //BAGPROJECT_ARRAYBAG_H
