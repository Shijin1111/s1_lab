class Time:
    def __init__(self,h,m,s):
        self.hour=h
        self.min=m
        self.sec=s
    def add(self,a):
        c=Time(0,0,0)
        c.hour=self.hour+a.hour
        c.min=self.min+a.min
        c.sec=self.sec+a.sec
        if(c.sec>=60):
            c.sec-=60
            c.min+=1
        if(c.min>=60):
            c.min-=60
            c.hour+=1
        return c
    def display(self):
        print("Time: ",self.hour,":",self.min,":",self.sec)
x,y,z=map(int,input("Enter Time 1 in (hh:mm:ss): ").split(":"))    
a=Time(x,y,z)
x,y,z=map(int,input("Enter Time 2 in (hh:mm:ss): ").split(":"))    
b=Time(x,y,z)
print("Time 1 + Time 2:")
Time.display(Time.add(a,b))