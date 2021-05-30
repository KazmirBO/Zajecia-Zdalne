#include<iostream>
int Podzial(int tab[], int startIndex, int endIndex){
	int pivot=tab[startIndex];
	int middleIndex=startIndex;
	for(int i=startIndex;i<=endIndex;++i){
		if(tab[i]<pivot){
			++middleIndex;
			std::swap(tab[i],tab[middleIndex]);
		}
	}
	std::swap(tab[startIndex],tab[middleIndex]);
	return middleIndex;
}
void QuickSort(int tab[], int startIndex, int endIndex){
	if(startIndex<endIndex){
		int pivotIndex=Podzial(tab, startIndex, endIndex);
		QuickSort(tab, startIndex, pivotIndex-1);
		QuickSort(tab, pivotIndex+1, endIndex);
	}
}
int main(int argc, char const *argv[]){
	int tab[]={7, 1, 5, 9, 3, 6, 8, 2};
	int tabSize=sizeof(tab)/sizeof(*tab);
	std::cout<<"Dane poczatkowe: "<<std::endl;
	for(auto e:tab) std::cout<<e<<"\t";
	std::cout<<std::endl;
	QuickSort(tab, 0, tabSize-1);
	std::cout<<"Dane koncowe: "<<std::endl;
	for(auto e:tab) std::cout<<e<<"\t";
	std::cout<<std::endl;
	return 0;
}
