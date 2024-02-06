a=int(input("enter the first number"))
b=int(input("enter the second number"))
print("1.add \t2.substract \t3.mult \t4.div\t5.exit")
ch=int(input("enter the choice"))
if(ch==1):
    print(a,"+",b,"=",a+b)
elif(ch==2):
    print(a,"-",b,"=",a-b)
elif(ch==3):
    print(a,"*",b,"=",a*b)
elif(ch==4):
    print(a,"/",b,"=",a/b)
elif(ch==5):
    exit(0)