num=int(input("Enter a number: "))
count=0
temp=num
while (temp>0):
    count+=1
    temp//=10
print(f"number of digits in {num} is {count}")