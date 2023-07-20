# C - Doubly linked lists
## Synopsis
- A doubly linked list (DLL) is a special type of linked list in which each node contains a pointer to the previous node as well as the next node of the linked list.
  
  <img width="641" alt="image" src="https://github.com/kier-ious/holbertonschool-low_level_programming/assets/126838794/f55a2094-c097-4d8c-8cf9-7c0f191a7538">

---
Following are the important terms to understand the concept of doubly linked list.

- Link − Each link of a linked list can store a data called an element.

- Next − Each link of a linked list contains a link to the next link called Next.

- Prev − Each link of a linked list contains a link to the previous link called Prev.
---
Add a node at the front in a Doubly Linked List:
The new node is always added before the head of the given Linked List. The task can be performed by using the following 5 steps:

1. Firstly, allocate a new node (say new_node).
2. Now put the required data in the new node.
3. Make the next of new_node point to the current head of the doubly linked list.
4. Make the previous of the current head point to new_node.
5. Lastly, point head to new_node.
---
Add a node after a given node in a Doubly Linked List:
We are given a pointer to a node as prev_node, and the new node is inserted after the given node. This can be done using the following 6 steps:
1. Firstly create a new node (say new_node).
2. Now insert the data in the new node.
3. Point the next of new_node to the next of prev_node.
4. Point the next of prev_node to new_node.
5. Point the previous of new_node to prev_node.
6. Change the pointer of the new node’s previous pointer to new_node.

Advantages over singly linked list
A DLL can be traversed in both forward and backward direction.
The delete operation in DLL is more efficient if pointer to the node to be deleted is given.
We can quickly insert a new node before a given node.
