#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    for (int i = 0; i < 10; i++)
        vec.push_back(i);
    try
    {
        std::cout << easyfind(vec, 5) << std::endl;
        std::cout << easyfind(vec, 25) << std::endl;
    } catch (std::exception &e) {
        std::cout << "Element not found" << std::endl;
    }
    return 0;
}