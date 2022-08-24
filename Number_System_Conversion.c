#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 100

void decToBin();
void decToOct();
void decToHex();

void binToDec();
void binToOct();
void binToHex();

void octToDec();
void octToBin();
void octToHex();

void hexToDec();
void hexToBin();
void hexToOct();

int main(){
    int userInput=0;

    while(1){
        printf("########## Welcome To Program. ##############\n");
        printf("\nEnter <1>  : Decimal To Binary.\n\n");
        printf("Enter <2>  : Decimal To Octal.\n\n");
        printf("Enter <3>  : Decimal To Hexadecimal.\n\n");
        printf("Enter <4>  : Binary To Decimal.\n\n");
        printf("Enter <5>  : Binary To Octal.\n\n");
        printf("Enter <6>  : Binary To Hexadecimal.\n\n");
        printf("Enter <7>  : Octal To Decimal.\n\n");
        printf("Enter <8>  : Octal To Binary.\n\n");
        printf("Enter <9>  : Octal To Hexadecimal.\n\n");
        printf("Enter <10> : Hexadecimal To Decimal.\n\n");
        printf("Enter <11> : Hexadecimal To Binary.\n\n");
        printf("Enter <12> : Hexadecimal To Octal.\n\n");
        printf("Enter <0>  : Program exit.\n");
        printf("*********************************************\n");
        printf("Please enter Task Number :>> ");
        scanf("%d",&userInput);
        printf("*********************************************\n");
        if(userInput==1){
            decToBin();
        }else if(userInput==2){
            decToOct();
        }else if(userInput==3){
            decToHex();
        }else if(userInput==4){
            binToDec();
        }else if(userInput==5){
            binToOct();
        }else if(userInput==6){
            binToHex();
        }else if(userInput==7){
            octToDec();
        }else if(userInput==8){
            octToBin();
        }else if(userInput==9){
            octToHex();
        }else if(userInput==10){
            hexToDec();
        }else if(userInput==11){
            hexToBin();
        }else if(userInput==12){
            hexToOct();
        }else if(userInput==0){
            printf("Thank You. Bye Bye!!!!!\n");
            exit(0);
        }else{
            printf("PLEASE ENTER TASK NUMBER BETWEEN 1 and 12.\nThank You.\nPlease enter task number again!!!!!!!!!\n");

        }
        printf("\n.............................................\n\n");
    }

getch();
return 0;
}

// Decimal To Bin
void decToBin(){
    int dec=0;
    int bin_rem[SIZE];
    int x=0;
    int y=0;

    printf("Please enter decimal number: ");
    scanf("%d",&dec);

    while(dec!=0){
        bin_rem[x]=dec%2;
        dec=dec/2;
        x++;
    }
    printf("Binary Number => ");
    for(y=x-1;y>=0;y--){
        printf("%d",bin_rem[y]);
    }

}

// Decimal To Octal
void decToOct(){
    int dec=0;
    int oct_rem[SIZE];
    int x=0;
    int y=0;

    printf("Please enter decimal number: ");
    scanf("%d",&dec);

    while(dec!=0){
        oct_rem[x]=dec%8;
        dec=dec/8;
        x++;
    }
    printf("Octal Number => ");
    for(y=x-1;y>=0;y--){
        printf("%d",oct_rem[y]);
    }

}

// Decimal To Hex
void decToHex(){
    int dec=0;
    int hex_rem[SIZE];
    int x=0;
    int y=0;

    printf("Please enter decimal number: ");
    scanf("%d",&dec);

    while(dec!=0){
        hex_rem[x]=dec%16;
        dec=dec/16;
        x++;
    }
    printf("Hexadecimal  Number => ");
    for(y=x-1;y>=0;y--){
        if(hex_rem[y]>9){
            printf("%c",hex_rem[y]+55);
        }else{
            printf("%d",hex_rem[y]);
        }
    }

}

// Binary To Decimal
void binToDec(){
    int binvalue=0;
    int rem=0;
    int dec=0;
    int i=1;

    printf("Please enter binary number: ");
    scanf("%d",&binvalue);

    while(binvalue!=0){
        rem=binvalue%10;
        dec+=rem*i;
        binvalue=binvalue/10;
        i*=2;
    }
    printf("Decimal Number => %d\n",dec);

}

// Binary To Octal
void binToOct(){
    int binvalue=0;
    int rem=0;
    int dec=0;
    int i=1;
    int oct_rem[SIZE];
    int x=0;
    int y=0;

    printf("Please enter binary number: ");
    scanf("%d",&binvalue);

    while(binvalue!=0){
        rem=binvalue%10;
        dec+=rem*i;
        binvalue=binvalue/10;
        i*=2;
    }
    printf("Decimal Number => %d\n",dec);

    while(dec!=0){
        oct_rem[x]=dec%8;
        dec=dec/8;
        x++;
    }
    printf("Octal Number => ");
    for(y=x-1;y>=0;y--){
        printf("%d",oct_rem[y]);
    }

}

// Binary To Hexadecimal
void binToHex(){
    int binvalue=0;
    int rem=0;
    int dec=0;
    int i=1;
    int hex_rem[SIZE];
    int x=0;
    int y=0;

    printf("Please enter binary number: ");
    scanf("%d",&binvalue);

    while(binvalue!=0){
        rem=binvalue%10;
        dec+=rem*i;
        binvalue=binvalue/10;
        i*=2;
    }
    printf("Decimal Number => %d\n",dec);

    while(dec!=0){
        hex_rem[x]=dec%16;
        dec=dec/16;
        x++;
    }
    printf("Hexadecimal Number => ");
    for(y=x-1;y>=0;y--){
        if(hex_rem[y]>9){
            printf("%c",hex_rem[y]+55);
        }else{
            printf("%d",hex_rem[y]);
        }
    }

}

