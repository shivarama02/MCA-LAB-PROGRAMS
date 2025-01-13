import csv 

with open(r'Lab Practice\PYTHON\line.csv','r') as file:
    lines = file.readline()

print(lines)

for i in lines:
    lines = [i.strip()]
    print(lines, end=" ")