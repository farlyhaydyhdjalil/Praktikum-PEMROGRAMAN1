import math
sisiA = 12
sisiC = 5
sisiB =math.sqrt(sisiA * sisiA + sisiC * sisiC)
KelilingSegitiga = sisiA + sisiB + sisiC
LuasSegitiga = 0.5 * sisiA *sisiC
print("Diketahui :")
print("Alas =", sisiC, "cm")
print("Tinggi =", sisiA, "cm\n")
print("Jawab :")
print("Sisi A =", sisiA, "cm")
print("Sisi B =", round(sisiB), "cm")
print("Sisi C =", sisiC, "cm")
print("Keliling =", round(KelilingSegitiga), "cm")
print("Luas =", round(LuasSegitiga), "cm")