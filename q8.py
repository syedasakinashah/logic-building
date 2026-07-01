#calculate the sum of all odd numbers from 1 up to n


num=int(input("enter a number : "))
even = 0
for i in range(1,num+1):
    if i%2!=0:
        even += i

print (even)