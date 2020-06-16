
bool isIPv4(string& s) {
    if (s.empty() || s.size() > 3)
        return false;

    if (s[0] == '0' && s.size() > 1)
        return false;

    for (auto i : s)
        if (!isdigit(i))
            return false;

    if (stoi(s) < 0 || stoi(s) > 255)
        return false;

    return true;
}

bool isHex(string& s) {
    unordered_set<char> mySet = {'a','b','c','d','e','f','A','B','C','D','E','F'};
    for (auto i : s)
        if (!(isdigit(i) || mySet.count(i) == 1))
            return false;

    return true;
}
     
bool isIPv6(string& s) {
    if (s.size() > 4 || s.size() == 0)
        return false;
    if (!isHex(s))
        return false;

    return true;
}

vector<string> split(string s, char c = ' ') {
    vector<string> res;
    string temp;
    istringstream is(s);

    while (getline(is, temp, c)) {
        res.push_back(temp);
    }

    if (s[s.size()-1] == '.')
        res.push_back("");

    return res;
}

class Solution {
public:
    string validIPAddress(string IP) {
        int dotNo = count(IP.begin(),IP.end(),'.');
        int colonNo = count(IP.begin(),IP.end(),':');

        if (dotNo == 3) {
            vector<string> temp_v4 = split(IP,'.');
            if (all_of(temp_v4.begin(),temp_v4.end(),isIPv4))
                return "IPv4";
        }
        else if (colonNo == 7) {
            vector<string> temp_v6 = split(IP,':');
            if (all_of(temp_v6.begin(),temp_v6.end(),isIPv6))
                return "IPv6";
        }
    
        return "Neither";
    }
};
