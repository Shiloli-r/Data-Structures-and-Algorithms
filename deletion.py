A = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print("Original List: \n", A, "\n")
n = len(A)
if n < 0:
    print("Empty List")
    exit()
x = int(input("Enter the element you want to delete: "))


def search(listx, element):
    """creating a function to check if the element exists in the list"""
    for i in range(len(listx)):
        if listx[i] == element:
            return i  # returns the position of the element


y = search(A, x)
if not y and y != 0:    # if y is not defined, and it is not 0
    print("{} not found in list".format(x))
else:
    while y < n-1:      # while y is less than the last index of the list
        A[y] = A[y+1]
        y += 1
    A.remove(A[n-1])    # Remove the last element in the list
    print("\n", A)
    print("n is {}". format(len(A)))
