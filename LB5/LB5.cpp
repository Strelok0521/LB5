#include <iostream>;
using namespace std;
#include<string>;
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    std::string str1;
    std::string str2;
    std::cout << "Напишите первую строку"<< endl;
    std::cin >> str1;
    std::cout << "Напишите вторую строку" << endl;
    std::cin >> str2;
    int a = 0;
    for (int i = 0; i < str1.length(); i++) {
        if (str1.find(str2[i]) > str1.length()-1) {
            a = 1;
            break;
        }
    }
    if (a == 1) std::cout << "Не анаграммаm";
    if (a == 0) std::cout << "Анаграммаm";
}