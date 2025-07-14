# Cricket Team Registration Form

def register_team():
    print("=== Cricket Team Registration Form ===")
    team_name = input("Enter Team Name: ")
    captain_name = input("Enter Captain's Name: ")
    num_players = int(input("Enter Number of Players (excluding captain): "))
    players = []
    for i in range(1, num_players + 1):
        player = input(f"Enter name of player {i}: ")
        players.append(player)
    contact = input("Enter Contact Number: ")
    email = input("Enter Email Address: ")

    print("\n--- Registration Details ---")
    print(f"Team Name: {team_name}")
    print(f"Captain: {captain_name}")
    print("Players:")
    for idx, player in enumerate(players, 1):
        print(f"  {idx}. {player}")
    print(f"Contact: {contact}")
    print(f"Email: {email}")

if __name__ == "__main__":
    register_team()