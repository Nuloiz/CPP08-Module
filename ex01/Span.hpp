#pragma once

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <exception>
#include <stdlib.h>

class Span
{
public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int number);
    int shortestSpan();
    int longestSpan();

private:
    unsigned int N;
    std::vector<int> numbers;
};