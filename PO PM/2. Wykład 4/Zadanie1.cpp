#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#define nl std::cout<<std::endl
bool drukuj(int liczba){
	if(liczba%2==0) return true;
	else return false;
}
int main(int argc, char const *argv[]){
	srand(time(NULL));
	std::cout<<"Podaj ilosc liczb: ";
	int n;
	std::cin>>n;
	std::vector<int> v(n);
	int ilosc;
	generate(v.begin(), v.end(), rand);
	for(auto e:v) std::cout<<e<<" ";
	nl;
	ilosc = count_if(v.begin(), v.end(), drukuj);
	std::cout<<"Liczb parzystych wystepuje: "<<ilosc<<std::endl;
	return 0;
}
