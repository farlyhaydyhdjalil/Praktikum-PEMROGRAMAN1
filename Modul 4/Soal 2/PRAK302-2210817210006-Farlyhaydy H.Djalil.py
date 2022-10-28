i=0
while True:
    i=i+1
    bilangan = int(input())
    if (bilangan >= 80) : 
        print("A\n")
    elif (70 <= bilangan <= 79) : 
        print("B\n")
    elif (60 <= bilangan <= 69) : 
        print("C\n")
    elif (50 <= bilangan <= 59) : 
        print("D\n")
    if (bilangan < 50) :
        print("E\n")
    if(i>4):
        break