
# csv file to dictionary

import csv

with open("details.csv", "r") as file:
    csv_reader=csv.DictReader(file)
    for i in csv_reader:
        dict_list=i
        print(dict_list)