#include <iostream>
#include "tools_function.h"

// Calculator function declaration
int tools::calculator() {
    // While loop to return if the input is an invalid option
    while(true){
        // Input to ask user for first number
        std::cout << "\n\nEnter first number: ";
        std::cin >> input1_calc;

        // Try-catch statement to check if the input is a number
        try {
            first_num = std::stod(input1_calc);
        }
        catch (const std::invalid_argument& ia) {
            is_num1_calc = false;
        }

        // If statement to print error message if the user input is not a number
        if (!is_num1_calc){
            std::cout << "\n\tInvalid input. Please enter a number!"
                         "\n*********************************************";
            is_num1_calc = true;
            continue;
        }

        // Input to ask user for the type of operation desired to use
        std::cout << "\nEnter operation (+, -, *, /): ";
        std::cin >> operation;

        // Input to ask user for second number
        std::cout << "\nEnter second number: ";
        std::cin >> input2_calc;

        // Try-catch statement to check if the input is a number
        try {
            second_num = std::stod(input2_calc);
        }
        catch (const std::invalid_argument& ia) {
            is_num2_calc = false;
        }

        // If statement to print error message if the user input is not a number
        if (!is_num2_calc){
            std::cout << "\n\tInvalid input. Please enter a number!"
                         "\n*********************************************";
            is_num2_calc = true;
            continue;
        }

        // If-else statements to get results
        if (operation == '+') {
            answer = first_num + second_num;
            printf("\n\n\tYour result is: %.2f", answer);
        }
        else if (operation == '-') {
            answer = first_num - second_num;
            printf("\n\n\tYour result is: %.2f", answer);
        }
        else if (operation == '*') {
            answer = first_num * second_num;
            printf("\n\n\tYour result is: %.2f", answer);
        }
        else if (operation == '/') {
            if (second_num == 0) {
                std::cout << "\n\tCannot divide by zero. Try again!"
                             "\n*********************************************";
                continue;
            }
            answer = first_num / second_num;
            printf("\n\n\tYour result is %.2f", answer);
        }
        else{
            std::cout << "\n\tInvalid operation. Try again!"
                         "\n**************************************";
            continue;
        }

        return 0;
    }
}


