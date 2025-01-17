import csv 

vowel_dict={}
with open("details.csv", "r") as file:
    csv_reader=csv.DictReader(file)
    next(csv_reader)
    for row in csv_reader:
        name=row['name']
        vowels=''.join(sorted({char for char in name if char in 'aeoiuAEOIU' }))
        vowel_dict[name]=vowels

with open("vowels.csv", "w", newline='') as newfile:
    csv_writer=csv.writer(newfile)
    csv_writer.writerow(['name','vowels'])
    for key,value in vowel_dict.items():
        csv_writer.writerow(([key,value]))
print(vowel_dict)