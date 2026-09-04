import random

valores = [round(random.uniform(1, 100), 2) for _ in range(10)]

suma = sum(valores)
promedio = suma / len(valores)

print(f"Valores generados: {valores}")
print(f"Suma: {suma}")
print(f"Promedio: {promedio}")