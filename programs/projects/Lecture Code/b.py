class Automobile:
    def __init__(self):
        self.__color = "red"
        self.make = "Chevy"
        return
    def getColor(self):
            return self.__color
    def setColor(self, color):
        self.__color=color
        return
def Main():
    MyCar = Automobile()
    YourCar = Automobile()
    print(MyCar.__color)
    print(MyCar.getColor())
    print(MyCar.make)
    MyCar.setColor("Yellow")
    print(MyCar.getColor())

    MyCar.make = "Dodge"
Main()