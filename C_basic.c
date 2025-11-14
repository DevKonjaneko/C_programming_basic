#include <stdio.h>
//Global Variable
char player_name [20];

int main(){
    //Local Variable

    printf("Enter Your Name: ");
    scanf ("%s", player_name);
    int player_hp = 100;
    int player_maxhp = 100;
    
    printf("Name: %s Hp: %d/%d", player_name, player_hp, player_maxhp);

    return 0;
}

/* 
int main():
int  = return type
main = function
return 0;
คืนค่า 0 ให้ระบบปฏิบัติการแสดงว่าโปรแกรมทำงานเสร็จแล้ว
*/