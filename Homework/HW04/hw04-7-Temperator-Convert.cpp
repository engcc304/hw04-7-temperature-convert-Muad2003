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
    int C ;
    printf( "User input :\n" ) ;
    scanf( "%d", &C ) ;

    float fahrenheit = 1.8 * C + 32 ;
    printf( "%d degree Celsius = %0.1f degree Fahrenheit", C , fahrenheit ) ;

    return 0;
}
