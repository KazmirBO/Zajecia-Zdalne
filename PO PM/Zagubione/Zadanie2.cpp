#include <iostream>
#include <set>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]){
	std::set<int, std::greater<int>>liczby = {62, 102, 45, 11, 17};
	std::set<int, std::greater<int>>liczby2 = liczby;
	int ar[] = {62, 102, 45, 11, 17};
	std::set<int> liczby3 = {ar, ar+5};
	for(auto e:liczby) std::cout<<e<<" ";
	nl;
	for(auto e:liczby2) std::cout<<e<<" ";
	nl;
	for(auto e:ar) std::cout<<e<<" ";
	nl;
	for(auto e:liczby3) std::cout<<e<<" ";
	nl;
	return 0;
}
