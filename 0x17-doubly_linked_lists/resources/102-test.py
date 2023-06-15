"""
this code aims to find the largest palindrome as a result of
3 digit multiplication
"""
max = 0
temp = ""
for num1 in range(100, 1000):
    for num2 in range(100, 1000):
        temp = str((num1 * num2))
        if (temp == temp[::-1]):
            max = int(temp) if max < int(temp) else max


print(max)
