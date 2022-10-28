I=0
while True:
    I=I+1
    i =int(input())
    h =int(i/84600)
    j =int((i/3600) % 24)
    m =int((i/60) % 60) 
    d =int(i % 60)
    if (i <= 3600):
        print("%.2d:%.2d:%.2d\n\n" % (j,m,d))
    elif (i >= 3600 and i < 84600):
        print("%.2d:%.2d:%.2d\n\n" % (j,m,d))
    elif (i >= 84600):
        print("%d hari %.2d:%.2d:%.2d\n" % (h,j,m,d))
    if (I>4) :
        break
    