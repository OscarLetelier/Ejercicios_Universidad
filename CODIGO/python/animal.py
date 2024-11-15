#Clase Base de Animal
class Animal:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad
    
    def hacerSonido(self):
        print("Sonido genérico")

#Clase Derivadas de Animal
class Perro(Animal):
    def __init__(self, nombre, edad, raza):
        super().__init__(nombre, edad)
        self.raza = raza
    def hacerSonido(self):
        print("Guau!!") #Sonido del Perro
    def __str__(self):
        return(f"Perro: Nombre = {self.nombre}, Edad = {self.edad}, Raza = {self.raza}")

class Gato(Animal):
    def __init__(self, nombre, edad, color_pelaje):
        super().__init__(nombre, edad)
        self.color_pelaje = color_pelaje
    def hacerSonido(self):
        print("Miau!!") #Sonido del Gato
    def __str__(self):
        return(f"Perro: Nombre = {self.nombre}, Edad = {self.edad}, Color de Pelaje = {self.color_pelaje}")

class Pato(Animal):
    def __init__(self, nombre, edad, color_plumaje):
        super().__init__(nombre, edad)
        self.color_plumaje = color_plumaje
    def hacerSonido(self):
        print("Cuac Cuac!!") #Sonido del Pato
    def __str__(self):
        return(f"Perro: Nombre = {self.nombre}, Edad = {self.edad}, Color de Plumaje = {self.color_plumaje}")

def solicitar_edad():
    while True:
        try:
            edad = int(input("Ingresa la edad (En Numeros Enteros): "))
            return edad
        except ValueError:
            print("Error: La edad debe ser un numero entero. Vuelva a Intentarlo.")


#Interfaz de Consola
def main():
    print("Bienvenido a nuestro gestor de animales.")
    print("1. Perro")
    print("2. Gato")
    print("3. Pato")

    # Elección del tipo de animal
    opcion = int(input("Elige una opción (1-3): "))
    if opcion == 1:
        # Datos para la clase Perro
        nombre = input("Ingresa el nombre del perro: ")
        edad = solicitar_edad()
        raza = input("Ingresa la raza del perro: ")
        animal = Perro(nombre, edad, raza)
    elif opcion == 2:
        # Datos para la clase Gato
        nombre = input("Ingresa el nombre del gato: ")
        edad = solicitar_edad()
        color_pelaje = input("Ingresa el color del pelaje del gato: ")
        animal = Gato(nombre, edad, color_pelaje)
    elif opcion == 3:
        # Datos para la clase Pato
        nombre = input("Ingresa el nombre del pato: ")
        edad = solicitar_edad()
        color_plumaje = input("Ingresa el color del plumaje del pato: ")
        animal = Pato(nombre, edad, color_plumaje)
    else:
        print("Opción no válida. Por favor, elige entre 1 y 3.")
        return
    # Muestra la información del animal y el sonido
    print("\nDatos del animal ingresados:")
    print(animal)
    animal.hacerSonido()

# Ejecución del programa principal
if __name__ == "__main__":
    main() 
    
