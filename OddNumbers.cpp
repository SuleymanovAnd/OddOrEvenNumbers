// OddNumbers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int N = 30;


void PrintOddNumbers(int &startNum, int &finishNum) {
    for (int i = startNum; i <= finishNum; i++) {
        if (i % 2 != 0) std::cout << i << std::endl;
    }
    std::cout << std::endl;
}

void PrintEvenNumbers(int& startNum, int& finishNum) {
    for (int i = startNum; i <= finishNum; i++) {
        if (i % 2 == 0) std::cout << i << std::endl;
    }
    std::cout << std::endl;
}


void PrintOddOrEvenNumbers(bool IsEven, int N = 20, int startNum = 0) {
    if (IsEven) {
        PrintEvenNumbers(startNum, N);
    }
    else {
        PrintOddNumbers(startNum, N);
    }
}



int main()
{
    // print even without "if"
    for (int i = 0; i <= N; i +=2) {
         std::cout << i << std::endl;
    }
    std::cout << std::endl;
    //
    // print odd without "if"
    for (int i = 1; i <= N; i += 2) {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;
    // 
    // print even
    for (int i = 0; i <= N; i ++) {
        if (i%2 == 0) std::cout << i << std::endl;
    }
    std::cout << std::endl;
    //
    //
    PrintOddOrEvenNumbers(true); // print even to 20
    PrintOddOrEvenNumbers(false); // print odd to 20
    PrintOddOrEvenNumbers(true,N); // print event to 30
    PrintOddOrEvenNumbers(false,N); // print odd to 30
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
