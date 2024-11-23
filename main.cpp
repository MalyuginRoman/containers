#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>

int main(int ac, char **av)
{
//----- vector -----
    std::cout << "Vector" << std::endl;
    std::vector<int> numbers_v = {1, 2, 3, 4, 5};
    numbers_v.push_back(6);
    std::cout << "Third element: " << numbers_v[2] << std::endl;
    for(int num : numbers_v)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
//----- list  -----
    std::cout << "List" << std::endl;
    std::list<int> numbers_l = {1, 2, 3, 4, 5};
    numbers_l.push_front(0);
    numbers_l.remove(3);
    for(int num : numbers_l)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
//----- deque -----
    std::cout << "Deque" << std::endl;
    std::deque<int> numbers_d = {2, 3, 4};
    numbers_d.push_front(1);
    numbers_d.push_back(5);
    std::cout << "First element: " << numbers_d.front() << std::endl;
    std::cout << "Last element: " << numbers_d.back() << std::endl;
    numbers_d.pop_front();
    for(int num : numbers_d)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;;
//----- queue -----
    std::cout << "Queue" << std::endl;
    std::queue<int> numbers_q;
    numbers_q.push(1);
    numbers_q.push(2);
    numbers_q.push(3);
    while(!numbers_q.empty())
    {
        std::cout << numbers_q.front() << " ";
        numbers_q.pop();
    }
    std::cout << std::endl;
//-----------------
}
