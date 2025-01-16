def leepyear(n):
    if(n%4==0 and n%100!=0) or (n%400==0):
        print(f"{n} is a leep year.")
    else:
        print(f"{n} is a non leep year.")

year=int(input("Enter a year: "))
leepyear(year)
