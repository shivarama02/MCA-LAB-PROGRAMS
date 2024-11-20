s1 = input("Enter first string: ")
s2 = input("Enter second string: ")

if len(s1) > 1 and len(s2) > 1:
    s1_new = s2[0] + s1[1:]
    s2_new = s1[0] + s2[1:]
    result = s1_new + " " + s2_new
else:
    result = s1 + " " + s2

print(f"Resulting string: {result}")
