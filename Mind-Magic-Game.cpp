/*
=============================THE MIND MAGIC=======================================
-BY Adinovap20
-PROJECT 1 ==> THE MIND MAGIC GAME
==================================================================================
*/

#include <iostream>
using namespace std;

#define card1(); cout << "\n\n\n\n******************CARD NO 1******************\n\n"; cout << "|4   20  36  52  68  84  100|\n|5   21  37  53  69  85     |\n|6   22  38  54  70  86      |\n|7   23  39  55  71  87     |\n|12  28  44  60  76  92     |\n|13  29  45  61  77  93     |\n|14  30  46  62  78  94     |\n|15  31  47  63  79  95     |\n\n";
#define card2(); cout << "\n\n\n\n******************CARD NO 2******************\n\n"; cout << "|8   15  30  45  60  75  90 |\n|9   24  31  46  61  76  91 |\n|10  25  40  47  62  77  92 |\n|11  26  41  56  63  78  93 |\n|12  27  42  57  72  79  94 |\n|13  28  43  58  73  88  95 |\n|14  29  44  59  74  89     |\n\n";
#define card3(); cout << "\n\n\n\n******************CARD NO 3******************\n\n"; cout << "|2   18  34  50  66  82  98 |\n|3   19  35  51  67  83  99 |\n|6   22  38  54  70  86      |\n|7   23  39  55  71  87     |\n|10  26  42  58  74  90     |\n|11  27  43  59  75  91     |\n|14  30  46  62  78  94     |\n|15  31  47  63  79  95     |\n\n";
#define card4(); cout << "\n\n\n\n******************CARD NO 4******************\n\n"; cout << "|1   17  33  49  65  81  97 |\n|3   19  35  51  67  83  99 |\n|5   21  37  53  69  85     |\n|7   23  39  55  71  87     |\n|9   25  41  57  73  89     |\n|11  27  43  59  75  91     |\n|13  29  45  61  77  93     |\n|15  31  47  63  79  95     |\n\n";
#define card5(); cout << "\n\n\n\n******************CARD NO 5******************\n\n"; cout << "|32  39  46  53  60  99 |\n|33  40  47  54  61  100|\n|34  41  48  55  62     |\n|35  42  49  56  63     |\n|36  43  50  57  96     |\n|37  44  51  58  97     |\n|38  45  52  59  98     |\n\n";
#define card6(); cout << "\n\n\n\n******************CARD NO 6******************\n\n"; cout << "|16  23  30  53  60  83  90|\n|17  24  31  54  61  84  91|\n|18  25  48  55  62  85  92|\n|19  26  49  56  63  86  93|\n|20  27  50  57  80  87  94|\n|21  28  51  58  81  88  95|\n|22  29  52  59  82  89    |\n\n";
#define card7(); cout << "\n\n\n\n******************CARD NO 7******************\n\n"; cout << "|64  71  78  85  92  99 |\n|65  72  79  86  93  100|\n|66  73  80  87  94     |\n|67  74  81  88  95     |\n|68  75  82  89  96     |\n|69  76  83  90  97     |\n|70  77  84  91  98     |\n\n";

int num=0;

void check7(int num){
    card7();
    char yn;
    cout << "Is your favourite number present in this card?Type 'y' if yes and 'n' if no:";
    cin >> yn;
    if(yn=='y' || yn=='Y'){
        num = num+64;
    }else{
        num = num;
    }
    cout << "\n\n=================================================\n\n";
    cout << "As far as I know you, you have selected the number " << num << "\n\n";
}

void check6(int num){
    card6();
    char yn;
    cout << "Is your favourite number present in this card?Type 'y' if yes and 'n' if no:";
    cin >> yn;
    if(yn=='y' || yn=='Y'){
        num = num+16;
    }else{
        num = num;
    }
    check7(num);
}

void check5(int num){
    card5();
    char yn;
    cout << "Is your favourite number present in this card?Type 'y' if yes and 'n' if no:";
    cin >> yn;
    if(yn=='y' || yn=='Y'){
        num = num+32;
    }else{
        num = num;
    }
    check6(num);
}

void check4(int num){
    card4();
    char yn;
    cout << "Is your favourite number present in this card?Type 'y' if yes and 'n' if no:";
    cin >> yn;
    if(yn=='y'||yn=='Y'){
        num = num+1;
    }else{
        num = num;
    }
    check5(num);
}

void check3(int num){
    card3();
    char yn;
    cout << "Is your favourite number present in this card?Type 'y' if yes and 'n' if no:";
    cin >> yn;
    if(yn=='y'||yn=='Y'){
        num = num+2;
    }else{
        num = num;
    }
    check4(num);
}

void check2(int num){
    card2();
    char yn;
    cout << "Is your favourite number present in this card?Type 'y' if yes and 'n' if no:";
    cin >> yn;
    if(yn=='y' || yn=='Y'){
        num = num+8;
    }else{
        num = num;
    }
    check3(num);
}
             
void check1(int num){
    card1();
    char yn;
    cout << "Is your favourite number present in this card?Type 'y' if yes and 'n' if no:";
    cin >> yn;
    if(yn=='y' || yn=='Y'){
        num = num+4;
    }else{
        num = num;
    }
    check2(num);
}

void play(){
    int n,i,a=0;
    int arr[7]={4,8,2,1,32,16,64};
    char yes;
    cout << "\nSTARTING..........\n";
    cout << "\n\n=========================================================================\n\n";
    cout << "Remember a number between 1 to 100 and do not tell it to anyone...\n";
    cout << "Are you ready with the number?? If yes then type y..";
    cin >> yes;
    if(yes=='y' || yes=='Y'){
        check1(num);
        
    }
}

void instructions(){
    char a;
    cout << "\n\n========================================================\n\n";
    cout << "*********************INSTRUCTIONS*********************\n\n";
    cout << "First of all you need to keep one particular number in your mind.It can be your favourite number also.\n";
    cout << "Once that is done, you will be given seven cards..Out of which you have to choose in how many cards your favourite number is present..Then you also need to write the card numbers as input..\n\n";
    cout << "For example, if my favourite number is present in card 1,2,3,4 and 6 then I will write 1 2 3 4 6...\n\n";
    cout << "I know each and everything which is there in your mind..I can predict correctly what is your favourite number...\n\n";
    cout << "Do you want to test me?Click p to play the game - 'MIND MAGIC' : ";
    cin >> a;
    if(a=='p' || a=='P'){
        play();
    }
}

void stop(){
    //Do nothing
}

int main(){
    char command;
    cout << "Hello! A warm welcome to you in 'MIND MAGIC' game developed by Aditya P...\n";
    cout << "=============================================================================\n";
    cout << "This game can read everything in your mind...\n";
    cout << "To understand the instructions, type 'i'..To start playing the game, type 'p'..To leave the game, type 'e'...";
    cin >> command;
    if(command=='i' || command=='I'){
        instructions();
    }else if(command=='p' || command=='P'){
        play();
    }else{
        stop();
    }
    return 0;
}