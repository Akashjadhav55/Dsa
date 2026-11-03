a = 5
b = 5

print(f"a = {a}, address: {id(a)}")
print(f"b = {b}, address: {id(b)}")

a = a + 1

print(f"a = {a}, address: {id(a)}")
print(f"b = {b}, address: {id(b)}")
