#4. Create a class Time with private attributes hour, minute and second. Overload ‘+’ operator to find sum of 2 time.


class time:
    def __init__(self,hour,min,sec):
        self.hour=hour
        self.min=min
        self.sec=sec

    def __add__(self,other):
        c3=time(self.hour,self.min,self.sec)
        c3.hour = self.hour + other.hour
        c3.min = self.min + other.min
        c3.sec = self.sec + other.sec

        if c3.sec >= 60:
            c3.min +=c3.sec // 60
            c3.sec = c3.sec % 60
        
        if c3.min >=60:
            c3.hour += c3.min // 60
            c3.min = c3.min % 60
        
        if c3.hour >=24:
            c3.hour = c3.hour % 24

        return c3
    
    def display(self):
        print(f"{self.hour} : {self.min} : {self.sec}")

c1 = time(12,23,39)
c2 = time(12,55,38)
c3 = c1 + c2
c3.display()