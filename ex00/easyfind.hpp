#pragma once

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <exception>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T &container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
    return it;
}

