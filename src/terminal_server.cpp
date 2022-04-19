#include <terminal_server.h>

String menu="View current input levels:\n- D: Digital Inputs DI08 - DI13 \n- A: AnalogInputs A0-A5\n- C: Clear Screen"; 
char *get_start_menu_char(String menu){
    char* to_send;
    menu.toCharArray(to_send,menu.length());
    return to_send;
}
char *get_digital_menu_char(String dig_menu){
    //create a for loop for each pins text and the reading of the pin and push it as an char array 
}
char *get_analogue_menu_char(String anal_menu){
    //create a for loop for each pins text and the reading of the pin and push it as an char array 
}