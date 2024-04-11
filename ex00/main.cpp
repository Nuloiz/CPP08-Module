#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    for (int i = 20; i < 30; i++)
        vec.push_back(i);
    try
    {
        std::cout << *easyfind(vec, 25) << std::endl;
        std::cout << *easyfind(vec, 5) << std::endl;
    } catch (std::exception &e) {
        std::cout << "Element not found" << std::endl;
    }
    std::cout << std::endl;
    std::list<int> lst;
    for (int i = 30; i < 40; i++)
        lst.push_back(i);
    try
    {
        std::cout << *easyfind(lst, 35) << std::endl;
        std::cout << *easyfind(lst, 5) << std::endl;
    } catch (std::exception &e) {
        std::cout << "Element not found" << std::endl;
    }
}
