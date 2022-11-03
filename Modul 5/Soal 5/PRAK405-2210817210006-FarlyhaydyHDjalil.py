a,b = input().split()
a= int(a)
b= int(b)
hasil= 0
hasil2= 0
hasil3= 0
i= 0
while i < a :
    i+= 1
    j= i
    if i== 0:
        break
    while j > 0 :
        j-= 1
        print("(%d * %d)" %(j+1,b),end= " ")
        if(j > 0) :
            print("+",end= " ")
    hasil = i*b
    hasil2 += hasil
    print("= %d" %(hasil2))
    hasil3 += hasil2
print ("%d" %(hasil3))