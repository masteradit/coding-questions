# Sum of first N natural numbers using recursion

def sumOfN(num):

    if num == 1:
        return 1
    
    return (sumOfN(num-1) + num)
    
num = int(input('Enter a number'))
print(sumOfN(num))

# Source of question and explaination: https://youtu.be/AqHoXqOgctU
