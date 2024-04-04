#include "Span.hpp"

Span::Span(unsigned int N) : N(N) {
}

Span::Span(const Span &other) {
    *this = other;
}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        N = other.N;
        numbers = other.numbers;
    }
    return *this;
}

Span::~Span() {
}

void Span::addNumber(int number)
{
    if (numbers.size() >= N)
        throw std::exception();
    numbers.push_back(number);
}

int Span::shortestSpan()
{
    int i, l;
    int j;
    int k = 0;

    j = INT_MAX;
    if (numbers.size() <= 1)
        throw std::exception();
    while (k < (int)numbers.size())
    {
        l = k + 1;
        while (l < (int)numbers.size()) {
            if (numbers[l] > numbers[k])
                i = numbers[l] - numbers[k];
            else if (numbers[l] < numbers[k])
                i = numbers[k] - numbers[l];
            else
            {
                std::cout << "Same number twice in the list, at positions " << k << " and " << l << std::endl;
                throw std::exception();
            }
            if (i < j)
                j = i;
            l++;
        }
        k++;
    }
    return (j);
}

int Span::longestSpan()
{
    int i = numbers[0];
    int j = numbers[0];
    int k = 1;

    if (numbers.size() <= 1)
        throw std::exception();
    while (k < (int)numbers.size())
    {
        if (i < numbers[k])
            i = numbers[k];
        if (j > numbers[k])
            j = numbers[k];
        k++;
    }
    if (i == j)
        throw std::exception();
    return (i - j);
}