// Unit converter function
int tools::unit_converter() {
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
        std::cin >> input_unit;

        // Try-catch statement to check if the input is a number
        try {
            user_choice = std::stod(input_unit);
        }
        catch (const std::invalid_argument& ia) {
            is_num_unit = false;
        }

        // If statement to print error message if the user input is not a number
        if (!is_num_unit){
            std::cout << "\n\tInvalid input. Please enter a number!"
                         "\n*********************************************";
            is_num_unit = true;
            continue;
        }


        // While loop for switch cases, to return if the input is an invalid option
        while (true){
            // Switch statements to get the conversion
            switch (user_choice) {
                case 1:
                    std::cout<<"\nEnter distance in kilometers: ";
                    std::cin>>input_unit;

                    // Try-catch statement to check if the input is a number
                    try {
                        km = std::stod(input_unit);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_unit = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_unit){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_unit = true;
                        continue;
                    }

                    miles = km * 0.621371;
                    std::cout<<"\n\n\t"<<km<<" kilometers is equal to "<<miles<<" miles";
                    break;

                case 2:
                    std::cout<<"\nEnter distance in miles: ";
                    std::cin>>input_unit;

                    // Try-catch statement to check if the input is a number
                    try {
                        miles = std::stod(input_unit);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_unit = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_unit){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_unit = true;
                        continue;
                    }

                    km = miles / 0.621371;
                    std::cout<<"\n\n\t"<<miles<<" miles is equal to "<<km<<" kilometers";
                    break;

                case 3:
                    std::cout<<"\nEnter distance in meters: ";
                    std::cin>>input_unit;

                    // Try-catch statement to check if the input is a number
                    try {
                        meters = std::stod(input_unit);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_unit = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_unit){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_unit = true;
                        continue;
                    }

                    km = meters / 1000;
                    std::cout<<"\n\n\t"<<meters<<" meters is equal to "<<km<<" kilometers";
                    break;

                case 4:
                    std::cout<<"\nEnter distance in kilometers: ";
                    std::cin>>input_unit;

                    // Try-catch statement to check if the input is a number
                    try {
                        km = std::stod(input_unit);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_unit = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_unit){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_unit = true;
                        continue;
                    }

                    meters = km * 1000;
                    std::cout<<"\n\n\t"<<km<<" kilometers is equal to "<<meters<<" meters";
                    break;

                case 5:
                    std::cout<<"\nEnter distance in meters: ";
                    std::cin>>input_unit;

                    // Try-catch statement to check if the input is a number
                    try {
                        meters = std::stod(input_unit);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_unit = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_unit){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_unit = true;
                        continue;
                    }

                    miles = meters / 1609.344;
                    std::cout<<"\n\n\t"<<meters<<" meters is equal to "<<miles<<" miles";
                    break;

                case 6:
                    std::cout<<"\nEnter distance in miles: ";
                    std::cin>>input_unit;

                    // Try-catch statement to check if the input is a number
                    try {
                        miles = std::stod(input_unit);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_unit = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_unit){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_unit = true;
                        continue;
                    }

                    meters = miles * 1609.344;
                    std::cout<<"\n\n\t"<<miles<<" miles is equal to "<<meters<<" meters";
                    break;

                case 7:
                    std::cout<<"\nＴｈａｎｋ ｙｏｕ ｆｏｒ ｕｓｉｎｇ ｏｕｒ ｐｒｏｄｕｃｔ！\n"
                               "Ｃｏｍｅ ｂａｃｋ ｓｏｏｎ！\n";
                    exit(0); // Exit the program

                default:
                    std::cout<<"\n\tInvalid option. Try again!"
                               "\n***********************************\n";
                    unit_converter(); // Calling the function again if input is invalid
            }

            return 0;
        }
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
        std::cin>>input_curr;

        // Try-catch statement to check if the input is a number
        try {
            user_choice = std::stod(input_curr);
        }
        catch (const std::invalid_argument& ia) {
            is_num_curr = false;
        }

        // If statement to print error message if the user input is not a number
        if (!is_num_curr){
            std::cout << "\n\tInvalid input. Please enter a number!"
                         "\n*********************************************";
            is_num_curr = true;
            continue;
        }

        // While loop for switch cases, to return if the input is an invalid option
        while (true) {
            // Switch statements to get the conversion
            switch (user_choice) {
                case 1:
                    std::cout<<"\nEnter amount in US Dollars: ";
                    std::cin>>input_curr;

                    // Try-catch statement to check if the input is a number
                    try {
                        usd = std::stod(input_curr);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_curr = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_curr){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_curr = true;
                        continue;
                    }

                    eur = usd * 0.94;
                    std::cout<<"\n\n\t"<<usd<<" dollars are equal to "<<eur<<" euros";
                    break;

                case 2:
                    std::cout<<"\nEnter amount in US Dollars: ";
                    std::cin>>input_curr;

                    // Try-catch statement to check if the input is a number
                    try {
                        usd = std::stod(input_curr);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_curr = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_curr){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_curr = true;
                        continue;
                    }

                    gbp = usd * 0.83;
                    std::cout<<"\n\n\t"<<usd<<" dollars are equal to "<<gbp<<" pounds";
                    break;

                case 3:
                    std::cout<<"\nEnter amount Euros: ";
                    std::cin>>input_curr;

                    // Try-catch statement to check if the input is a number
                    try {
                        eur = std::stod(input_curr);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_curr = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_curr){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_curr = true;
                        continue;
                    }

                    usd = eur * 1.07;
                    std::cout<<"\n\n\t"<<eur<<" euros are equal to "<<usd<<" dollars";
                    break;

                case 4:
                    std::cout<<"\nEnter amount in Euros: ";
                    std::cin>>input_curr;

                    // Try-catch statement to check if the input is a number
                    try {
                        eur = std::stod(input_curr);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_curr = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_curr){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_curr = true;
                        continue;
                    }

                    gbp = eur * 0.87;
                    std::cout<<"\n\n\t"<<eur<<" euros are equal to "<<gbp<<" pounds";
                    break;

                case 5:
                    std::cout<<"\nEnter amount in British Pounds: ";
                    std::cin>>input_curr;

                    // Try-catch statement to check if the input is a number
                    try {
                        gbp = std::stod(input_curr);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_curr = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_curr){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_curr = true;
                        continue;
                    }

                    usd = gbp * 1.2;
                    std::cout<<"\n\n\t"<<gbp<<" pounds are equal to "<<usd<<" dollars";
                    break;

                case 6:
                    std::cout<<"\nEnter amount in British Pounds: ";
                    std::cin>>input_curr;

                    // Try-catch statement to check if the input is a number
                    try {
                        gbp = std::stod(input_curr);
                    }
                    catch (const std::invalid_argument& ia) {
                        is_num_curr = false;
                    }

                    // If statement to print error message if the user input is not a number
                    if (!is_num_curr){
                        std::cout << "\n\tInvalid input. Please enter a number!"
                                     "\n*********************************************\n\n";
                        is_num_curr = true;
                        continue;
                    }

                    eur = gbp * 1.13;
                    std::cout<<"\n\n\t"<<gbp<<" pounds are equal to "<<eur<<" euros";
                    break;

                case 7:
                    std::cout<<"\nＴｈａｎｋ ｙｏｕ ｆｏｒ ｕｓｉｎｇ ｏｕｒ ｐｒｏｄｕｃｔ！\n"
                               "Ｃｏｍｅ ｂａｃｋ ｓｏｏｎ！\n";
                    exit(0); // Exit the program

                default:
                    std::cout<<"\n\tInvalid option. Try again!"
                               "\n***********************************\n";
                    currency_converter(); // Calling the function again if the input is invalid
            }

            return 0;
        }

    }

}

