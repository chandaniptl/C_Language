#include <stdio.h>

int main() {
    int languageChoice, rechargeChoice;

    printf("Welcome to Telecom Call Service\n");
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &languageChoice);

    switch (languageChoice) {
        case 1:
            printf("\nYou have selected English\n");
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &rechargeChoice);
            
            switch (rechargeChoice) {
                case 1:
                    printf("\nYou have successfully done an Internet Recharge.\n");
                    break;
                case 2:
                    printf("\nYou have successfully done a Top-up Recharge.\n");
                    break;
                case 3:
                    printf("\nYou have successfully done a Special Recharge.\n");
                    break;
                default:
                    printf("\nInvalid choice for Recharge.\n");
                    break;
            }
            break;
        
        case 2:
            printf("\nAapne Hindi ko chuna hai.\n");
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &rechargeChoice);
            
            switch (rechargeChoice) {
                case 1:
                    printf("\nAapne Internet Recharge safalta se kiya hai.\n");
                    break;
                case 2:
                    printf("\nAapne Top-up Recharge safalta se kiya hai.\n");
                    break;
                case 3:
                    printf("\nAapne Special Recharge safalta se kiya hai.\n");
                    break;
                default:
                    printf("\nGalat chunaav Recharge ke liye.\n");
                    break;
            }
            break;
        
        case 3:
            printf("\nAapne Gujarati Pasand karo cho.\n");
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &rechargeChoice);
            
            switch (rechargeChoice) {
                case 1:
                    printf("\nTame Internet Recharge safaltapoorvak kariyu chhe.\n");
                    break;
                case 2:
                    printf("\nTame Top-up Recharge safaltapoorvak kariyu chhe.\n");
                    break;
                case 3:
                    printf("\nTame Special Recharge safaltapoorvak kariyu chhe.\n");
                    break;
                default:
                    printf("\nRecharge mate galat chuno.\n");
                    break;
            }
            break;
        
        default:
            printf("\nInvalid language choice.\n");
            break;
    }

    return 0;
}