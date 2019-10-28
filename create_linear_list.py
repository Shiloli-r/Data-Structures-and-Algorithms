n = int(input("Please Enter the size of the list "))
A = []
if not n or n < 0:   # Ensuring that n is defined, and that it is >= 0
    print("Invalid N")
    exit()
else:
    for i in range(n):
        try:
            x = int(input("Enter element " + str(i+1) + " of the list "))
        except ValueError as error:
            print(error, ":\n Input Integers only!")
            exit()
        while not x:  # Ensuring that the value of x is defined
            x = input("Please enter a value for element " + str(i+1) + " of the list ")
        A.append(x)
print(A)
