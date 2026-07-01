# Calculate teh sum of all even numbers from 1 upto n.

num=int(input("enter a number : "))
even = 0
for i in range(1,num):
    if i%2==0:
        even += i

print (even)