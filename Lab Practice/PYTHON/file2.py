
# dictionary to csv file 

import csv

mydict=[{"name":"shivarama","place":"kasaragod"},
        {"name":"gokul","place":"malapuram"},
        {"name":"anadhu","place":"kozhikod"},
        {"name":"yadhu","place":"kannur"},
        {"name":"abhishek","place":"alapuzha"},
        ]

with open("dict_csv.csv", "w", newline='') as wfile:
    csv_writer=csv.DictWriter(wfile, fieldnames=["name","place"])
    csv_writer.writeheader()
    csv_writer.writerows(mydict)

with open("dict_csv.csv", "r") as rfile:
    csv_reader=csv.DictReader(rfile, fieldnames=["name","place"])
    for row in csv_reader:
        print(row)
