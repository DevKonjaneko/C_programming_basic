#include <stdio.h>

char player_name [20];
int damaged = 1;

int apply_damage(int current_hp, int damage){
    int update_hp = current_hp - damage;
    return update_hp;
}

int main(){

    printf("Enter Your Name: ");
    scanf ("%s", player_name);
    int player_hp = 100;
    int player_maxhp = 100;
    
    printf("Name: %s Hp: %d/%d", player_name, player_hp, player_maxhp);

    int damage = 20;
    apply_damage(current_hp, damage);

    printf("Name: %s Hp: %d/%d", player_name, player_hp, player_maxhp);

    return 0;
}