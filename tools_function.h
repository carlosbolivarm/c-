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

    // Calculator variables
    double first_num, second_num, answer;
    std::string input1_calc;
    std::string input2_calc;
    bool is_num1_calc = true;
    bool is_num2_calc = true;
    char operation;

    // Unit converter variables
    std::string input_unit;
    bool is_num_unit = true;
    double km, miles, meters;

    // Currency converter variables
    std::string input_curr;
    bool is_num_curr = true;
    double usd, eur, gbp;
};


#endif
