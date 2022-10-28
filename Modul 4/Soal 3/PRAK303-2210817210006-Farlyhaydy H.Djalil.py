i=0
while True:
    i=i+1
    bil=int(input())
    if (bil > 0):
        print("positif\n")
    elif (bil < 0):
        print("negatif\n")
    else :
        print("nol\n")
    if (i>2):
        break