// Octal to Decimal
void octToDec(){
    int octvalue=0;
    int rem=0;
    int sup=0;
    int decimal=0;

    printf("Please enter octal number: ");
    scanf("%d",&octvalue);

    while(octvalue!=0){
        rem=octvalue%10;
        decimal+=rem*pow(8,sup);
        octvalue=octvalue/10;
        ++sup;
    }

    printf("Decimal Number => %d\n",decimal);
}

// Octal to Binary
void octToBin(){
    int octvalue=0;
    int rem=0;
    int sup=0;
    int dec=0;
    int bin_rem[SIZE];
    int x=0;
    int y=0;

    printf("Please enter octal number: ");
    scanf("%d",&octvalue);

    while(octvalue!=0){
        rem=octvalue%10;
        dec+=rem*pow(8,sup);
        octvalue=octvalue/10;
        ++sup;
    }

    printf("Decimal Number => %d\n",dec);

    while(dec!=0){
        bin_rem[x]=dec%2;
        dec=dec/2;
        x++;
    }
    printf("Binary Number => ");
    for(y=x-1;y>=0;y--){
        printf("%d",bin_rem[y]);
    }

}

// Octal to Hex
void octToHex(){
    int octvalue=0;
    int rem=0;
    int sup=0;
    int dec=0;
    int hex_rem[SIZE];
    int x=0;
    int y=0;

    printf("Please enter octal number: ");
    scanf("%d",&octvalue);

    while(octvalue!=0){
        rem=octvalue%10;
        dec+=rem*pow(8,sup);
        octvalue=octvalue/10;
        ++sup;
    }

    printf("Decimal Number => %d\n",dec);

    while(dec!=0){
        hex_rem[x]=dec%16;
        dec=dec/16;
        x++;
    }
    printf("Hexadecimal Number => ");
    for(y=x-1;y>=0;y--){
        if(hex_rem[y]>9){
            printf("%c",hex_rem[y]+55);
        }else{
            printf("%d",hex_rem[y]);
        }
    }

}

// Hexadecimal to Decimal
void hexToDec(){
    int length=0;
    int i=0;
    int sup=0;
    int dec=0;

    char hex[10];
    printf("Please enter a hexadecimal number: ");
    scanf("%s",hex);

    for(length=0;hex[length]!='\0';++length);

    for(int i=length-1;hex[i]!='\0';i--,++sup){
        if(hex[i]>='0' && hex[i]<='9'){
            dec+=(hex[i]-48)*pow(16,sup);
        }
       if(hex[i]>='A' && hex[i]<='Z'){
            dec+=((hex[i]-65)+10)*pow(16,sup);
       }
       if(hex[i]>='a' && hex[i]<='z'){
            dec+=((hex[i]-97)+10)*pow(16,sup);
       }
    }
    printf("Decimal Number => %d\n",dec);
}

// Hexadecimal to Binary
void hexToBin(){
    int length=0;
    int i=0;
    int sup=0;
    int dec=0;
    int x=0;
    int dec_rem[SIZE];
    int y=0;

    char hex[10];
    printf("Please enter a hexadecimal number: ");
    scanf("%s",hex);

    for(length=0;hex[length]!='\0';++length);

    for(int i=length-1;hex[i]!='\0';i--,++sup){
        if(hex[i]>='0' && hex[i]<='9'){
            dec+=(hex[i]-48)*pow(16,sup);
        }
       if(hex[i]>='A' && hex[i]<='Z'){
            dec+=((hex[i]-65)+10)*pow(16,sup);
       }
       if(hex[i]>='a' && hex[i]<='z'){
            dec+=((hex[i]-97)+10)*pow(16,sup);
       }
    }
    printf("Decimal Number => %d\n",dec);

    while(dec!=0){
        dec_rem[x]=dec%2;
        dec=dec/2;
        x++;
    }
    printf("Binary Number => ");

    for(int y=x-1;y>=0;y--){
        printf("%d",dec_rem[y]);
    }
}

// Hexadecimal to Octal
void hexToOct(){
    int length=0;
    int i=0;
    int sup=0;
    int dec=0;
    int oct_rem[SIZE];
    int x=0;
    int y=0;

    char hex[10];
    printf("Please enter a hexadecimal number: ");
    scanf("%s",hex);

    for(length=0;hex[length]!='\0';++length);

    for(int i=length-1;hex[i]!='\0';i--,++sup){
        if(hex[i]>='0' && hex[i]<='9'){
            dec+=(hex[i]-48)*pow(16,sup);
        }
       if(hex[i]>='A' && hex[i]<='Z'){
            dec+=((hex[i]-65)+10)*pow(16,sup);
       }
       if(hex[i]>='a' && hex[i]<='z'){
            dec+=((hex[i]-97)+10)*pow(16,sup);
       }
    }
    printf("Decimal Number => %d\n",dec);

    while(dec!=0){
        oct_rem[x]=dec%8;
        dec=dec/8;
        x++;
    }
    printf("Octal Number => ");
    for(y=x-1;y>=0;y--){
        printf("%d",oct_rem[y]);
    }

}

