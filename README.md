class area:
    base=" "
    height = " "
    def __init__(area,base,height):
        area.base=base
        area.height=height


    def display(area):
        print(f"Area of Triangle : {area.base * area.height}")
(base) = input("Enter base")
(height) = input("Enter height")
triangle=area(int(base),int(height))
triangle.display()
