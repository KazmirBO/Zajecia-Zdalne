#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Funkcje.h"
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  clock_t start, stop;
  int N=1000;
  int Malejaco[N], Malejaco_tmp[N];
  int Rosnaco[N], Rosnaco_tmp[N];
  int Los[N], Los_tmp[N];
  Wprowadzanie(Malejaco,N);
  Wprowadzanie2(Rosnaco,N);
  Losowanie(Los,N);
  std::cout<<std::endl<<"Babelkowe:"<<std::endl;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  BabelkoweSort(Malejaco_tmp,N);
  stop=clock();
  double babelkowe1=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Malejaco: "<<babelkowe1<<std::endl;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  BabelkoweSort(Rosnaco_tmp,N);
  stop=clock();
  double babelkowe2=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Rosnaco(2 zamienione): "<<babelkowe2<<std::endl;
  Tmp(Los, Los_tmp,N);
  start=clock();
  BabelkoweSort(Los_tmp,N);
  stop=clock();
  double babelkowe3=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Losowe: "<<babelkowe3<<std::endl;
  std::cout<<std::endl<<"MergeSort:"<<std::endl;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  MergeSort(Malejaco_tmp,0,N-1);
  stop=clock();
  double merge1=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Malejaco: "<<merge1<<std::endl;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  MergeSort(Rosnaco_tmp,0,N-1);
  stop=clock();
  double merge2=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Rosnaco(2 zamienione): "<<merge2<<std::endl;
  Tmp(Los, Los_tmp,N);
  start=clock();
  MergeSort(Los_tmp,0,N-1);
  stop=clock();
  double merge3=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Losowe: "<<merge3<<std::endl;
  std::cout<<std::endl<<"QuickSort:"<<std::endl;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  QuickSort(Malejaco_tmp,0,N-1);
  stop=clock();
  double quick1=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Malejaco: "<<quick1<<std::endl;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  QuickSort(Rosnaco_tmp,0,N-1);
  stop=clock();
  double quick2=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Rosnaco(2 zamienione): "<<quick2<<std::endl;
  Tmp(Los, Los_tmp,N);
  start=clock();
  QuickSort(Los_tmp,0,N-1);
  stop=clock();
  double quick3=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Losowe: "<<quick3<<std::endl;
  std::cout<<std::endl<<"InsertionSort:"<<std::endl;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  InsertionSort(Malejaco_tmp,N);
  stop=clock();
  double insert1=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Malejaco: "<<insert1<<std::endl;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  InsertionSort(Rosnaco_tmp,N);
  stop=clock();
  double insert2=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Rosnaco(2 zamienione): "<<insert2<<std::endl;
  Tmp(Los, Los_tmp,N);
  start=clock();
  InsertionSort(Los_tmp,N);
  stop=clock();
  double insert3=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Losowe: "<<insert3<<std::endl;
  std::cout<<std::endl<<"SelectSort:"<<std::endl;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  SelectSort(Malejaco_tmp,N);
  stop=clock();
  double select1=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Malejaco: "<<select1<<std::endl;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  SelectSort(Rosnaco_tmp,N);
  stop=clock();
  double select2=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Rosnaco(2 zamienione): "<<select2<<std::endl;
  Tmp(Los, Los_tmp,N);
  start=clock();
  SelectSort(Los_tmp,N);
  stop=clock();
  double select3=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Losowe: "<<select3<<std::endl;
  std::cout<<std::endl<<"ShakerSort:"<<std::endl;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  ShakerSort(Malejaco_tmp,N);
  stop=clock();
  double shaker1=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Malejaco: "<<shaker1<<std::endl;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  ShakerSort(Rosnaco_tmp,N);
  stop=clock();
  double shaker2=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Rosnaco(2 zamienione): "<<shaker2<<std::endl;
  Tmp(Los, Los_tmp,N);
  start=clock();
  ShakerSort(Los_tmp,N);
  stop=clock();
  double shaker3=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Losowe: "<<shaker3<<std::endl;
  std::cout<<std::endl<<"DumbSort:"<<std::endl;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  DumbSort(Malejaco_tmp,N);
  stop=clock();
  double dumb1=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Malejaco: "<<dumb1<<std::endl;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  DumbSort(Rosnaco_tmp,N);
  stop=clock();
  double dumb2=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Rosnaco(2 zamienione): "<<dumb2<<std::endl;
  Tmp(Los, Los_tmp,N);
  start=clock();
  DumbSort(Los_tmp,N);
  stop=clock();
  double dumb3=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Losowe: "<<dumb3<<std::endl;
  std::cout<<std::endl;
  return 0;
}
