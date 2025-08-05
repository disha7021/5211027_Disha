char* timeConversion(char* s) {
 static char result[9];
 int hour,minute,second;
 char period[3];
 sscanf(s,"%2d:%2d:%2d%2s",&hour,&minute,&second,period);
 
 if (strcmp(period, "AM") == 0) {
    if (hour == 12)
        hour = 0;
} else if (strcmp(period, "PM") == 0) {
    if (hour != 12)
        hour += 12;
}
sprintf(result, "%02d:%02d:%02d", hour, minute, second);
return result;
    }