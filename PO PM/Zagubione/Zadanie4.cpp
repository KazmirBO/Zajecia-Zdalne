#include <iostream>
#include <set>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]){
	std::set<int>liczby = {3, 2, 1, 4, 5, 6, 7};
	for(auto e:liczby) std::cout<<e<<" ";
	nl;
	for(auto e:liczby) {
		if(e%2==0) liczby.erase(e);
	}
	for(auto e:liczby) std::cout<<e<<" ";
	nl;
	return 0;
}
