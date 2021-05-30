#include <iostream>
int main(int argc, char** argv) {
    char znak;
    int licz=-1;
    do {
        std::cout<<"Podaj znak: ";
        std::cin>>znak;
        licz++;
    } while(znak != '$');
    std::cout<<"Suma znaków do $ wychodzi "<<licz<<std::endl;
    return 0;
}
