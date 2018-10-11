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

**Steps to follow for insertion**
Let the newly inserted node be w.
1. Perform standard BST insert for w.
2. Starting from w, travel up and find the unbalanced node. Let z be the first unbalanced node, y be th child of z that comes on the path from w to z and x be the grandchild of z that comes on the path from w to z.
3. Re-balance the tree by preforming appropiate roatations on the subtree rooted with z. There can be 4 possible cases that needs to handled as x, y and z can be arranged in 4 ways i.e :
- y is the left child of z and x is the left child y (Left Left Case)
- y is the left child of z and x is the right child of y (Left Right Case)
- y is the right child of z and x is the right child of y (Right Right Case)
- y is the right child of z and x is the left child of y (Right Left Case)

Operations to be preformed in the above mentioned 4 cases : 
1. Left Left Case

```
T1, T2, T3 and T4 are subtrees.
            z                                    y
           / \                                 /   \
          y   T4    Right Rotate(z)           x     z    
         / \       ----------------->        / \   / \  
        x   T3                              T1 T2 T3 T4    
       / \
      T1  T2
```

2. Left Right Case
```
     z                               z                           x
    / \                            /   \                        /  \ 
   y   T4  Left Rotate (y)        x    T4  Right Rotate(z)    y      z
  / \      - - - - - - - - ->    /  \      - - - - - - - ->  / \    / \
T1   x                          y    T3                    T1  T2 T3  T4
    / \                        / \
  T2   T3                    T1   T2
```