//using math + string
 string intToRoman(int num) {
        string ans = "";
        
        while (num > 0) {  
            if (num - 1000 >= 0) {
                ans += "M";
                num -= 1000;
            } else if (num >= 900) {
                ans += "CM";
                num -= 900;
            } else if (num - 500 >= 0) {
                ans += "D";
                num -= 500;
            } else if (num >= 400) {
                ans += "CD";
                num -= 400;
            } else if (num - 100 >= 0) {
                num -= 100;
                ans += "C";
            } else if (num >= 90) {
                ans += "XC";
                num -= 90;
            } else if (num - 50 >= 0) {
                ans += "L";
                num -= 50;
            } else if (num >= 40) {
                ans += "XL";
                num -= 40;
            } else if (num - 10 >= 0) {
                ans += "X";
                num -= 10;
            } else if (num >= 9) {
                ans += "IX";
                num -= 9;
            } else if (num - 5 >= 0) {
                ans += "V";
                num -= 5;
            } else if (num >= 4) {
                ans += "IV";
                num -= 4;
            } else {
                ans += "I";
                num--;
            }
        }
        
        return ans;
    }