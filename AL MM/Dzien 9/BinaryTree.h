#ifndef BINARYTREE_H
#define BINARYTREE_H
class BinaryTree {
private:
  struct TreeNode {
    int value;
    TreeNode *left;
    TreeNode *right;
  };
  TreeNode *root;
  void insert(TreeNode *&, TreeNode *&);
  void destroySubTree(TreeNode *);
  void deleteNode(int, TreeNode *&);
  void makeDeletion(TreeNode *&);
  void displayInOrder(TreeNode *) const;
  void displayPreOrder(TreeNode *) const;
  void displayPostOrder(TreeNode *) const;

public:
  BinaryTree() { root = nullptr; }
  ~BinaryTree() { destroySubTree(root); }
  void insertNode(int);
  bool searchNode(int);
  void remove(int);
  void displayInOrder() const { displayInOrder(root); }
  void displayPreOrder() const { displayPreOrder(root); }
  void displayPostOrder() const { displayPostOrder(root); }
};
#endif
