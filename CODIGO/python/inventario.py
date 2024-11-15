class Producto:
    def __init__(self, nombre, precio, cantidad, codigo, cantidad_minima=10):
        """
        Constructor de la clase Producto. Si no se proporciona una cantidad mínima,
        se establece por defecto en 10.
        """
        self.nombre = nombre
        self.precio = precio
        self.cantidad = cantidad
        self.codigo = codigo
        self.cantidad_minima = cantidad_minima
    
    def mostrar_producto(self):
        """Muestra la información detallada del producto."""
        print(f"\nProducto: {self.nombre}")
        print(f"Precio: ${self.precio}")
        print(f"Cantidad: {self.cantidad}")
        print(f"Código: {self.codigo}")
    
    def verificar_stock(self):
        """
        Verifica si el stock del producto es suficiente.
        Genera una alerta si la cantidad está por debajo del stock mínimo.
        """
        if self.cantidad < self.cantidad_minima:
            print(f"Alerta: El producto {self.nombre} tiene stock bajo ({self.cantidad} unidades).")
            return False
        return True


# Función para agregar productos desde la consola
def agregar_productos(inventario):
    while True:
        print("\n=== Agregar un nuevo producto ===")
        nombre = input("Nombre del producto: ")
        precio = float(input("Precio del producto: "))
        cantidad = int(input("Cantidad en stock: "))
        codigo = input("Código del producto: ")

        # Crear una nueva instancia de Producto
        producto = Producto(nombre, precio, cantidad, codigo)
        inventario.append(producto)

        # Preguntar si se desea agregar otro producto
        continuar = input("¿Deseas agregar otro producto? (s/n): ")
        if continuar.lower() != 's':
            break

    return inventario


# Función para mostrar los productos agregados
def mostrar_inventario(inventario):
    if len(inventario) == 0:
        print("\nNo se ha registrado aún ningún producto en el inventario.")
    else:
        print("\n=== Inventario actual ===")
        for producto in inventario:
            producto.mostrar_producto()
            producto.verificar_stock()


# Función del menú principal
def menu_principal():
    inventario = []
    
    while True:
        print("\n=== Menú Principal ===")
        print("1. Agregar productos")
        print("2. Mostrar inventario")
        print("3. Salir")
        
        opcion = input("Selecciona una opción (1, 2, 3): ")
        
        if opcion == "1":
            inventario = agregar_productos(inventario)
        elif opcion == "2":
            mostrar_inventario(inventario)
        elif opcion == "3":
            print("Saliendo del programa...")
            break
        else:
            print("Opción no válida, intenta nuevamente.")


# Ejecutar el menú principal
if __name__ == "__main__":
    menu_principal()
