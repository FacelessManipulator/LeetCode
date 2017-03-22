# Description
Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.

# Thinking
只给待删节点的指针，由于不知道此节点的先序节点，所以不能直接删除这个节点。可以参考堆的删除方式，交换删除。
