a = input("Enter the data frame in capitals : ")
s,d,r = "","",""
l = 0
for i in range(a.count("DLE")):
    p = a.find("DLE",l,len(a))
    for i in range(l,p):
        s += a[i]
        d += a[i]
        l += 1
    s += "DLEDLE"
    d += "DLE@"
    l += 3
print("The stuffed data is :",s)
for i in d:
    if i != "@":
        r += i
print("The Destuffed data is :",r)