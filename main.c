/*
 * main.c
 * This file is part of NumSys Converter
 *
 * Copyright (C) 2020 - Kutlay KIZIL
 *
 * NumSys Converter is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * NumSys Converter is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with NumSys Converter. If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <math.h>

//Calculators
long int decimal_to_binary(int Gizem)
{
    long int binary = 0;
    int remainder, i, flag = 1;
    for(i = 1; Gizem != 0; i = i * 10)
    {
        remainder = Gizem % 2;
        Gizem /= 2;
        binary += remainder * i;
    }
    return binary;
}
int decimal_to_octal(int Beril)
{
    int octal = 0, i = 1;
    while (Beril != 0)
    {
        octal += (Beril % 8) * i;
        Beril /= 8;
        i *= 10;
    }
    return octal;
}
int binary_to_octal(long int İlayda)
{
    int octal = 0, decimal = 0, i = 0;
    while(İlayda != 0)
    {
        decimal += (İlayda%10) * pow(2,i);
        ++i;
        İlayda/=10;
    }
    i = 1;
    while (decimal != 0)
    {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}
int binary_to_decimal(long int Eylül)
{
    int decimal = 0, i = 0, remainder;
    while (Eylül!=0)
    {
        remainder = Eylül%10;
        Eylül /= 10;
        decimal += remainder*pow(2,i);
        ++i;
    }
    return decimal;
}
long long octal_to_binary(int Irena)
{
    int decimal = 0, i = 0;
    long long binary = 0;
    while(Irena != 0)
    {
        decimal += (Irena%10) * pow(8,i);
        ++i;
        Irena/=10;
    }
    i = 1;
    while (decimal != 0)
    {
        binary += (decimal % 2) * i;
        decimal /= 2;
        i *= 10;
    }
    return binary;
}
long int octal_to_decimal(int Azra)
{
    int decimal = 0, i = 0;
    while(Azra != 0)
    {
        decimal += (Azra%10) * pow(8,i);
        ++i;
        Azra/=10;
    }
    i = 1;
    return decimal;
}

//Colours
void red () //Bold
{
    printf("\033[1;31m");
}
void green () //Bold
{
    printf("\033[1;32m");
}
void yellow () 
{
    printf("\033[0;33m");
}
void reset ()
{
    printf("\033[0m");
}

//Main
int main(void)
{
    green(), printf("Welcome, this program let's you convert binary, decimal and octal number systems to each other. Have Fun!\n");
    int from, decimalto, binaryto, octalto;
    int Gizem, Beril, Irena, Azra;
    long int İlayda, Eylül;
    long int Narlıdere, Çamlı;
    int Güzelbahçe, İstihkam, Yelki;
    long long GornjiMilanovac;
    while(1)
    {
        reset(), printf("\nPlease select which number system you would like to convert from.\n1-Decimal\n2-Binary\n3-Octal\n4-Exit\n:");
        scanf("%d", &from);
        switch (from)
        {
            case 1:
                reset(), printf("\nWhich number system you would like to convert to?\n1-Binary\n2-Octal\n:");
                scanf("%d", &decimalto);
                switch (decimalto)
                {
                    case 1:
                        yellow(), printf("\nEnter the decimal number\n:");
                        scanf("%d", &Gizem);
                        Narlıdere = decimal_to_binary(Gizem);
                        green(), printf("%li\n", Narlıdere);
                        reset(), printf("\nPress 'Enter' to return back");
                        getchar();
                        getchar();
                    break;

                    case 2:
                        yellow(), printf("\nEnter the decimal number\n:");
                        scanf("%d", &Beril);
                        Güzelbahçe = decimal_to_octal(Beril);
                        green(), printf("%d\n", Güzelbahçe);
                        reset(), printf("\nPress 'Enter' to return back");
                        getchar();
                        getchar();
                    break;

                    default:
                        red(), printf("\nENTER A CORRECT NUMBER\n");
                    break;
                }
            break;

            case 2:
                reset(), printf("\nWhich number system you would like to convert to?\n1-Octal\n2-Decimal\n:");
                scanf("%d", &binaryto);
                switch (binaryto)
                {
                    case 1:
                        yellow(), printf("\nEnter the binary number\n:");
                        scanf("%ld", &İlayda);
                        İstihkam = binary_to_octal(İlayda);
                        green(), printf("%d\n", İstihkam);
                        reset(), printf("\nPress 'Enter' to return back");
                        getchar();
                        getchar();
                    break;

                    case 2:
                        yellow(), printf("\nEnter the binary number\n:");
                        scanf("%ld", &Eylül);
                        Yelki = binary_to_decimal(Eylül);
                        green(), printf("%d\n", Yelki);
                        reset(), printf("\nPress 'Enter' to return back");
                        getchar();
                        getchar();
                    break;
                
                    default:
                        red(), printf("\nENTER A CORRECT NUMBER\n");
                    break;
                }
            break;

            case 3: 
                reset(), printf("\nWhich number system you would like to convert to?\n1-Binary\n2-Decimal\n:");
                scanf("%d", &octalto);
                switch (octalto)
                {
                    case 1:
                        yellow(), printf("\nEnter the octal number\n:");
                        scanf("%d", &Irena);
                        GornjiMilanovac = octal_to_binary(Irena);
                        green(), printf("%lld\n", GornjiMilanovac);
                        reset(), printf("\nPress 'Enter' to return back");
                        getchar();
                        getchar();
                    break;

                    case 2:
                        yellow(), printf("\nEnter the octal number\n:");
                        scanf("%d", &Azra);
                        Çamlı = octal_to_decimal(Azra);
                        green(), printf("%li\n", Çamlı);
                        reset(), printf("\nPress 'Enter' to return back");
                        getchar();
                        getchar();
                    break;
                
                    default:
                        red(), printf("\nENTER A CORRECT NUMBER\n");
                    break;
                }
            break;

            case 4:
                goto endloop;
                break;
        
            default:
                red(), printf("\nENTER A CORRECT NUMBER\n");
            break;
        }
    }
    endloop:;
    return 0;
}