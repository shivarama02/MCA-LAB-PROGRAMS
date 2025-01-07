# 3. Create a class Rectangle with private attributes length and width. Overload ‘<’ operator to compare the area of 2 rectangles.

class rectangle:
    def __init__(self,length,width):
        self.length=length
        self.width=width

    def area(self):
        return self.length*self.width
    
    def __lt__(self,other):
        return self.area() < other.area()

rect1=rectangle(10,5)
rect2=rectangle(8,7)

print(rect1 > rect2)