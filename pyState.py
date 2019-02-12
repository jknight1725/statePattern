states = [
    "alabama",
    "alaska",
    "arizona",
    "arkansas",
    "california",
    "colorado",
    "connecticut",
    "delaware",
    "florida",
    "georgia",
    "hawaii",
    "idaho",
    "illinois",
    "indiana",
    "iowa",
    "kansas",
    "kentucky",
    "louisiana",
    "maine",
    "maryland",
    "massachusetts",
    "michigan",
    "minnesota",
    "mississippi",
    "missouri",
    "montana",
    "nebraska",
    "nevada",
    "newhampshire",
    "newjersey",
    "newmexico",
    "newyork",
    "northcarolina",
    "northdakota",
    "ohio",
    "oklahoma",
    "oregon",
    "pennsylvania",
    "rhodeisland",
    "southcarolina",
    "southdakota",
    "tennessee",
    "texas",
    "utah",
    "vermont",
    "virginia",
    "washington",
    "westvirginia",
    "wisconsin",
    "wyoming"
]


def is_vowel(c):
    if c in "aeiouy":
        return True
    else:
        return False


def is_consonant(c):
    if not is_vowel(c):
        return True
    else:
        return False


def v_c_pattern(s):
    for c in range(0, len(s), 2):
        if is_vowel(s[c]):
            if c + 1 >= len(s):
                return True
            if is_consonant(s[c + 1]):
                continue
            else:
                return False
        else:
            return False
    return True


def c_v_pattern(s):
    for c in range(0, len(s), 2):
        if is_consonant(s[c]):
            if c + 1 >= len(s):
                return True
            if is_vowel((s[c + 1])):
                continue
            else:
                return False
        else:
            return False
    return True


for state in states:
    if v_c_pattern(state) or c_v_pattern(state):
        print(state)
