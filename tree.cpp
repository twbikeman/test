template <typename T> class Tree;

template <typename T>
class TreeNode {
  friend TreeNode<T>;
private:
  T data;
  TreeNode<T> *leftChild;
  TreeNode<T> *rightChild;
};

template <typename T>
class Tree {
public:
  /*
operations
  */
private:
  TreeNode<T> *root;
  
}
