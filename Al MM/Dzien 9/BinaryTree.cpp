#include <iostream>
#include "BinaryTree.h"
#define nl std::cout<<std::endl
void BinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode){
  if(nodePtr==nullptr) nodePtr=newNode;
  else if(newNode->value<nodePtr->value) insert(nodePtr->left, newNode);
  else insert(nodePtr->right, newNode);
}
void BinaryTree::insertNode(int num){
  TreeNode *newNode=nullptr;
  newNode=new TreeNode;
  newNode->value=num;
  newNode->left=newNode->right=nullptr;
  insert(root, newNode);
}
void BinaryTree::destroySubTree(TreeNode *nodePtr){
  if(nodePtr){
    if(nodePtr->left) destroySubTree(nodePtr->left);
    if(nodePtr->right) destroySubTree(nodePtr->right);
    delete nodePtr;
  }
}
bool BinaryTree::searchNode(int num){
  TreeNode *nodePtr=root;
  while(nodePtr){
    if(nodePtr->value==num) return true;
    else if(num<nodePtr->value) nodePtr=nodePtr->left;
    else nodePtr=nodePtr->right;
  }
  return false;
}
void BinaryTree::remove(int num){
  deleteNode(num, root);
}
void BinaryTree::deleteNode(int num, TreeNode *&nodePtr){
  if(num<nodePtr->value) deleteNode(num, nodePtr->left);
  else if(num>nodePtr->value) deleteNode(num, nodePtr->right);
  else makeDeletion(nodePtr);
}
void BinaryTree::makeDeletion(TreeNode *&nodePtr){
  TreeNode *tempNodePtr=nullptr;
  if(nodePtr==nullptr) std::cout<<"Nie mozna usunac pustego wezla."<<std::endl;
  else if(nodePtr->right==nullptr){
    tempNodePtr=nodePtr;
    nodePtr=nodePtr->left;
    delete tempNodePtr;
  }
  else if(nodePtr->left==nullptr){
    tempNodePtr=nodePtr;
    nodePtr=nodePtr->right;
    delete tempNodePtr;
  }else{
    tempNodePtr=nodePtr->right;
    while(tempNodePtr->left) tempNodePtr=tempNodePtr->left;
    tempNodePtr->left=nodePtr->left;
    tempNodePtr=nodePtr;
    nodePtr=nodePtr->right;
    delete tempNodePtr;
  }
}
void BinaryTree::displayInOrder(TreeNode *nodePtr) const{
  if(nodePtr){
    displayInOrder(nodePtr->left);
    std::cout<<nodePtr->value<<std::endl;
    displayInOrder(nodePtr->right);
  }
}
void BinaryTree::displayPreOrder(TreeNode *nodePtr) const{
  if(nodePtr){
    std::cout<<nodePtr->value<<std::endl;
    displayInOrder(nodePtr->left);
    displayInOrder(nodePtr->right);
  }
}
void BinaryTree::displayPostOrder(TreeNode *nodePtr) const{
  if(nodePtr){
    displayInOrder(nodePtr->left);
    displayInOrder(nodePtr->right);
    std::cout<<nodePtr->value<<std::endl;
  }
}
