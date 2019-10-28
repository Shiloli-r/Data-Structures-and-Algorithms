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
print(A, "\n")

print("Beginning Insertion ")

# Beginning Insertion
# insert element x at position j
if n < 0:  # checking if the list is empty
    print("Empty List")
    exit()
else:
    print("\n", A, "\n")
    x = int(input("Input the element you want to insert: "))
    j = int(input("At what position do you want the element inserted? "))
    # validating J
    if j > n+1 or j < 1:  # checking if the position is between 1 and n+1
        print("Invalid Position")
        exit()
    elif j == n+1:  # if the element is to be inserted at the end of the list
        A.append(x)
        print("\n", "The new size(n) is: ", n+1)
        print(A, "\n")
        exit()
        # end of validation
    else:
        i = n
        A.append("")  # creating an empty position in the list
        while i > j-1:
            A[i] = A[i-1]
            i = i - 1
    A[j-1] = x   # The index is 1 less than the value the user enters because of list indexing
    n = n+1
    print("\n", "The new size(n) is: ", n)
    print(A, "\n")
