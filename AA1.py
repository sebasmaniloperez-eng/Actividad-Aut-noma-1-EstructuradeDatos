# Lista de compras: ingresar, mostrar y agregar productos.

# 1. Crear una lista vacia.
productos = []

# 2. Pedir tres productos y guardarlos.
print("LISTA DE COMPRAS")
for i in range(3):
    producto = input("Ingrese un producto: ")
    productos.append(producto)

# 3. Mostrar los productos en el orden de ingreso.
print("--------------------")
print("Productos guardados:")
for nombre in productos:
    print("-", nombre)

# 4. Agregar un producto mas al final de la lista.
print("--------------------")
producto = input("Ingrese un producto adicional: ")
productos.append(producto)

# 5. Mostrar la lista actualizada.
print("--------------------")
print("Lista actualizada:")
for nombre in productos:
    print("-", nombre)
