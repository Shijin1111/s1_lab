import csv
f=open("f.csv",'r',encoding="utf-8-sig")
r=csv.DictReader(f)
s=[]
age=[]
for i in r:
    s.append(i)
    age.append(i['Age'])
print("table",s)
print("age:",age)