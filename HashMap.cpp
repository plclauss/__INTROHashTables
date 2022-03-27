//
// Created by plcla on 3/26/2022.
//

#include <iostream>
#include <unordered_map>
#include "HashMap.h"

int firstRecurringNumber(int* arr, int arrSize) {
    // key = int in arr
    // map = index of int in arr
    std::unordered_map<int, int> um = {};

    for (int i = 0; i < arrSize; i++) {
        if (um.find(arr[i]) != um.end())
            return arr[i];
        um.insert(std::make_pair(arr[i], i));
    }

    return  -1;
}
