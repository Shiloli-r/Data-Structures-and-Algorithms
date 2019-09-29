n = int(input("Enter the size of the queue: "))
r = f = 0
A = []
while r+1 != n:
    x = int(input("Enter the element to enqueue: "))
    A.append(x)
    r = (r + 1)%n
    print(A)

print("Queue is full")

