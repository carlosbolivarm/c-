#ifndef PROGRAMMINGII_PROJECT_TOOLS_FUNCTION_H
#define PROGRAMMINGII_PROJECT_TOOLS_FUNCTION_H

// Class creation
class tools{
public:
    // Function calls
    int calculator();
    int unit_converter();
    int currency_converter();

private:
    // Variable declarations
    int user_choice;
    double first_num, second_num;
    char operation;
    double answer;
    double km, miles, meters;
    double usd, eur, gbp;
};


#endif //PROGRAMMINGII_PROJECT_TOOLS_FUNCTION_H
