m = int(input("Enter the size of the stack (m): "))
top = 0
A = []
while top != m:
    x = int(input("Enter Element to be pushed to stack: "))
    A.append(x)
    top += 1
else:
    print("Stack Full!")
print(A)
