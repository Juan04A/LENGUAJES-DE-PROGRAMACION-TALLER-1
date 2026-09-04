import random

pares = 0
impares = 0

for _ in range(500):
    valor = random.randint(50, 100)
    if valor % 2 == 0:
        pares += 1
    else:
        impares += 1

print(f"Cantidad de pares: {pares}")
print(f"Cantidad de impares: {impares}")