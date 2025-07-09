# The game() function in a program lets a user play a game and returns the score
# as an integer. You need to read a file ‘Hi-score.txt’ which is either blank or
# contains the previous Hi-score. You need to write a program to update the Hiscore whenever the game() function breaks the Hi-score.
def game():
    score = int(input("Enter your score: "))
    return score
score = game()
with open("Hi-score.txt", "r") as f:
    Hi_score = f.read()
    if Hi_score == "":
        Hi_score = 0
    else:
        Hi_score = int(Hi_score)

if score > Hi_score:
    with open("Hi-score.txt", "w") as f:
        f.write(str(score))
        print("Score Updated")
else:
    print(f"You failed to break your previous hi-score of {Hi_score}")
