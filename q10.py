#find and print the product of all digits of a given number 
product =  1
num = int(input("enter number"))
for i in range(1,num+1):
    product *=i

print (product)
