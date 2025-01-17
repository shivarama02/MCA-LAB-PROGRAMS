def vowels(string):
    vowels = 'aeiouAEIOU'
    char = set()
    count=0
    for i in string:
        if i in vowels:
            char.add(i)
            count+=1
    charsort=sorted(char)
    print(f"vowels: {charsort}")
    print(f"count: {count}")

string=input("Entr a string: ")
vowels(string)