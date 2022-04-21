f = lambda n: (n - 3) / (n ** 2)
num = int(input("Please enter a number: "))
my_list = []
for i in range(1, num + 1, 1):
    my_list.append(f(i))
print(sum(my_list))


def my_function(n):
    """The function calculates the product notation recursively."""
    if n == 0:
        return 1
    else:
        return ((n / (n + 2)) - 10) * my_function(n - 1)


num = int(input("Please enter a number: "))
print(my_function(num))
print(my_function.__doc__)
