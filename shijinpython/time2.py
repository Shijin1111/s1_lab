class time:
    def __init__(self,h,m,s):
        self.hours=h
        self.minutes=m
        self.seconds=s
    def __add__(self,other):
        c=time(0,0,0)
        c.hours=self.hours+other.hours
        c.minutes=self.minutes+other.minutes
        c.seconds=self.seconds+other.seconds
        if(c.seconds>60):
            c.minutes+=1
            c.seconds-=60
        if(c.minutes>60):
            c.hours+=1
            c.minutes-=60
        return c
    def dis(self):
        print("time:",self.hours,":",self.minutes,":",self.seconds)
x,y,z=map(int,input("enter the first time in hh:mm:ss format").split(":"))
a=time(x,y,z)
x,y,z=map(int,input("enter the second time in hh:mm:ss format").split(":"))
b=time(x,y,z)
print("time1+time2:")
time.dis(a+b)