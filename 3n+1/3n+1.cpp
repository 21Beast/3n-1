// 3n+1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int count = 0;

void threen(int a) {
    if (a==4) {
        std::cout << "Follows 3n+1 \n";
        count = count + 2;
        std::cout << count;
    }
    else if (a % 2 == 0) {
        a = a / 2;
        std::cout << a <<"\n";
        count++;
        threen(a);
        
    }
    else
    {
        a = 3 * a + 1;
        std::cout << a << "\n";
        count++;
        threen(a);
    }

}
int main()
{
    int x;
    std::cout << "3n +1 \n";
    /*std::cin >> x;*/
    x = 2147483646;
    threen(x);
}
