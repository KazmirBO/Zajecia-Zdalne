#include <iostream>
#include <map>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]){
	std::map<int, std::string> mapa;
	mapa[200] = "Kowalski";
	mapa[201] = "Zielinski";
	mapa[202] = "Lipski";
	for(auto e:mapa) std::cout<<e.first<<" "<<e.second<<std::endl;
	return 0;
}
