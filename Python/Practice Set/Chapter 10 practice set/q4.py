class Train:
    def __init__(self, trainNo, fro, to, tier, km):
        self.trainNo = trainNo
        self.fro = fro
        self.to = to
        self.tier = tier
        self.km = km
    
    def book(self):
        print(f"The ticket from {self.fro} to {self.to} is booked successfully.")

    def getStatus(self):
        print(f"Train no {self.trainNo} is running on time.")

    def getFare(self):
        if(self.tier == "1st Ac"):
            t = 4.5

        elif(self.tier == "2nd Ac"):
            t = 3.5

        elif(self.tier == "3rd Ac"):
            t = 2.5

        elif(self.tier == "Sl"):
            t = 1.5

        else:
            t = 0.7

        print(f"The fare in {self.tier} Train no {self.trainNo} from {self.fro} to {self.to} is {self.km*t}")
        
tier = input("Which tier ticket you want to book?: ")
a = Train(12181, "Kota", "Sagar", tier, 423)
a.book()
a.getFare()
a.getStatus()
#This program can be better. 