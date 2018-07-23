class base():
    def __init__(self):
        self.type = ""
        self.speed = 0
    def swim_result(self, distance):
        print("Время преодоления дистанции ", self.type, " = ", distance/self.speed)

class Shark(base):
    def __init__(self):
        self.type = "Shark"
        self.speed = 3

class Human(base):
    def __init__(self):
        self.type = "Human"
        self.speed = 1

class Boat(base):
    def __init__(self):
        self.type = "Boat"
        self.speed = 10

class Factory():
    def build(typ):
        if typ == "Shark":
            return Shark()
        elif typ == "Human":
            return Human()
        elif typ == "Boat":
            return Boat()

s = Factory.build("Shark")
h = Factory.build("Human")
b = Factory.build("Boat")

s.swim_result(100)
h.swim_result(100)
b.swim_result(100)



        