import csv
import random

# Ler o arquivo CSV contendo as informações das equipes
def read_teams(filename):
    teams = []
    with open(filename, "r") as file:
        reader = csv.reader(file)
        for row in reader:
            team = {"name": row[0], "rating": int(row[1]), "group": row[2]}
            teams.append(team)
    return teams

# Simular a fase de grupos
def simulate_group_stage(teams):
    results = []
    for group in set(team["group"] for team in teams):
        group_teams = [team for team in teams if team["group"] == group]
        group_results = []
        for team in group_teams:
            team_points = 0
            for _ in range(3):
                opponent = random.choice([t for t in group_teams if t != team])
                result = simulate_game(team["rating"], opponent["rating"])
                if result == "win":
                    team_points += 3
                elif result == "draw":
                    team_points += 1
            group_results.append({"team": team, "points": team_points})
        group_results.sort(key=lambda r: (-r["points"], -simulate_goal_diff(r["team"]["rating"], r["team"]["group"], teams])))
        results += group_results
    return results

# Simular as fases eliminatórias
def simulate_knockout_stage(results):
    teams = [result["team"] for result in results]
    round_of_16 = []
    for i in range(0, 16, 2):
        team1 = teams[i]
        team2 = teams[-(i+1)]
        result = simulate_game(team1["rating"], team2["rating"])
        if result == "win":
            round_of_16.append(team1)
        else:
            round_of_16.append(team2)
    quarterfinals = []
    for i in range(0, 8, 2):
        team1 = round_of_16[i]
        team2 = round_of_16[-(i+1)]
        result = simulate_game(team1["rating"], team2["rating"])
        if result == "win":
            quarterfinals.append(team1)
        else:
            quarterfinals.append(team2)
    semifinals = []
    for i in range(0, 4, 2):
        team1 = quarterfinals[i]
        team2 = quarterfinals[-(i+1)]
        result = simulate_game(team1["rating"], team2["rating"])
        if result == "win":
            semifinals.append(team1)
        else:
            semifinals.append(team2)
    final = []
    for i in range(0, 2, 2):
        team1 = semifinals[i]
        team2 = semifinals[-(i+1)]
        result = simulate_game(team1["rating"], team2["rating"])

