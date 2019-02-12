#include <vector>
#include <iostream>

bool c_v_pattern(std::string s) {
	for(int i = 0; i < s.size(); i+=2) {
		if((s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') ||
			(s[i] =='u') || (s[i]=='y')) {
			return false;
		}
		if((i+1) >= s.size()){return true;}
		if((s[i+1]!='a') && (s[i+1]!='e') && (s[i+1]!='i') &&
		   (s[i+1]!='o') && (s[i+1] !='u') && (s[i+1]!='y')) {
			return false;
		}
	}
	return true;
}

bool v_c_pattern(std::string s) {
	for(int i = 0; i < s.size(); i+=2) {
                if( (s[i]!='a') && (s[i]!='e') && (s[i]!='i') &&
                   (s[i]!='o') && (s[i] !='u') && (s[i]!='y')) {
                        return false;
                }
                if((i+1) >= s.size()){return true;}
                if((s[i+1]=='a') || (s[i+1]=='e') ||(s[i+1]=='i') ||
                    (s[i+1]=='o') ||(s[i+1] =='u') ||(s[i+1]=='y')) {
                        return false;
                }
        }
        return true;
};


int main() {

std::vector<std::string> states = {
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
};

for(auto state: states) {
	if( (c_v_pattern(state)) || (v_c_pattern(state))) {
		std::cout << state << std::endl;
	}
}

return 0;
}
