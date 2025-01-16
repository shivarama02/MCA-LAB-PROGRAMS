import csv

student_dict = {}

with open("details.csv", 'r') as csvfile:
    reader = csv.reader(csvfile)
    next(reader)  
    for row in reader:
        name = row[0]
        letter_count = len(name) 
        student_dict[name] = letter_count

sorted_students = sorted(student_dict.items(), key=lambda item: item[0])
print(sorted_students)

with open("stdcnt.csv", 'w', newline='') as csvfile:
    writer = csv.writer(csvfile)
    writer.writerow(['Student Name', 'Number of Letters'])  
    for student, count in sorted_students:
        writer.writerow([student, count])

with open("stdcnt.csv","r") as newfile:
    reader=csv.DictReader(newfile)
    for row in reader:
        print(row)
