from cs50 import get_int

height = get_int("Height: ")
while height < 1 or height > 8:
    height = get_int("Height: ")

for i in range(height):
    print(" " * (height - i), end="")
    print("#" * i, end="")
    print("  ", end="")
    print("#" * i)
