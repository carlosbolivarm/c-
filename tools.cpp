#include <iostream>
#include "tools_function.h"

// Calculator function
int tools::calculator() {
    // Input to ask user for first number
    std::cout << "\n\nEnter first number: ";
    std::cin >> first_num;

    // Input to ask user for the type of operation desired to use
    std::cout << "\nEnter operation (+, -, *, /): ";
    std::cin >> operation;

    // Input to ask user for second number
    std::cout << "\nEnter second number: ";
    std::cin >> second_num;

    // If-else statements to get results
    if (operation == '+') {
        answer = first_num + second_num;
        printf("Your result is: %.2f", answer);
    }
    else if (operation == '-') {
        answer = first_num - second_num;
        printf("Your result is: %.2f", answer);
    }
    else if (operation == '*') {
        answer = first_num * second_num;
        printf("Your result is: %.2f", answer);
    }
    else if (operation == '/') {
        answer = first_num / second_num;
        printf("Your result is %.2f", answer);
    }
    else
        std::cout<<"\nInvalid operator";
}


// Unit converter function
int tools::unit_converter(){
    // While loop to return if the input is an invalid option
    while(true){
        // Input to ask the user for the type of conversion desired
        std::cout<<"\n\nSelect the type of conversion desired: (Choose a number)"
                   "\n1. Kilometers to miles"
                   "\n2. Miles to kilometers"
                   "\n3. Meters to kilometers"
                   "\n4. Kilometers to meters"
                   "\n5. Meters to miles"
                   "\n6. Miles to meters"
                   "\n7. Exit"
                   "\n==> ";
        std::cin>>user_choice;

        // Switch statements to get the conversion
        switch (user_choice) {
            case 1:
                std::cout<<"\nEnter distance in kilometers: ";
                std::cin>>km;
                miles = km * 0.621371;
                std::cout<<"\n"<<km<<" kilometers is equal to "<<miles<<" miles";
                break;
            case 2:
                std::cout<<"\nEnter distance in miles: ";
                std::cin>>miles;
                km = miles / 0.621371;
                std::cout<<"\n"<<miles<<" miles is equal to "<<km<<" kilometers";
                break;
            case 3:
                std::cout<<"\nEnter distance in meters: ";
                std::cin>>meters;
                km = meters / 1000;
                std::cout<<"\n"<<meters<<" meters is equal to "<<km<<" kilometers";
                break;
            case 4:
                std::cout<<"\nEnter distance in kilometers: ";
                std::cin>>km;
                meters = km * 1000;
                std::cout<<"\n"<<km<<" kilometers is equal to "<<meters<<" meters";
                break;
            case 5:
                std::cout<<"\nEnter distance in meters: ";
                std::cin>>meters;
                miles = meters / 1609.344;
                std::cout<<"\n"<<meters<<" meters is equal to "<<miles<<" miles";
                break;
            case 6:
                std::cout<<"\nEnter distance in miles: ";
                std::cin>>miles;
                meters = miles * 1609.344;
                std::cout<<"\n"<<miles<<" miles is equal to "<<meters<<" meters";
                break;
            case 7:
                std::cout<<"\nＴｈａｎｋ ｙｏｕ ｆｏｒ ｕｓｉｎｇ ｏｕｒ ｐｒｏｄｕｃｔ！\n"
                           "Ｃｏｍｅ ｂａｃｋ ｓｏｏｎ！\n";
                exit(0);
            default:
                std::cout<<"\nInvalid option. Try again!\n\n";
                continue;
        }

        return 0;
    }

}


// Unit converter function
int tools::currency_converter(){
    // While loop to return if the input is an invalid option
    while(true){
        // Input to ask the user for the type of conversion desired
        std::cout<<"\n\nSelect the type of conversion desired: (Choose a number)"
                   "\n1. US Dollars (USD) to Euros (EUR)"
                   "\n2. US Dollars (USD) to British Pounds (GBP)"
                   "\n3. Euros (EUR) to US Dollars (USD)"
                   "\n4. Euros (EUR) to British Pounds (GBP)"
                   "\n5. British Pounds (GBP) to US Dollars (USD)"
                   "\n6. British Pounds (GBP) to Euros (EUR)"
                   "\n7. Exit"
                   "\n==> ";
        std::cin>>user_choice;

        // Switch statements to get the conversion
        switch (user_choice) {
            case 1:
                std::cout<<"\nEnter amount in US Dollars: ";
                std::cin>>usd;
                eur = usd * 0.94;
                std::cout<<"\n"<<usd<<" dollars are equal to "<<eur<<" euros";
                break;
            case 2:
                std::cout<<"\nEnter amount in US Dollars: ";
                std::cin>>usd;
                gbp = usd * 0.83;
                std::cout<<"\n"<<usd<<" dollars are equal to "<<gbp<<" pounds";
                break;
            case 3:
                std::cout<<"\nEnter amount Euros: ";
                std::cin>>eur;
                usd = eur * 1.07;
                std::cout<<"\n"<<eur<<" euros are equal to "<<usd<<" dollars";
                break;
            case 4:
                std::cout<<"\nEnter amount in Euros: ";
                std::cin>>eur;
                gbp = eur * 0.87;
                std::cout<<"\n"<<eur<<" euros are equal to "<<gbp<<" pounds";
                break;
            case 5:
                std::cout<<"\nEnter amount in British Pounds: ";
                std::cin>>gbp;
                usd = gbp * 1.2;
                std::cout<<"\n"<<gbp<<" pounds are equal to "<<usd<<" dollars";
                break;
            case 6:
                std::cout<<"\nEnter amount in British Pounds: ";
                std::cin>>gbp;
                eur = gbp * 1.13;
                std::cout<<"\n"<<gbp<<" pounds are equal to "<<eur<<" euros";
                break;
            case 7:
                std::cout<<"\nＴｈａｎｋ ｙｏｕ ｆｏｒ ｕｓｉｎｇ ｏｕｒ ｐｒｏｄｕｃｔ！\n"
                           "Ｃｏｍｅ ｂａｃｋ ｓｏｏｎ！\n";
                exit(0);
            default:
                std::cout<<"\nInvalid option. Try again!\n\n";
                continue;
        }

        return 0;
    }

}
