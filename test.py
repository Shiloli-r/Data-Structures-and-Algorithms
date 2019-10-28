class Node:
    def __init__(self, data=None, next_node=None):
        self.data = data
        self.next_node = next_node


class LinkedList:
    def __init__(self):
        self.head = Node()

    def add_to_list(self, data):
        new_node = Node(data)
        current = self.head
        while current.next_node is not None:
            current = current.next_node
        current.next_node = new_node

    def length(self):
        current = self.head
        total = 0
        while current.next_node is not None:
            total += 1
            current = current.next_node
        return total

    def print_list(self):
        linked_list = []
        current_node = self.head
        while current_node.next_node is not None:
            current_node = current_node.next_node
            linked_list.append(current_node.data)
            print(linked_list)


A = LinkedList()
n = int(input(" Enter the size of the list: "))
for i in range(n):
    x = int(input("Enter element {}: ".format(i+1)))
    A.add_to_list(x)


print(A.print_list())

