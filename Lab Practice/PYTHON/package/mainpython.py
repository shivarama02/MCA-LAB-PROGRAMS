# 6. Create a package graphics with modules rectangle, circle and sub-package 3D-graphics with modules cuboid and sphere. Include methods to find area and perimeter of respective figures in each module. Write programs that finds area and perimeter of figures by different importing statements. (Include selective import of modules and import * statements) 


import graphics.circle
from graphics import rectangle as rect
from graphics.threedgraphics.cuboid import *
from graphics.threedgraphics.sphere import perimeter as sphereperimeter
from graphics.threedgraphics.sphere import area as spherearea


cr = int(input("\nEnter radius of circle(r) : "))

print("\nArea of circle : ", graphics.circle.area(cr))
print("Perimeter of circle : ", graphics.circle.perimeter(cr))

rl = int(input("\nEnter length of rectangle(l) : "))
rb = int(input("Enter breadth of rectangle(b) : "))

print("\nArea of rectanlge : ", rect.area(rl,rb))
print("Perimeter of rectangle : ", rect.perimeter(rl,rb))

cl = int(input("\nEnter length of cuboid(l) : "))
cw = int(input("Enter width of cuboid(w) : "))
ch = int(input("Enter height of cuboid(h) : "))

print("\nArea of cuboid : ",area(cl,cw,ch))
print("Perimeter of cuboid : ",perimeter(cl,cw,ch))

pr = int(input("\nEnter radius of sphere(r) : "))

print("\nArea of sphere : ", spherearea(pr))
print("Perimeter of sphere : ",sphereperimeter(pr))
