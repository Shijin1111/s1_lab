str=input("enter string")
if(str.endswith("ing")):
    nstr=str[0:-3]+"ly"
else:nstr=str+"ing"
print(nstr)