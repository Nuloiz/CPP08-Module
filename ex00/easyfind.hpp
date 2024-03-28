#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
int easyfind(T &container, int value) {
    int index = std::find(container.begin(), container.end(), value) - container.begin();
    if (index > (int)container.size() - 1)
        throw std::exception();
    return index;
}

