/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/

#include<stdio.h>

int main() {
    int N ;
    printf( "User input :\n" ) ;
    scanf( "%d", &N ) ;

    float fahrenheit = N * 33.8 ;
    printf( "%d degree Celsius =  %.1f degree Fahrenheit", N , fahrenheit ) ;

    return 0;
}
