#include <iostream>
#include <set>
int main(int argc, char const *argv[]){
	std::set<int>liczby = {62, 102, 45, 11, 17};
	for(auto i=liczby.begin();i!=liczby.end();++i)
		std::cout<<*i<<" ";
	std::cout<<std::endl;
	liczby.insert(99);
	liczby.insert(999);
	liczby.insert(9999);
	for(auto e:liczby) std::cout<<e<<" ";
	std::cout<<std::endl;
	return 0;
}
