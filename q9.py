#calculate and print the factorial of a given number
factorial = 1
num = int(input("enter number "))
for i in range(1,num+1):
    factorial *=i
print(factorial)