
def digits_sum(num):
    sum = 0
    while num > 0:
        last_digit = num % 10
        num = num // 10
        sum += last_digit
    return sum

num = int(input("Enter your number: "))
print("Sum of the digits of ", num ,"is : ", digits_sum(num))
