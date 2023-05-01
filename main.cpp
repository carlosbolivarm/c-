/* 03/22/2023
 Project 2nd deployment
 Carlos Bolivar
 Programming II - COP 3003
 This program functions as a multitasking tool with three different tools:
 1. A calculator for summation, subtraction, multiplication, and division
 2. A unit converter for miles, kilometers, and meters
 3. A currency converter for US Dollars, Euros, and British Pounds
 */

#include <iostream>
#include "tools_function.h"


int main() {
    tools ob1; // Object creation for tools class
    std::string user_name; // Variable creation for user's name

    // Print statement as introduction to the program
    std::cout<<"\n"
               "░██╗░░░░░░░██╗███████╗██╗░░░░░░█████╗░░█████╗░███╗░░░███╗███████╗  ████████╗░█████╗░  ░█████╗░\n"
               "░██║░░██╗░░██║██╔════╝██║░░░░░██╔══██╗██╔══██╗████╗░████║██╔════╝  ╚══██╔══╝██╔══██╗  ██╔══██╗\n"
               "░╚██╗████╗██╔╝█████╗░░██║░░░░░██║░░╚═╝██║░░██║██╔████╔██║█████╗░░  ░░░██║░░░██║░░██║  ███████║\n"
               "░░████╔═████║░██╔══╝░░██║░░░░░██║░░██╗██║░░██║██║╚██╔╝██║██╔══╝░░  ░░░██║░░░██║░░██║  ██╔══██║\n"
               "░░╚██╔╝░╚██╔╝░███████╗███████╗╚█████╔╝╚█████╔╝██║░╚═╝░██║███████╗  ░░░██║░░░╚█████╔╝  ██║░░██║\n"
               "░░░╚═╝░░░╚═╝░░╚══════╝╚══════╝░╚════╝░░╚════╝░╚═╝░░░░░╚═╝╚══════╝  ░░░╚═╝░░░░╚════╝░  ╚═╝░░╚═╝\n"
               "\n"
               "███╗░░░███╗██╗░░░██╗██╗░░░░░████████╗██╗████████╗░█████╗░░██████╗██╗░░██╗██╗███╗░░██╗░██████╗░\n"
               "████╗░████║██║░░░██║██║░░░░░╚══██╔══╝██║╚══██╔══╝██╔══██╗██╔════╝██║░██╔╝██║████╗░██║██╔════╝░\n"
               "██╔████╔██║██║░░░██║██║░░░░░░░░██║░░░██║░░░██║░░░███████║╚█████╗░█████═╝░██║██╔██╗██║██║░░██╗░\n"
               "██║╚██╔╝██║██║░░░██║██║░░░░░░░░██║░░░██║░░░██║░░░██╔══██║░╚═══██╗██╔═██╗░██║██║╚████║██║░░╚██╗\n"
               "██║░╚═╝░██║╚██████╔╝███████╗░░░██║░░░██║░░░██║░░░██║░░██║██████╔╝██║░╚██╗██║██║░╚███║╚██████╔╝\n"
               "╚═╝░░░░░╚═╝░╚═════╝░╚══════╝░░░╚═╝░░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝╚═════╝░╚═╝░░╚═╝╚═╝╚═╝░░╚══╝░╚═════╝░\n"
               "\n"
               "████████╗░█████╗░░█████╗░██╗░░░░░██╗\n"
               "╚══██╔══╝██╔══██╗██╔══██╗██║░░░░░██║\n"
               "░░░██║░░░██║░░██║██║░░██║██║░░░░░██║\n"
               "░░░██║░░░██║░░██║██║░░██║██║░░░░░╚═╝\n"
               "░░░██║░░░╚█████╔╝╚█████╔╝███████╗██╗\n"
               "░░░╚═╝░░░░╚════╝░░╚════╝░╚══════╝╚═╝"
               "\n\n\nEɴᴛᴇʀ ʏᴏᴜʀ ɴᴀᴍᴇ: "; // Print statement to get user's name
    getline(std::cin, user_name);

    std::cout << "\n\t\tWELCOME "<<user_name; // Print statement to welcome the user


    // While loop for main menu to return if the user desire to use a different tool
    while(true){
        // Variable creation
        int user_tool;
        char choice, choice_calc, choice_unit, choice_curr;
        std::string input_menu;
        bool is_num_menu = true;

        // Input to ask the user the tool desired to use
        std::cout <<"\n\t\tChoose one of the following tools to use: (Choose a number)"
                                              "\n\t\t1. Calculator"
                                              "\n\t\t2. Unit converter"
                                              "\n\t\t3. Currency converter"
                                              "\n\t\t4. Exit"
                                              "\n\t\t==> ";
        std::cin >> input_menu;

        // Try and catch to check if the user input is a number
        try {
            user_tool = std::stod(input_menu);
        }
        catch (const std::invalid_argument& ia) {
            is_num_menu = false;
        }

        // If statement to print error message if the user input is not a number
        if (!is_num_menu){
            std::cout << "\n\tInvalid input. Please enter a number!"
                         "\n*********************************************\n\n";
            is_num_menu = true;
            continue;
        }

        // If-else statements to call the function based on user's choice
        if(user_tool == 1){
            // While loop to return to use the same tool if desired
            while(true) {
                std::cout << "\n\n\t\tⓎⓞⓤ ⓗⓐⓥⓔ ⓒⓗⓞⓢⓔⓝ ⓣⓗⓔ ⓒⓐⓛⓒⓤⓛⓐⓣⓞⓡ❕";
                ob1.calculator(); // Calling calculator function

                std::cout << "\n\nDo you want to use the calculator again? If yes, type 'Y', if no, type 'N': ";
                std::cin >> choice_calc;

                // If-else statement to check if the user wants to use the calculator again
                if (choice_calc == 'Y' || choice_calc == 'y') {
                    continue;
                } else
                    break;
            }
        }
        else if(user_tool == 2){
            // While loop to return to use the same tool if desired
            while(true){
                std::cout << "\n\n\t\tⓎⓞⓤ ⓗⓐⓥⓔ ⓒⓗⓞⓢⓔⓝ ⓣⓗⓔ ⓤⓝⓘⓣ ⓒⓞⓝⓥⓔⓡⓣⓔⓡ❕";
                ob1.unit_converter(); // Calling unit converter function

                std::cout << "\n\nDo you want to use the unit converter again? If yes, type 'Y', if no, type 'N': ";
                std::cin >> choice_unit;

                // If-else statement to check if the user wants to use the unit converter again
                if (choice_unit == 'Y' || choice_unit == 'y') {
                    continue;
                }
                else
                    break;
            }
        }
        else if(user_tool == 3){
            // While loop to return to use the same tool if desired
            while(true){
                std::cout << "\n\n\t\tⓎⓞⓤ ⓗⓐⓥⓔ ⓒⓗⓞⓢⓔⓝ ⓣⓗⓔ ⓒⓤⓡⓡⓔⓝⓒⓨ ⓒⓞⓝⓥⓔⓡⓣⓔⓡ❕";
                ob1.currency_converter(); // Calling currency converter function

                std::cout << "\n\nDo you want to use the currency converter again? If yes, type 'Y', if no, type 'N': ";
                std::cin >> choice_curr;

                // If-else statement to check if the user wants to use the currency converter again
                if (choice_curr == 'Y' || choice_curr == 'y') {
                    continue;
                }
                else
                    break;
            }
        }
        else if(user_tool == 4){
            break;
        }
        else{
            std::cout<<"\nInvalid option. Try again!\n\n";
            continue;
        }

        // Ask the user if they want to use another tool
        std::cout << "\nDo you want to use another tool? If yes, type 'Y', if no, type 'N': ";
        std::cin >> choice;

        // If-else statement to check if the user wants to use another tool
        if (choice == 'Y' || choice == 'y') {
            continue;
        }
        else
            break;
    }

    // Final print statement to thank the user for using the program
    std::cout << "\nＴｈａｎｋ ｙｏｕ ｆｏｒ ｕｓｉｎｇ ｏｕｒ ｐｒｏｄｕｃｔ！\n"
                 "Ｃｏｍｅ ｂａｃｋ ｓｏｏｎ！\n";


    return 0;
}


