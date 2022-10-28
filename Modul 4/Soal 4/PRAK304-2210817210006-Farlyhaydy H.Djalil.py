i=0
while True:
    i=i+1
    a=int(input())
    if (a>=1 and a<=9):
        print("Satuan\n")
    elif (a<1 and a>-50):
        print("Nol\n")
    elif (a>99):
        print("Anda Menginput Melebihi Limit Bilangan\n")
    elif (a>=20 and a<=99):
        print("Puluhan\n")
    else :
        print("Belasan")
    if (i>4): 
        break