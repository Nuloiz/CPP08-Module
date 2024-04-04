#pragma once

#include <iostream>
#include <climits>
#include <algorithm>
#include <exception>
#include <stdlib.h>
#include <stack>

template <class T>
    class MutantStack : public std::stack<T>
    {
    public:
        typedef std::stack<T> stack;
        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack() : stack(){}

        MutantStack(const MutantStack &other) : stack()
        {
            *this = other;
        }

        MutantStack &operator=(const MutantStack &other)
        {
            if (this != &other)
            {
                std::stack<T>::operator=(other);
            }
            return *this;
        }

        ~MutantStack(){}

        iterator begin()
        {
            return std::stack<T>::c.begin();
        }

        iterator end()
        {
            return std::stack<T>::c.end();
        }
};