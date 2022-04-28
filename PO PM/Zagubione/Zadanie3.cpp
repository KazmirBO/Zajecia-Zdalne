#include <iostream>
#include <set>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]){
	std::cout<<"Kontener1 :"<<std::endl;
	std::set<int>liczby = {3, 2, 1, 4, 5, 6, 7};
	for(auto e:liczby) std::cout<<e<<" ";
	nl;
	std::cout<<"Usuwam '4'."<<std::endl;
	liczby.erase(4);
        for(auto e:liczby) std::cout<<e<<" ";
	nl;
	std::cout<<"Kontener2 :"<<std::endl;
        std::set<int>liczby2 = {3, 2, 1, 4, 5, 6, 7};
	for(auto e:liczby2) std::cout<<e<<" ";
	nl;
	std::set<int>::iterator it1 = liczby2.begin(), it2 = liczby2.end();
	it1++; it1++;
	it2--; it2--;
	liczby.erase(it1, it2);
	std::cout<<"Po usunieciu zakresu '2'-'4': "<<std::endl;
	for(auto e:liczby2) std::cout<<e<<" ";
	nl;
	return 0;
}
