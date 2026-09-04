import random

N = 25
sucursales = [f"Sucursal {i + 1}" for i in range(N)]
ventas = [random.randint(1000, 10000) for _ in range(N)]

promedio = sum(ventas) / N

print(f"Promedio de ventas: {promedio:.2f}")
print("Sucursales por encima del promedio:")
for i in range(N):
    if ventas[i] > promedio:
        print(f"{sucursales[i]}: {ventas[i]}")