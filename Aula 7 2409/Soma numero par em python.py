valorE = int(input("Informe o valor inicial!\n"))
if valorE % 2 != 0:
    valorE = valorE + 1
contador = 0
valorS = 0
while contador < 20:
    print(" - ", valorE)
    contador = contador + 1
    valorS += valorE
    valorE += 2
print("A soma total é equivalente:", valorS)
