import csv

with open(r'Lab Practice\PYTHON\details.csv','r') as file:
    csv_reader=csv.reader(file)

    with open(r'Lab Practice\PYTHON\result.csv','w',newline='') as newfile:
        csv_writer=csv.writer(newfile)

        for i in csv_reader:
            csv_writer.writerow(i)
            print(i)


