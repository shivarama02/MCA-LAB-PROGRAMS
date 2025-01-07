# 1. Create Rectangle class with attributes length and breadth and methods to find area and perimeter. Compare two Rectangle objects by their area.



class rectangle:
    def __init__(self,length,breadth):
        self.length=length
        self.breadth=breadth

    def GetArea(self):
        return self.length * self.breadth
    
    def GetPerimeter(self):
        return 2*(self.length + self.breadth)
    
    def __lt__(self,other):
        return self.GetArea() < other.GetArea()
    
    def __gt__(self,other):
        return self.GetArea() > other.GetArea()
    
    def __eq__(self,other):
        return self.GetArea() == other.GetArea()
    
length1 = float(input("\nEnter the length of rectangle1: "))
breadth1 = float(input("Enter the breadth of rectangle1: "))

length2 = float(input("\nEnter the length of rectangle2: "))
breadth2 = float(input("Enter the breadth of rectangle2: "))

rect1 = rectangle(length1, breadth1)
rect2 = rectangle(length2, breadth2)

print("\nArea of rectangle1 is ",rect1.GetArea())
print("Perimeter of rectangle1 is ",rect1.GetPerimeter())

print("\nArea of rectangle2 is ",rect2.GetArea())
print("Perimeter of rectangle2 is ",rect2.GetPerimeter())

if rect1<rect2:
    print("\narea of rectangle1 is less than area of rectangle2")
elif rect1>rect2:
    print("area of rectangle2 is less than area of rectangle1")
else:
    print("rectangle1 and rectangle2 are equal area")
