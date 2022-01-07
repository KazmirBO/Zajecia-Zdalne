#include "BinaryTree.h"
#include <iostream>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  BinaryTree tree;
  std::cout << "Dodawanie wezlow: " << std::endl;
  tree.insertNode(5);
  tree.insertNode(8);
  tree.insertNode(3);
  tree.insertNode(12);
  tree.insertNode(9);
  std::cout << "Wartosci zapisane w drzewie: " << std::endl;
  tree.displayInOrder();
  std::cout << "Usuwamy '8' i '12' z drzewa." << std::endl;
  tree.remove(8);
  tree.remove(12);
  std::cout << "Wartosci zapisane w drzewie <in>  : " << std::endl;
  tree.displayInOrder();
  std::cout << "Wartosci zapisane w drzewie <pre> : " << std::endl;
  tree.displayPreOrder();
  std::cout << "Wartosci zapisane w drzewie <post>: " << std::endl;
  tree.displayPostOrder();
  nl;
  return 0;
}
