
# character count
import csv 
with open("details.csv", "r") as file:
    csv_reader=csv.DictReader(file)


    char_dict={}
    for row in csv_reader:
        names=row['name']
        for char in names:
            if char in char_dict:
                char_dict[char]+=1
            else:
                char_dict[char]=1
print(char_dict)

with open("charcount.csv", "w", newline='') as newfile:
    csv_writer=csv.writer(newfile)
    csv_writer.writerow(['character','count'])
    
    for key,value in char_dict.items():
        csv_writer.writerow([key, value])
