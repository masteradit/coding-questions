# Power of a number using recursion

def power(num, i):
    
    if i == 0:
        return 1
    
    return (power(num, i-1) * num)
    
num = int(input('Enter a number'))
i = int(input('Enter power'))
print(power(num, i))

# Source of question and explaination: https://youtu.be/AqHoXqOgctU
