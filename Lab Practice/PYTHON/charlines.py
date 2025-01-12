text = input("enter a string: ")
numlines = int(input("Enter the number of lines: "))
charsline = len(text )// numlines
if len(text) % numlines != 0:
    print("the sring cannnot be evenly devided, it contains odd number of characters.")
else:
    for i in range(numlines):
        start = i * charsline
        end = start + charsline
        print(text[start:end])