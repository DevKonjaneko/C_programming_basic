#include <stdio.h>

char player_name [20];
int damaged = 1;

int apply_damage(int current_hp, int damage){
    int update_hp = current_hp - damage;
    return update_hp;
}

int is_death(int current_hp){
    if (current_hp == 0){
        printf("Your Death ...\n");
        return 1;
    }
    return 0;
}

int main(){
    printf("Enter Your Name: ");
    scanf ("%s", player_name);
    int player_hp = 100;
    int player_maxhp = 100;
    
    printf("Name: %s Hp: %d/%d\n", player_name, player_hp, player_maxhp);

    int damage = 100;
    player_hp = apply_damage(player_hp, damage);
    if (is_death(player_hp));

    printf("Name: %s Hp: %d/%d\n", player_name, player_hp, player_maxhp);
    return 0;
}