int digit(char c){
    if (c == 'I' || c == 'i') return 1;
    else if(c == 'V' || c == 'v') return 5;
    else if(c == 'X' || c == 'x') return 10;
    else if(c == 'L' || c == 'l') return 50;
    else if(c == 'C' || c == 'c') return 100;
    else if(c == 'D' || c == 'd') return 500;
    else if(c == 'M' || c == 'm') return 1000;
    return 0;
    
}
int romanToInt(char * s){

    int result = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if ( digit(s[i])>=digit(s[i+1]))
        {
            result += digit(s[i]);
        }else{
            result -= digit(s[i]);
        }
        
    }
    
    return result;
}