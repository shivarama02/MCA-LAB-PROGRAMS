import csv

# # Data for the CSV file
# data = [
#     ["Name", "Age"],
#     ["Alice", 25],
#     ["Bob", 30],
#     ["Charlie", 22],
#     ["David", 28],
#     ["Eve", 27],
#     ["Frank", 24],
#     ["Grace", 26],
#     ["Hannah", 29],
#     ["Ivy", 23],
#     ["Jack", 31]
# ]

# # Create and write to the CSV file
# file_path = 'D:\MCA PG CET\LAB PROGRAMS S1\MCA-LAB-PROGRAMS\Lab Practice\PYTHON\odd.csv'

# with open(file_path, 'w', newline='') as file:
#     writer = csv.writer(file)
#     writer.writerows(data)

# file_path

with open("D:\\MCA PG CET\\LAB PROGRAMS S1\\MCA-LAB-PROGRAMS\\Lab Practice\\PYTHON\\odd.csv","r") as infile:
    lines = infile.readlines()

with open("D:\\MCA PG CET\\LAB PROGRAMS S1\\MCA-LAB-PROGRAMS\\Lab Practice\\PYTHON\\result.csv","w") as outfile:
    for i in range(1,len(lines),2):
        outfile.write(lines[i])

    