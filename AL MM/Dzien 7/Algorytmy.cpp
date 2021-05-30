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
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  BabelkoweSort(Malejaco_tmp,N);
  stop=clock();
  double babelkowe1=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  BabelkoweSort(Rosnaco_tmp,N);
  stop=clock();
  double babelkowe2=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Los, Los_tmp,N);
  start=clock();
  BabelkoweSort(Los_tmp,N);
  stop=clock();
  double babelkowe3=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  MergeSort(Malejaco_tmp,0,N-1);
  stop=clock();
  double merge1=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  MergeSort(Rosnaco_tmp,0,N-1);
  stop=clock();
  double merge2=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Los, Los_tmp,N);
  start=clock();
  MergeSort(Los_tmp,0,N-1);
  stop=clock();
  double merge3=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  QuickSort(Malejaco_tmp,0,N-1);
  stop=clock();
  double quick1=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  QuickSort(Rosnaco_tmp,0,N-1);
  stop=clock();
  double quick2=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Los, Los_tmp,N);
  start=clock();
  QuickSort(Los_tmp,0,N-1);
  stop=clock();
  double quick3=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  InsertionSort(Malejaco_tmp,N);
  stop=clock();
  double insert1=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  InsertionSort(Rosnaco_tmp,N);
  stop=clock();
  double insert2=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Los, Los_tmp,N);
  start=clock();
  InsertionSort(Los_tmp,N);
  stop=clock();
  double insert3=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  SelectSort(Malejaco_tmp,N);
  stop=clock();
  double select1=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  SelectSort(Rosnaco_tmp,N);
  stop=clock();
  double select2=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Los, Los_tmp,N);
  start=clock();
  SelectSort(Los_tmp,N);
  stop=clock();
  double select3=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  ShakerSort(Malejaco_tmp,N);
  stop=clock();
  double shaker1=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  ShakerSort(Rosnaco_tmp,N);
  stop=clock();
  double shaker2=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Los, Los_tmp,N);
  start=clock();
  ShakerSort(Los_tmp,N);
  stop=clock();
  double shaker3=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Malejaco, Malejaco_tmp,N);
  start=clock();
  DumbSort(Malejaco_tmp,N);
  stop=clock();
  double dumb1=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Rosnaco, Rosnaco_tmp,N);
  start=clock();
  DumbSort(Rosnaco_tmp,N);
  stop=clock();
  double dumb2=(double)(stop-start)/ CLOCKS_PER_SEC;
  Tmp(Los, Los_tmp,N);
  start=clock();
  DumbSort(Los_tmp,N);
  stop=clock();
  double dumb3=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<std::endl<<"\tMalejaco:"<<std::endl;
  std::cout<<"BabelkoweSort: "<<babelkowe1<<std::endl;
  std::cout<<"MergeSort    : "<<merge1<<std::endl;
  std::cout<<"QuickSort    : "<<quick1<<std::endl;
  std::cout<<"InsertionSort: "<<insert1<<std::endl;
  std::cout<<"SelectSort   : "<<select1<<std::endl;
  std::cout<<"ShakerSort   : "<<shaker1<<std::endl;
  std::cout<<"DumbSort     : "<<dumb1<<std::endl;
  std::cout<<std::endl<<"\tRosnaco(2 zamienione):"<<std::endl;
  std::cout<<"BabelkoweSort: "<<babelkowe2<<std::endl;
  std::cout<<"MergeSort    : "<<merge2<<std::endl;
  std::cout<<"QuickSort    : "<<quick2<<std::endl;
  std::cout<<"InsertionSort: "<<insert2<<std::endl;
  std::cout<<"SelectSort   : "<<select2<<std::endl;
  std::cout<<"ShakerSort   : "<<shaker2<<std::endl;
  std::cout<<"DumbSort     : "<<dumb2<<std::endl;
  std::cout<<std::endl<<"\tLosowe:"<<std::endl;
  std::cout<<"BabelkoweSort: "<<babelkowe3<<std::endl;
  std::cout<<"MergeSort    : "<<merge3<<std::endl;
  std::cout<<"QuickSort    : "<<quick3<<std::endl;
  std::cout<<"InsertionSort: "<<insert3<<std::endl;
  std::cout<<"SelectSort   : "<<select3<<std::endl;
  std::cout<<"ShakerSort   : "<<shaker3<<std::endl;
  std::cout<<"DumbSort     : "<<dumb3<<std::endl;
  std::cout<<std::endl<<"Zlozonosci: "<<std::endl;
  std::cout<<"Babelkowe: Opt: O(n^2)    , Typ: O(n^2)    , Pes: O(n^2),"<<std::endl;
  std::cout<<"Merge    : Opt: O(n*log n), Typ: O(n*log n), Pes: O(n*log n),"<<std::endl;
  std::cout<<"Quick    : Opt: O(n*log n), Typ: O(n*log n), Pes: O(n^2),"<<std::endl;
  std::cout<<"Insertion: Opt: O(n)      , Typ: O(n^2)    , Pes: O(n^2),"<<std::endl;
  std::cout<<"Select   : Opt: O(n^2)    , Typ: O(n^2)    , Pes: O(n^2),"<<std::endl;
  std::cout<<"Shaker   : Opt: O(n)      , Typ: O(n^2)    , Pes: O(n^2),"<<std::endl;
  std::cout<<"Dumb     : Opt: O(n^2)    , Typ: O(n^3)    , Pes: O(n^3),"<<std::endl;
  std::cout<<std::endl;
  return 0;
}