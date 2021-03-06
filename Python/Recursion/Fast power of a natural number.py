# Fast power of a natural number using recursion

def fastPower(num, i):
    if i == 0:
        return 1
    elif i % 2 == 0:
        return fastPower(num ** 2, i/2)
    else:
        return num * fastPower(num, i-1)
        
num = int(input('Enter a number'))
i = int(input('Enter power'))
print(fastPower(num, i))

# Source of question and explaination: https://youtu.be/AqHoXqOgctU
