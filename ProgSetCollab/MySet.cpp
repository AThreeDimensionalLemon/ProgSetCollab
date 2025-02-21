#include "MySet.h"
#include <iostream>
#include <limits>

bool mySet::isEmpty() {
    return array.empty();
}

bool mySet::isFull() {
    return lastIndex == array.size() - 1;
}

void mySet::insert(int inX) {

    if (not isFull()) {
        result[lastIndex + 1] = inX;
        lastIndex++;
    }
}

void mySet::Delete(int inX) {

    if (not isEmpty()) {
        array[lastIndex] = std::numeric_limits<int>::max();
        lastIndex--;
    }
}

std::array<int, 20> mySet::getArray() {
    return array;
}

void mySet::printAll() {

    for (auto element : array)
        std::cout << element << std::endl;
}

mySet mySet::Union(mySet inS) {
    int temp = lastIndex;
    result = array;
    
    for (auto element : inS.getArray())
        mySet::insert(element);

    lastIndex = temp;
    return result;
}

mySet mySet::Intersection(mySet inS) {
    int temp = lastIndex;
    std::array<int, 20> inSArray{ inS.getArray() };
    result = { 0 };
    lastIndex = 0;

    for (int i = 0; i < array.size(); i++) {

        for (int j = 0; j < inSArray.size(); j++) {

            if (array[i] == inSArray[j] and array[i] != std::numeric_limits<int>::max())
                mySet::insert(array[i]);
        }
    }

    lastIndex = temp;
    return result;
}

mySet::mySet(std::array<int, 20> inArray) {
    array = inArray;
    result = { 0 };

    while (lastIndex < inArray.size() and array[lastIndex] != std::numeric_limits<int>::max())
        lastIndex++;

    if (lastIndex != 0)
        lastIndex--;
}