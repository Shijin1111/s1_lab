f=open("f.txt",'r')
nf=open("nf.txt",'w')
lines=f.readlines()
print("original file:")
for i in range(0,len(lines)):
    print(lines[i])
    if(i%2!=0):
        nf.write(lines[i])
nf.close()
f.close()
f=open("nf.txt",'r')
lines=f.readlines()
print("new file:")
for i in range(0,len(lines)):
    print(lines[i])