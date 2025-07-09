# Repeat program 4 for a list of such words to be censored.
words = ["wtf","cunt","fuck","bastard","mf"]
with open("Censored.txt") as f:
    censor = f.read()
    censor = censor.lower()
    for word in words:
        censor = censor.replace(word,"*" * len(word))
with open("Censored.txt","w") as f:
    f.write(censor)