class Publisher:
    def __init__(self,n):
        self.name=n
    def dis(self):
        print("publisher name=",self.name)
class Book(Publisher):
    def __init__(self, n,t,a):
        super().__init__(n)
        self.title=t
        self.author=a
    def dis(self):
        super().dis()
        print("book title=",self.title)
        print("book author=",self.author)
class Python(Book):
    def __init__(self,n,t,a,p,np):
        super().__init__(n,t,a)
        self.price=p
        self.pageno=np
    def dis(self):
        super().dis()
        print("price=",self.price)
        print("no of pages=",self.pageno)
p=Python("shijin","python tutorial","shiijn",540,323)
p.dis()