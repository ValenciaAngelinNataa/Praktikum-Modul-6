def hitung(nilai1, nilai2):return nilai1-nilai2
def mutlak(angka):return abs(angka)
a,b,c,d = map(int, input().split())
Hasil = hitung(a,c) + hitung(b,d)
print(mutlak(Hasil))