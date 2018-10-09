# AVL Tree
---
AVL tree is a self-balancing Binary Search Tree where the difference between height of left and right sub trees cannot be more than one for all nodes.

## Why AVL Trees ?
Most of the BST operations take O(h) time where h is the height of the BST. The cost of these operations may become O(n) for a skewed Binary Tree.
If we make sure that height of tree remains o(Logn) after every insertion and deletion, then we can guarantee an upper bound of O(Logn) for all these operations. The height of an AVL tree is always O(Logn) where n is the number of nodes in the tree.

## Insertion
To make sure that the given tree remains AVL after every insertion, we must augment the standard BST insert operation to perform some re-balancing.
Following are two basic operations that can be performed to re-balance a BST without violating the BST property => (keys(left) < keys(root) < keys(right))
1. Left Rotation
2. Right Rotation

```
T1, T2, T3 are subtrees of the tree
rooted with y (on the left side) or x (on the right side)
        y                                 x
       / \     Right Rotation            / \
      x  T3   ---------------->         T1  y
     / \      <- - - - - - - -             / \
    T1  T2      Left Rotation             T2  T3

Keys in both of the above trees follow the following order :
keys(T1) < key(x) < keys(T2) < key(y) < keys(T3)

So BST property is not violated anywhere.
```