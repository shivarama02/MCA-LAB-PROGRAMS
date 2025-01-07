class Fan:
    # Constants for speed
    SLOW = 1
    MEDIUM = 2
    FAST = 3

    def __init__(self, speed=SLOW, radius=5, color="blue", on=False):
        # Private fields
        self.__speed = speed
        self.__on = on
        self.__radius = radius
        self.__color = color

    # Accessor (getter) methods
    def get_speed(self):
        return self.__speed

    def is_on(self):
        return self.__on

    def get_radius(self):
        return self.__radius

    def get_color(self):
        return self.__color

    # Mutator (setter) methods
    def set_speed(self, speed):
        self.__speed = speed

    def set_on(self, on):
        self.__on = on

    def set_radius(self, radius):
        self.__radius = radius

    def set_color(self, color):
        self.__color = color


# Function to create a Fan object based on user input
def create_fan():
    print("Enter details for the fan:")
    speed = int(input("Enter speed (1 for SLOW, 2 for MEDIUM, 3 for FAST): "))
    radius = float(input("Enter radius: "))
    color = input("Enter color: ")
    on_input = input("Is the fan on? (yes/no): ").strip().lower()
    on = True if on_input == 'yes' else False

    return Fan(speed, radius, color, on)

# Creating two Fan objects based on user input
fan1 = create_fan()
fan2 = create_fan()

# Displaying properties of both fans
print("\nFan 1:")
print(f"Speed: {fan1.get_speed()}")
print(f"On: {fan1.is_on()}")
print(f"Radius: {fan1.get_radius()}")
print(f"Color: {fan1.get_color()}")

print("\nFan 2:")
print(f"Speed: {fan2.get_speed()}")
print(f"On: {fan2.is_on()}")
print(f"Radius: {fan2.get_radius()}")
print(f"Color: {fan2.get_color()}")
