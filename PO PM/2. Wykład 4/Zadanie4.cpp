#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <ctime>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]){
	srand(time(NULL));
	std::vector<std::string> v1 = {"Jan", "Matejko", "to", "malarz"};
	std::vector<std::string> v2 = {"Jan", "Matejko", "to", "pisarz"};
	std::ostream_iterator<std::string> out(std::cout, " ");
	std::copy(v1.begin(), v1.end(), out);
	nl;
	if(std::equal(v1.begin(), v1.end(), v2))
		std::cout<<"Zakresy SA podobne."<<std::endl;
	else std::cout<<"Zakresy NIE SA podobne."<<std::endl;
	return 0;
}
