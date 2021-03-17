#include <iostream>
#include <time.h>

int main()
{
    std::cout << "Hello World!\n";

    system("cls");

    srand((unsigned int)time(0));

    int Lotto[45] = {};
    // 1~45 까지의 숫자를 차례로 넣어준다. 
    for (int i = 0; i < 45; i++) {
        Lotto[i] = i + 1;
        cout << Lotto[i];
    }

    return 0;
}
