a=1
while a!= 5 :
        print("Pilih program \n1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n5. Exit\n")
        p=float(input("Masukkan Pilihan : "))
        if p== 5 :
            print("Terimakasih, telah menggunakan kalkulator Farlyhaydy H.Djalil\n")
            break
        elif p < 0 or p > 5 : print("Input anda salah, silahkan coba lagi\n")
        else : 
            a=float(input("Masukkan nilai pertama : "))
            b=float(input("Masukkan nilai kedua : "))
            if p== 1 : 
                hasil= a+b 
                print("Hasil Penjumlalahan antara %.2f dengan %.2f adalah %.2f\n\n"%(a, b, hasil))
            elif p== 2 : 
                hasil= a-b 
                print("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n"%(a, b, hasil))
            elif p== 3 : 
                hasil= a*b 
                print("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n"%(a, b, hasil))
            else : 
                hasil= a/b 
                print("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n"%(a, b, hasil))