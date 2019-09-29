A = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(A)
m = top = len(A)

while top:
    x = int(input("Enter the first element to pop, and any other element to stop popping: "))
    if x == A[0]:
        A.remove(A[0])
        print(A)
    else:
        print("\nDone!")
        print(A)
        print("Top is {}, m is {}".format(top, m))
        exit()
    top -= 1
else:
    print("\nStack Empty!")
    print("Top is {}, m is {}".format(top, m))
    print(A)
