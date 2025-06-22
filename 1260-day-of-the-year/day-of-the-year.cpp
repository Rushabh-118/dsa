class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        int feb, res=0;

        if((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
            feb = 29;
        else feb = 28;

        switch(month)
        {
            case 2: res+=31; break;
            case 3: res+=31+feb; break;
            case 4: res+=62+feb; break;
            case 5: res+=92+feb; break;
            case 6: res+=123+feb; break;
            case 7: res+=153+feb; break;
            case 8: res+=184+feb; break;
            case 9: res+=215+feb; break;
            case 10: res+=245+feb; break;
            case 11: res+=276+feb; break;
            case 12: res+=306+feb; break;
        }
        res+=day;
        return res;
    }
};