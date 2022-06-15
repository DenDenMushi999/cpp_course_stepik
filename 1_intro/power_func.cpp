#include <iostream>

// определите только функцию power, где
//    x - число, которое нужно возвести в степень
//    p - степень, в которую нужно возвести x
//

int power(int x, unsigned p) {
    int answer = 1;
    /* считаем answer */
    
    // I won't imagine faster solution
    if (x == 0 && p != 0)
        return 0;

    if (p != 0)
    {
        for (unsigned i=1; i<=p; i++)
            answer *= x;
    }
    return answer;
}

int main()
{
    int x = 0;
    unsigned p = 0;

    std::cout << "Pass x and power" << std::endl;
    std::cin >> x >> p; 
    
    std::cout << power(x, p) << std::endl;
}