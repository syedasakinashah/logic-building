#/*Print the multiplication table of a given number from n * 1 to n * 10*/

num = int(input("enter your number "))
for i in range (1,11):
    print(f"{num}*{i}={num*i}")