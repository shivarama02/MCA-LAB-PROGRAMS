# 3. Create a class Rectangle with private attributes length and width.
# Overload ‘<’ operator to compare the area of 2 rectangles.

class rectangle:
    def __init__(self,length,width):
        self.length=length
        self.width=width

    def area(self):
        return self.length*self.width
    
    def __lt__(self,other):
        return self.area() < other.area()

rect1=rectangle(2,3)
rect2=rectangle(8,7)

print(rect1 < rect2)

# l1=int(input("Enter length of the rectangle1: "))
# w1=int(input("Enter width of the rectangle1: "))
# l2=int(input("Enter length of the rectangle2: "))
# w2=int(input("Enter width of the rectangle2: "))

# rect1 = rectangle(l1, w1)
# rect2 = rectangle(l2,w2)

# print("Area of rectangle1 is ",rect1.area())
# print("Area of rectangle2 is ",rect2.area())

# if rect1 > rect2:
#     print("rectangle1 is greater!")
# else:
#     print("rectangle2 is greater!")
