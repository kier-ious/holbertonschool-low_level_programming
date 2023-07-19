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
Basic Operations
- Insertion − Adds an element at the beginning of the list.

- Deletion − Deletes an element at the beginning of the list.

- Insert Last − Adds an element at the end of the list.

- Delete Last − Deletes an element from the end of the list.

- Insert After − Adds an element after an item of the list.

- Delete − Deletes an element from the list using the key.

- Display forward − Displays the complete list in a forward manner.

- Display backward − Displays the complete list in a backward manner.

Advantages over singly linked list
A DLL can be traversed in both forward and backward direction.
The delete operation in DLL is more efficient if pointer to the node to be deleted is given.
We can quickly insert a new node before a given node.
