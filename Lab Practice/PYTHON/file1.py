
#  csv file to csv file

import csv

with open("details.csv", "r") as file:
    csv_reader=csv.reader(file)

    with open("result.csv", "w") as new_file:
        csv_writer=csv.writer(new_file)
        for row in csv_reader:
            print(row)
