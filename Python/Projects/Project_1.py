# We all have played snake, water gun game in our childhood. If you haven’t, google the rules of this game and write a python program capable of playing this game with the user
import random
game = ["Snake", "Water", "Gun"]
lower_game = [item.lower() for item in game]
user_choice = input("Snake, Water or Gun?: ")
lower_u_c = user_choice.lower()
if lower_u_c not in lower_game:
   print("Invalid choice")
else:
   computer_choice = random.choice(game)
   print(f"My choice: {computer_choice}")
   if(lower_u_c == computer_choice.lower()):
       print("Haha! It's a Draw")
   elif(lower_u_c == "snake" and computer_choice.lower() == "water" or lower_u_c == "water" and computer_choice.lower() == "gun" or lower_u_c == "gun" and computer_choice.lower() == "snake"):
       print("Ahh! You won")
   elif(lower_u_c == "water" and computer_choice.lower() == "snake" or lower_u_c == "gun" and computer_choice.lower() == "water" or lower_u_c == "snake" and computer_choice.lower() == "gun"):
       print("Yay! You lost")