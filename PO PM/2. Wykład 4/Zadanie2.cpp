#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#define nl std::cout<<std::endl
bool drukuj(int liczba){
	if(liczba>50) return true;
	else return false;
}
int main(int argc, char const *argv[]){
	srand(time(NULL));
	std::vector<int> v(10);
	int ilosc;
	generate(v.begin(), v.end(), [](){return rand()%100;});
	for(auto e:v) std::cout<<e<<" ";
	nl;
	replace_if(v.begin(), v.end(), drukuj, 333);
	for(auto e:v) std::cout<<e<<" ";
	nl;
	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#define nl std::cout<<std::endl
bool drukuj(int liczba){
	if(liczba>50) return true;
	else return false;
}
int main(int argc, char const *argv[]){
	srand(time(NULL));
	std::vector<int> v(10);
	int ilosc;
	generate(v.begin(), v.end(), [](){return rand()%100;});
	for(auto e:v) std::cout<<e<<" ";
	nl;
	replace_if(v.begin(), v.end(), [](int i){if(i>50){return true;}return false;}, 333);
	for(auto e:v) std::cout<<e<<" ";
	nl;
	return 0;
}
