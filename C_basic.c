#include <stdio.h>

char player_name [20];
int weapon_choice;
int level = 1;
int exp = 0;
int damaged = 1;
char inventory[30][60];

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
    
    printf("Select Your Weapons\n");
    printf("1_Sword\n2_Staff\n3_Dagger\n");
    scanf("%d", &weapon_choice);
    switch(weapon_choice){
    case 1:
        printf("Your selected: Sword\n");
        //added wood_sword
        break;
    case 2:
        printf("Your selected: Staff\n");
        //added wood_staff
        break;
    case 3:
        printf("Your selected: Dagger\n");
        //added wood_dagger
        break;
    default:
        printf("Invalid choice! Default weapon: Fist\n");
        break;
    }

    int damage = 10;
    player_hp = apply_damage(player_hp, damage);
    if(is_death(player_hp)){
        printf("Game Over!\n");
    }

    printf("Name: %s Hp: %d/%d\n", player_name, player_hp, player_maxhp);
    return 0;
}