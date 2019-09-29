Q = [1, 2, 3, 4, 5, 6, 7]
print(Q)
r = f = len(Q)
if r == f == 0:
    print("Queue is empty")
else:
    while len(Q) != 0:
        x = int(input("Enter element at the front to dequeue, and any other element to quit: "))
        if x == Q[0]:
            if len(Q) > 1:
                Q[0] = Q[1]
                Q.remove(Q[0])
            else:
                Q.remove(Q[0])
            print(Q)
        else:
            print(Q)
            exit()
        f += 1

