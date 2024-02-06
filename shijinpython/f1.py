import csv
f=open("f.csv",'r',encoding="utf-8-sig")
r=csv.reader(f)
s=[]
for i in r:
    for j in i:
        s.append(j)
print(s)