n = int(input("Enter the size of the list: "))
j = 1


class Node:
    def __init__(self, data=None, link=None):
        self.data = data
        self.link = link
        self.head = None


if n < 0:
    print("Invalid Size")
else:
    while j <= n:
        x = int(input("Enter element {} of the list: ".format(j)))
        # creating a node
        q = x  # The entered element always goes to q node
        if j == 1:
            h = q  # The head node
            print("Element 1 ({}) is at address {}".format(h, id(h)))
        else:
            p = q
            print("Element j - ({}) is at address {}".format(p, id(q)))
        j += 1
A = [1, 2, 3, 4, 5]
for i in range(len(A)):
    print(id(A[i]))
