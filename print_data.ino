/* print_data
 * 
 * Inputs:
 *    Front front
 *    Rear rear
 * Outputs:
 *    nothing
 *  
 * Takes sensor data for front and rear and prints it to console.
 */

#include <RAirGlobals.h>

 void PrintData(Front *front, Rear *rear) {
  
  /* Display list to display "Hello World" at the centre of display area */
    LCD.DLStart();//start the display list. Note DLStart and DLEnd are helper apis, Cmd_DLStart() and Display() can also be utilized.
    LCD.ClearColorRGB(0x210000);// Set background to Red.
    LCD.Clear();
    LCD.ColorRGB(0xA1,0x00,0x00);//set the color of the string to Red color

    PrintSensorData(front->left.bag, 290, 75);
    PrintSensorData(front->right.bag, 450, 75);
    PrintSensorData(rear->left.bag, 290, 200);
    PrintSensorData(rear->right.bag, 450, 200);

     LCD.Begin(FT_LINES);
    LCD.ColorRGB(0x610000);
    LCD.LineWidth(15);

    // Half of Car Ouline
    LCD.Vertex2ii(133 +  237, 30);
    LCD.Vertex2ii(133 +  242, 30);

    LCD.Vertex2ii(133 +  242, 30);
    LCD.Vertex2ii(133 +  248, 30);

    LCD.Vertex2ii(133 +  248, 30);
    LCD.Vertex2ii(133 +  253, 31);

    LCD.Vertex2ii(133 +  253, 31);
    LCD.Vertex2ii(133 +  258, 32);

    LCD.Vertex2ii(133 +  258, 32);
    LCD.Vertex2ii(133 +  263, 34);

    LCD.Vertex2ii(133 +  263, 34);
    LCD.Vertex2ii(133 +  267, 36);

    LCD.Vertex2ii(133 +  267, 36);
    LCD.Vertex2ii(133 +  271, 39);

    LCD.Vertex2ii(133 +  271, 39);
    LCD.Vertex2ii(133 +  273, 42);

    LCD.Vertex2ii(133 +  273, 42);
    LCD.Vertex2ii(133 +  276, 46);

    LCD.Vertex2ii(133 +  276, 46);
    LCD.Vertex2ii(133 +  277, 51);

    LCD.Vertex2ii(133 +  277, 51);
    LCD.Vertex2ii(133 +  279, 57);
    
    LCD.Vertex2ii(133 +  279, 57);
    LCD.Vertex2ii(133 +  279, 62);
    
    LCD.Vertex2ii(133 +  279, 62);
    LCD.Vertex2ii(133 +  279, 72);
    
    LCD.Vertex2ii(133 +  279, 72);
    LCD.Vertex2ii(133 +  280, 85);
    
    LCD.Vertex2ii(133 +  280, 85);
    LCD.Vertex2ii(133 +  280, 100);
    
    LCD.Vertex2ii(133 +  280, 100);
    LCD.Vertex2ii(133 +  279, 122);
    
    LCD.Vertex2ii(133 +  279, 122);
    LCD.Vertex2ii(133 +  279, 143);
    
    LCD.Vertex2ii(133 +  279, 143);
    LCD.Vertex2ii(133 +  279, 177);
    
    LCD.Vertex2ii(133 +  279, 177);
    LCD.Vertex2ii(133 +  279, 192);
    
    LCD.Vertex2ii(133 +  279, 192);
    LCD.Vertex2ii(133 +  280, 203);
    
    LCD.Vertex2ii(133 +  280, 203);
    LCD.Vertex2ii(133 +  279, 211);
    
    LCD.Vertex2ii(133 +  279, 211);
    LCD.Vertex2ii(133 +  280, 215);
    
    LCD.Vertex2ii(133 +  280, 215);
    LCD.Vertex2ii(133 +  279, 218);
    
    LCD.Vertex2ii(133 +  279, 218);
    LCD.Vertex2ii(133 +  278, 222);
    
    LCD.Vertex2ii(133 +  278, 222);
    LCD.Vertex2ii(133 +  277, 226);
    
    LCD.Vertex2ii(133 +  277, 226);
    LCD.Vertex2ii(133 +  277, 230);
    
    LCD.Vertex2ii(133 +  277, 230);
    LCD.Vertex2ii(133 +  276, 234);
    
    LCD.Vertex2ii(133 +  276, 234);
    LCD.Vertex2ii(133 +  275, 238);
    
    LCD.Vertex2ii(133 +  275, 238);
    LCD.Vertex2ii(133 +  274, 240);
    
    LCD.Vertex2ii(133 +  274, 240);
    LCD.Vertex2ii(133 +  273, 243);
    
    LCD.Vertex2ii(133 +  273, 243);
    LCD.Vertex2ii(133 +  271, 244);
    
    LCD.Vertex2ii(133 +  271, 244);
    LCD.Vertex2ii(133 +  268, 246);
    
    LCD.Vertex2ii(133 +  268, 246);
    LCD.Vertex2ii(133 +  265, 247);
    
    LCD.Vertex2ii(133 +  265, 247);
    LCD.Vertex2ii(133 +  261, 248);
    
    LCD.Vertex2ii(133 +  261, 248);
    LCD.Vertex2ii(133 +  257, 249);
    
    LCD.Vertex2ii(133 +  257, 249);
    LCD.Vertex2ii(133 +  253, 250);
    
    LCD.Vertex2ii(133 +  253, 250);
    LCD.Vertex2ii(133 +  250, 250);
    
    LCD.Vertex2ii(133 +  250, 250);
    LCD.Vertex2ii(133 +  245, 250);
    
    LCD.Vertex2ii(133 +  245, 250);
    LCD.Vertex2ii(133 +  240, 250);
    
    LCD.Vertex2ii(133 +  240, 250);
    LCD.Vertex2ii(133 +  237, 250);

    /////////////////////////
    // Other Half of Car Outline
    //////
    LCD.Vertex2ii(133 +  237, 250);
    LCD.Vertex2ii(133 +  233,250);

    LCD.Vertex2ii(133 +  233,250);
    LCD.Vertex2ii(133 +  227,250);

    LCD.Vertex2ii(133 +  227,250);
    LCD.Vertex2ii(133 +  222,250);

    LCD.Vertex2ii(133 +  222,250);
    LCD.Vertex2ii(133 +  217,249);

    LCD.Vertex2ii(133 +  217,249);
    LCD.Vertex2ii(133 +  212,248);

    LCD.Vertex2ii(133 +  212,248);
    LCD.Vertex2ii(133 +  208,247);

    LCD.Vertex2ii(133 +  208,247);
    LCD.Vertex2ii(133 +  204,244);

    LCD.Vertex2ii(133 +  204,244);
    LCD.Vertex2ii(133 +  201,242);
    
    LCD.Vertex2ii(133 +  201,242);
    LCD.Vertex2ii(133 +  199,239);

    LCD.Vertex2ii(133 +  199,239);
    LCD.Vertex2ii(133 +  198,234);

    LCD.Vertex2ii(133 +  198,234);
    LCD.Vertex2ii(133 +  197,231);

    LCD.Vertex2ii(133 +  197,231);
    LCD.Vertex2ii(133 +  196,227);

    LCD.Vertex2ii(133 +  196,227);
    LCD.Vertex2ii(133 +  196,223);

    LCD.Vertex2ii(133 +  196,223);
    LCD.Vertex2ii(133 +  195,220);

    LCD.Vertex2ii(133 +  195,220);
    LCD.Vertex2ii(133 +  194,218);

    LCD.Vertex2ii(133 +  194,218);
    LCD.Vertex2ii(133 +  194,213);

    LCD.Vertex2ii(133 +  194,213);
    LCD.Vertex2ii(133 +  194,200);

    LCD.Vertex2ii(133 +  194,200);
    LCD.Vertex2ii(133 +  194,190);

    LCD.Vertex2ii(133 +  194,190);
    LCD.Vertex2ii(133 +  194,61);

    LCD.Vertex2ii(133 +  194,61);
    LCD.Vertex2ii(133 +  195,56);

    LCD.Vertex2ii(133 +  195,56);
    LCD.Vertex2ii(133 +  196,51);

    LCD.Vertex2ii(133 +  196,51);
    LCD.Vertex2ii(133 +  197,48);

    LCD.Vertex2ii(133 +  197,48);
    LCD.Vertex2ii(133 +  199,43);

    LCD.Vertex2ii(133 +  199,43);
    LCD.Vertex2ii(133 +  201,40);

    LCD.Vertex2ii(133 +  201,40);
    LCD.Vertex2ii(133 +  203,37);

    LCD.Vertex2ii(133 +  203,37);
    LCD.Vertex2ii(133 +  206,35);

    LCD.Vertex2ii(133 +  206,35);
    LCD.Vertex2ii(133 +  209,34);

    LCD.Vertex2ii(133 +  209,34);
    LCD.Vertex2ii(133 +  214,32);

    LCD.Vertex2ii(133 +  214,32);
    LCD.Vertex2ii(133 +  218,31);

    LCD.Vertex2ii(133 +  218,31);
    LCD.Vertex2ii(133 +  222,31);

    LCD.Vertex2ii(133 +  222,31);
    LCD.Vertex2ii(133 +  226,30);

    LCD.Vertex2ii(133 +  226,30);
    LCD.Vertex2ii(133 +  233,30);

    LCD.Vertex2ii(133 +  233,30);
    LCD.Vertex2ii(133 +  237, 30);

    // Rear Windshield
    LCD.Vertex2ii(133 +  212,221);
    LCD.Vertex2ii(133 +  214,223);
    
    LCD.Vertex2ii(133 +  214,223);
    LCD.Vertex2ii(133 +  216,224);
    
    LCD.Vertex2ii(133 +  216,224);
    LCD.Vertex2ii(133 +  219,225);
    
    LCD.Vertex2ii(133 +  219,225);
    LCD.Vertex2ii(133 +  228,226);
    
    LCD.Vertex2ii(133 +  228,226);
    LCD.Vertex2ii(133 +  248,226);
    
    LCD.Vertex2ii(133 +  248,226);
    LCD.Vertex2ii(133 +  251,225);
    
    LCD.Vertex2ii(133 +  251,225);
    LCD.Vertex2ii(133 +  253,225);
    
    LCD.Vertex2ii(133 +  253,225);
    LCD.Vertex2ii(133 +  259,224);
    
    LCD.Vertex2ii(133 +  259,224);
    LCD.Vertex2ii(133 +  260,223);
    
    LCD.Vertex2ii(133 +  260,223);
    LCD.Vertex2ii(133 +  261,221);
    
    LCD.Vertex2ii(133 +  261,221);
    LCD.Vertex2ii(133 +  269,235);
    
    LCD.Vertex2ii(133 +  269,235);
    LCD.Vertex2ii(133 +  267,238);
    
    LCD.Vertex2ii(133 +  267,238);
    LCD.Vertex2ii(133 +  265,239);
    
    LCD.Vertex2ii(133 +  265,239);
    LCD.Vertex2ii(133 +  260,240);
    
    LCD.Vertex2ii(133 +  260,240);
    LCD.Vertex2ii(133 +  251,241);
    
    LCD.Vertex2ii(133 +  251,241);
    LCD.Vertex2ii(133 +  246,242);
    
    LCD.Vertex2ii(133 +  246,242);
    LCD.Vertex2ii(133 +  226,243);
    
    LCD.Vertex2ii(133 +  226,243);
    LCD.Vertex2ii(133 +  220,242);
    
    LCD.Vertex2ii(133 +  220,242);
    LCD.Vertex2ii(133 +  216,241);
    
    LCD.Vertex2ii(133 +  216,241);
    LCD.Vertex2ii(133 +  213,240);
    
    LCD.Vertex2ii(133 +  213,240);
    LCD.Vertex2ii(133 +  210,239);
    
    LCD.Vertex2ii(133 +  210,239);
    LCD.Vertex2ii(133 +  208,238);
    
    LCD.Vertex2ii(133 +  208,238);
    LCD.Vertex2ii(133 +  206,237);
    
    LCD.Vertex2ii(133 +  206,237);
    LCD.Vertex2ii(133 +  204,235);

    LCD.Vertex2ii(133 +  204,235);
    LCD.Vertex2ii(133 +  212,221);

    // Spoiler
    LCD.Vertex2ii(133 +  212,221);
    LCD.Vertex2ii(133 +  213,221);

    LCD.Vertex2ii(133 +  213,221);
    LCD.Vertex2ii(133 +  214,220);

    LCD.Vertex2ii(133 +  214,220);
    LCD.Vertex2ii(133 +  221,220);

    LCD.Vertex2ii(133 +  221,220);
    LCD.Vertex2ii(133 +  225,221);

    LCD.Vertex2ii(133 +  225,221);
    LCD.Vertex2ii(133 +  245,221);

    LCD.Vertex2ii(133 +  245,221);
    LCD.Vertex2ii(133 +  251,220);

    LCD.Vertex2ii(133 +  251,220);
    LCD.Vertex2ii(133 +  259,220);

    LCD.Vertex2ii(133 +  259,220);
    LCD.Vertex2ii(133 +  260,221);

    LCD.Vertex2ii(133 +  260,221);
    LCD.Vertex2ii(133 +  261,221);

    //Rear Left Window
    LCD.Vertex2ii(133 +  203,226);
    LCD.Vertex2ii(133 +  208,218);

    LCD.Vertex2ii(133 +  208,218);
    LCD.Vertex2ii(133 +  209,216);

    LCD.Vertex2ii(133 +  209,216);
    LCD.Vertex2ii(133 +  211,215);

    LCD.Vertex2ii(133 +  211,215);
    LCD.Vertex2ii(133 +  211,209);

    LCD.Vertex2ii(133 +  211,209);
    LCD.Vertex2ii(133 +  211,202);

    LCD.Vertex2ii(133 +  211,202);
    LCD.Vertex2ii(133 +  211,195);

    LCD.Vertex2ii(133 +  211,195);
    LCD.Vertex2ii(133 +  211,188);

    LCD.Vertex2ii(133 +  211,188);
    LCD.Vertex2ii(133 +  209,189);

    LCD.Vertex2ii(133 +  209,189);
    LCD.Vertex2ii(133 +  207,190);

    LCD.Vertex2ii(133 +  207,190);
    LCD.Vertex2ii(133 +  204,193);

    LCD.Vertex2ii(133 +  204,193);
    LCD.Vertex2ii(133 +  201,196);

    LCD.Vertex2ii(133 +  201,196);
    LCD.Vertex2ii(133 +  201,198);

    LCD.Vertex2ii(133 +  201,198);
    LCD.Vertex2ii(133 +  201,203);

    LCD.Vertex2ii(133 +  201,203);
    LCD.Vertex2ii(133 +  202,210);

    LCD.Vertex2ii(133 +  202,210);
    LCD.Vertex2ii(133 +  202,218);

    LCD.Vertex2ii(133 +  202,218);
    LCD.Vertex2ii(133 +  203,226);

    // Rear Left Pass Window
    LCD.Vertex2ii(133 +  201,192);
    LCD.Vertex2ii(133 +  204,189);

    LCD.Vertex2ii(133 +  204,189);
    LCD.Vertex2ii(133 +  207,187);

    LCD.Vertex2ii(133 +  207,187);
    LCD.Vertex2ii(133 +  209,186);

    LCD.Vertex2ii(133 +  209,186);
    LCD.Vertex2ii(133 +  211,185);

    LCD.Vertex2ii(133 +  211,185);
    LCD.Vertex2ii(133 +  210,182);

    LCD.Vertex2ii(133 +  210,182);
    LCD.Vertex2ii(133 +  210,156);

    LCD.Vertex2ii(133 +  210,156);
    LCD.Vertex2ii(133 +  207,155);

    LCD.Vertex2ii(133 +  207,155);
    LCD.Vertex2ii(133 +  200,153);

    LCD.Vertex2ii(133 +  200,153);
    LCD.Vertex2ii(133 +  200,178);

    LCD.Vertex2ii(133 +  200,178);
    LCD.Vertex2ii(133 +  201,192);

    // Rear left driver window
    LCD.Vertex2ii(133 +  200,149);
    LCD.Vertex2ii(133 +  202,150);

    LCD.Vertex2ii(133 +  202,150);
    LCD.Vertex2ii(133 +  206,151);

    LCD.Vertex2ii(133 +  206,151);
    LCD.Vertex2ii(133 +  208,152);

    LCD.Vertex2ii(133 +  208,152);
    LCD.Vertex2ii(133 +  210,153);

    LCD.Vertex2ii(133 +  210,153);
    LCD.Vertex2ii(133 +  210,142);

    LCD.Vertex2ii(133 +  210,142);
    LCD.Vertex2ii(133 +  209,136);

    LCD.Vertex2ii(133 +  209,136);
    LCD.Vertex2ii(133 +  208,130);

    LCD.Vertex2ii(133 +  208,130);
    LCD.Vertex2ii(133 +  206,123);

    LCD.Vertex2ii(133 +  206,123);
    LCD.Vertex2ii(133 +  204,114);

    LCD.Vertex2ii(133 +  204,114);
    LCD.Vertex2ii(133 +  202,109);

    LCD.Vertex2ii(133 +  202,109);
    LCD.Vertex2ii(133 +  201,103);

    LCD.Vertex2ii(133 +  201,103);
    LCD.Vertex2ii(133 +  200,108);

    LCD.Vertex2ii(133 +  200,108);
    LCD.Vertex2ii(133 +  200,113);

    LCD.Vertex2ii(133 +  200,113);
    LCD.Vertex2ii(133 +  200,121);

    LCD.Vertex2ii(133 +  200,121);
    LCD.Vertex2ii(133 +  200,135);

    LCD.Vertex2ii(133 +  200,135);
    LCD.Vertex2ii(133 +  200,149);

    // Driver Mirror
    LCD.Vertex2ii(133 +  199,109);
    LCD.Vertex2ii(133 +  200,110);

    LCD.Vertex2ii(133 +  200,110);
    LCD.Vertex2ii(133 +  200,112);

    LCD.Vertex2ii(133 +  200,112);
    LCD.Vertex2ii(133 +  199,112);

    LCD.Vertex2ii(133 +  199,112);
    LCD.Vertex2ii(133 +  199,113);

    LCD.Vertex2ii(133 +  199,113);
    LCD.Vertex2ii(133 +  193,116);

    LCD.Vertex2ii(133 +  193,116);
    LCD.Vertex2ii(133 +  193,113);

    LCD.Vertex2ii(133 +  193,113);
    LCD.Vertex2ii(133 +  194,112);

    LCD.Vertex2ii(133 +  194,112);
    LCD.Vertex2ii(133 +  196,110);

    LCD.Vertex2ii(133 +  196,110);
    LCD.Vertex2ii(133 +  198,109);

    LCD.Vertex2ii(133 +  198,109);
    LCD.Vertex2ii(133 +  199,109);

    // Front Windshield 
    LCD.Vertex2ii(133 +  210,127);
    LCD.Vertex2ii(133 +  215,126);

    LCD.Vertex2ii(133 +  215,126);
    LCD.Vertex2ii(133 +  218,125);

    LCD.Vertex2ii(133 +  218,125);
    LCD.Vertex2ii(133 +  222,124);

    LCD.Vertex2ii(133 +  222,124);
    LCD.Vertex2ii(133 +  230,123);

    LCD.Vertex2ii(133 +  230,123);
    LCD.Vertex2ii(133 +  241,122);

    LCD.Vertex2ii(133 +  241,122);
    LCD.Vertex2ii(133 +  248,123);

    LCD.Vertex2ii(133 +  248,123);
    LCD.Vertex2ii(133 +  252,124);

    LCD.Vertex2ii(133 +  252,124);
    LCD.Vertex2ii(133 +  256,125);

    LCD.Vertex2ii(133 +  256,125);
    LCD.Vertex2ii(133 +  262,126);

    LCD.Vertex2ii(133 +  262,126);
    LCD.Vertex2ii(133 +  263,127);

    LCD.Vertex2ii(133 +  263,127);
    LCD.Vertex2ii(133 +  264,123);

    LCD.Vertex2ii(133 +  264,123);
    LCD.Vertex2ii(133 +  266,118);

    LCD.Vertex2ii(133 +  266,118);
    LCD.Vertex2ii(133 +  267,114);

    LCD.Vertex2ii(133 +  267,114);
    LCD.Vertex2ii(133 +  271,98);

    LCD.Vertex2ii(133 +  271,98);
    LCD.Vertex2ii(133 +  268,96);

    LCD.Vertex2ii(133 +  268,96);
    LCD.Vertex2ii(133 +  264,93);

    LCD.Vertex2ii(133 +  264,93);
    LCD.Vertex2ii(133 +  259,92);

    LCD.Vertex2ii(133 +  259,92);
    LCD.Vertex2ii(133 +  254,91);

    LCD.Vertex2ii(133 +  254,91);
    LCD.Vertex2ii(133 +  249,90);

    LCD.Vertex2ii(133 +  249,90);
    LCD.Vertex2ii(133 +  228,89);

    LCD.Vertex2ii(133 +  228,89);
    LCD.Vertex2ii(133 +  218,90);

    LCD.Vertex2ii(133 +  218,90);
    LCD.Vertex2ii(133 +  213,92);

    LCD.Vertex2ii(133 +  213,92);
    LCD.Vertex2ii(133 +  208,93);

    LCD.Vertex2ii(133 +  208,93);
    LCD.Vertex2ii(133 +  205,95);

    LCD.Vertex2ii(133 +  205,95);
    LCD.Vertex2ii(133 +  202,97);

    LCD.Vertex2ii(133 +  202,97);
    LCD.Vertex2ii(133 +  206,111);

    LCD.Vertex2ii(133 +  206,111);
    LCD.Vertex2ii(133 +  208,117);

    LCD.Vertex2ii(133 +  208,117);
    LCD.Vertex2ii(133 +  209,124);

    LCD.Vertex2ii(133 +  209,124);
    LCD.Vertex2ii(133 +  210,127);

    // Right Front Window
    LCD.Vertex2ii(133 +  273,102);
    LCD.Vertex2ii(133 +  271,107);

    LCD.Vertex2ii(133 +  271,107);
    LCD.Vertex2ii(133 +  270,112);

    LCD.Vertex2ii(133 +  270,112);
    LCD.Vertex2ii(133 +  268,117);

    LCD.Vertex2ii(133 +  268,117);
    LCD.Vertex2ii(133 +  267,122);

    LCD.Vertex2ii(133 +  267,122);
    LCD.Vertex2ii(133 +  266,125);

    LCD.Vertex2ii(133 +  266,125);
    LCD.Vertex2ii(133 +  265,128);

    LCD.Vertex2ii(133 +  265,128);
    LCD.Vertex2ii(133 +  265,133);

    LCD.Vertex2ii(133 +  265,133);
    LCD.Vertex2ii(133 +  264,142);

    LCD.Vertex2ii(133 +  264,142);
    LCD.Vertex2ii(133 +  264,153);

    LCD.Vertex2ii(133 +  264,153);
    LCD.Vertex2ii(133 +  265,153);

    LCD.Vertex2ii(133 +  265,153);
    LCD.Vertex2ii(133 +  267,152);

    LCD.Vertex2ii(133 +  267,152);
    LCD.Vertex2ii(133 +  270,151);

    LCD.Vertex2ii(133 +  270,151);
    LCD.Vertex2ii(133 +  272,150);

    LCD.Vertex2ii(133 +  272,150);
    LCD.Vertex2ii(133 +  273,149);

    LCD.Vertex2ii(133 +  273,149);
    LCD.Vertex2ii(133 +  274,118);

    LCD.Vertex2ii(133 +  274,118);
    LCD.Vertex2ii(133 +  273,106);

    LCD.Vertex2ii(133 +  273,106);
    LCD.Vertex2ii(133 +  273,102);

    // Passenger Mirror
    LCD.Vertex2ii(133 +  273,110);
    LCD.Vertex2ii(133 +  273,109);

    LCD.Vertex2ii(133 +  273,109);
    LCD.Vertex2ii(133 +  275,108);

    LCD.Vertex2ii(133 +  275,108);
    LCD.Vertex2ii(133 +  276,108);

    LCD.Vertex2ii(133 +  276,108);
    LCD.Vertex2ii(133 +  277,109);

    LCD.Vertex2ii(133 +  277,109);
    LCD.Vertex2ii(133 +  278,110);

    LCD.Vertex2ii(133 +  278,110);
    LCD.Vertex2ii(133 +  279,111);

    LCD.Vertex2ii(133 +  279,111);
    LCD.Vertex2ii(133 +  280,112);

    LCD.Vertex2ii(133 +  280,112);
    LCD.Vertex2ii(133 +  280,113);

    LCD.Vertex2ii(133 +  280,113);
    LCD.Vertex2ii(133 +  280,114);

    LCD.Vertex2ii(133 +  280,114);
    LCD.Vertex2ii(133 +  275,112);

    LCD.Vertex2ii(133 +  275,112);
    LCD.Vertex2ii(133 +  275,111);

    LCD.Vertex2ii(133 +  275,111);
    LCD.Vertex2ii(133 +  273,110);

    // Rear Right Pass Window
    LCD.Vertex2ii(133 +  263,156);
    LCD.Vertex2ii(133 +  265,156);

    LCD.Vertex2ii(133 +  265,156);
    LCD.Vertex2ii(133 +  268,155);

    LCD.Vertex2ii(133 +  268,155);
    LCD.Vertex2ii(133 +  271,154);

    LCD.Vertex2ii(133 +  271,154);
    LCD.Vertex2ii(133 +  273,153);

    LCD.Vertex2ii(133 +  273,153);
    LCD.Vertex2ii(133 +  273,192);

    LCD.Vertex2ii(133 +  273,192);
    LCD.Vertex2ii(133 +  269,189);

    LCD.Vertex2ii(133 +  269,189);
    LCD.Vertex2ii(133 +  266,187);

    LCD.Vertex2ii(133 +  266,187);
    LCD.Vertex2ii(133 +  264,186);

    LCD.Vertex2ii(133 +  264,186);
    LCD.Vertex2ii(133 +  262,185);

    LCD.Vertex2ii(133 +  262,185);
    LCD.Vertex2ii(133 +  263,171);

    LCD.Vertex2ii(133 +  263,171);
    LCD.Vertex2ii(133 +  263,156);

    // Rear Right Window
    LCD.Vertex2ii(133 +  262,188);
    LCD.Vertex2ii(133 +  262,201);

    LCD.Vertex2ii(133 +  262,201);
    LCD.Vertex2ii(133 +  262,214);

    LCD.Vertex2ii(133 +  262,214);
    LCD.Vertex2ii(133 +  263,216);

    LCD.Vertex2ii(133 +  263,216);
    LCD.Vertex2ii(133 +  265,217);

    LCD.Vertex2ii(133 +  265,217);
    LCD.Vertex2ii(133 +  267,220);

    LCD.Vertex2ii(133 +  267,220);
    LCD.Vertex2ii(133 +  269,223);

    LCD.Vertex2ii(133 +  269,223);
    LCD.Vertex2ii(133 +  271,226);

    LCD.Vertex2ii(133 +  271,226);
    LCD.Vertex2ii(133 +  271,217);

    LCD.Vertex2ii(133 +  271,217);
    LCD.Vertex2ii(133 +  272,207);

    LCD.Vertex2ii(133 +  272,207);
    LCD.Vertex2ii(133 +  272,200);

    LCD.Vertex2ii(133 +  272,200);
    LCD.Vertex2ii(133 +  272,196);

    LCD.Vertex2ii(133 +  272,196);
    LCD.Vertex2ii(133 +  270,193);

    LCD.Vertex2ii(133 +  270,193);
    LCD.Vertex2ii(133 +  266,190);

    LCD.Vertex2ii(133 +  266,190);
    LCD.Vertex2ii(133 +  264,189);

    LCD.Vertex2ii(133 +  264,189);
    LCD.Vertex2ii(133 +  262,188);

    // Hood
    LCD.Vertex2ii(133 +  203,92);
    LCD.Vertex2ii(133 +  202,90);

    LCD.Vertex2ii(133 +  202,90);
    LCD.Vertex2ii(133 +  202,87);

    LCD.Vertex2ii(133 +  202,87);
    LCD.Vertex2ii(133 +  202,61);

    LCD.Vertex2ii(133 +  202,61);
    LCD.Vertex2ii(133 +  203,54);

    LCD.Vertex2ii(133 +  203,54);
    LCD.Vertex2ii(133 +  204,48);

    LCD.Vertex2ii(133 +  204,48);
    LCD.Vertex2ii(133 +  204,44);

    LCD.Vertex2ii(133 +  204,44);
    LCD.Vertex2ii(133 +  207,42);

    LCD.Vertex2ii(133 +  207,42);
    LCD.Vertex2ii(133 +  212,40);

    LCD.Vertex2ii(133 +  212,40);
    LCD.Vertex2ii(133 +  216,38);

    LCD.Vertex2ii(133 +  216,38);
    LCD.Vertex2ii(133 +  218,37);

    LCD.Vertex2ii(133 +  218,37);
    LCD.Vertex2ii(133 +  218,36);

    LCD.Vertex2ii(133 +  218,36);
    LCD.Vertex2ii(133 +  219,35);

    LCD.Vertex2ii(133 +  219,35);
    LCD.Vertex2ii(133 +  221,34);

    LCD.Vertex2ii(133 +  221,34);
    LCD.Vertex2ii(133 +  224,33);

    LCD.Vertex2ii(133 +  224,33);
    LCD.Vertex2ii(133 +  246,33);

    LCD.Vertex2ii(133 +  246,33);
    LCD.Vertex2ii(133 +  250,34);

    LCD.Vertex2ii(133 +  250,34);
    LCD.Vertex2ii(133 +  253,34);

    LCD.Vertex2ii(133 +  253,34);
    LCD.Vertex2ii(133 +  254,35);

    LCD.Vertex2ii(133 +  254,35);
    LCD.Vertex2ii(133 +  256,36);

    LCD.Vertex2ii(133 +  256,36);
    LCD.Vertex2ii(133 +  256,38);

    LCD.Vertex2ii(133 +  256,38);
    LCD.Vertex2ii(133 +  257,39);

    LCD.Vertex2ii(133 +  257,39);
    LCD.Vertex2ii(133 +  260,39);

    LCD.Vertex2ii(133 +  260,39);
    LCD.Vertex2ii(133 +  263,41);

    LCD.Vertex2ii(133 +  263,41);
    LCD.Vertex2ii(133 +  266,42);

    LCD.Vertex2ii(133 +  266,42);
    LCD.Vertex2ii(133 +  268,43);

    LCD.Vertex2ii(133 +  268,43);
    LCD.Vertex2ii(133 +  270,44);

    LCD.Vertex2ii(133 +  270,44);
    LCD.Vertex2ii(133 +  270,52);

    LCD.Vertex2ii(133 +  270,52);
    LCD.Vertex2ii(133 +  271,58);

    LCD.Vertex2ii(133 +  271,58);
    LCD.Vertex2ii(133 +  271,65);

    LCD.Vertex2ii(133 +  271,65);
    LCD.Vertex2ii(133 +  272,76);

    LCD.Vertex2ii(133 +  272,76);
    LCD.Vertex2ii(133 +  272,95);

    LCD.Vertex2ii(133 +  272,95);
    LCD.Vertex2ii(133 +  270,93);

    LCD.Vertex2ii(133 +  270,93);
    LCD.Vertex2ii(133 +  268,90);

    LCD.Vertex2ii(133 +  268,90);
    LCD.Vertex2ii(133 +  265,88);

    LCD.Vertex2ii(133 +  265,88);
    LCD.Vertex2ii(133 +  258,85);

    LCD.Vertex2ii(133 +  258,85);
    LCD.Vertex2ii(133 +  254,84);

    LCD.Vertex2ii(133 +  254,84);
    LCD.Vertex2ii(133 +  250,83);

    LCD.Vertex2ii(133 +  250,83);
    LCD.Vertex2ii(133 +  245,83);

    LCD.Vertex2ii(133 +  245,83);
    LCD.Vertex2ii(133 +  241,82);

    LCD.Vertex2ii(133 +  241,82);
    LCD.Vertex2ii(133 +  225,82);

    LCD.Vertex2ii(133 +  225,82);
    LCD.Vertex2ii(133 +  221,83);

    LCD.Vertex2ii(133 +  221,83);
    LCD.Vertex2ii(133 +  218,84);

    LCD.Vertex2ii(133 +  218,84);
    LCD.Vertex2ii(133 +  216,84);

    LCD.Vertex2ii(133 +  216,84);
    LCD.Vertex2ii(133 +  214,85);

    LCD.Vertex2ii(133 +  214,85);
    LCD.Vertex2ii(133 +  212,86);

    LCD.Vertex2ii(133 +  212,86);
    LCD.Vertex2ii(133 +  210,86);

    LCD.Vertex2ii(133 +  210,86);
    LCD.Vertex2ii(133 +  208,88);

    LCD.Vertex2ii(133 +  208,88);
    LCD.Vertex2ii(133 +  206,89);

    LCD.Vertex2ii(133 +  206,89);
    LCD.Vertex2ii(133 +  204,91);

    LCD.Vertex2ii(133 +  204,91);
    LCD.Vertex2ii(133 +  203,92);

    // hood lines
    LCD.Vertex2ii(133 +  212,86);
    LCD.Vertex2ii(133 +  213,75);

    LCD.Vertex2ii(133 +  213,75);
    LCD.Vertex2ii(133 +  214,64);

    LCD.Vertex2ii(133 +  214,64);
    LCD.Vertex2ii(133 +  215,56);

    LCD.Vertex2ii(133 +  215,56);
    LCD.Vertex2ii(133 +  217,46);

    LCD.Vertex2ii(133 +  217,46);
    LCD.Vertex2ii(133 +  219,37);

    LCD.Vertex2ii(133 +  219,37);
    LCD.Vertex2ii(133 +  219,35);


    // right hood line
    LCD.Vertex2ii(133 +  254,35);
    LCD.Vertex2ii(133 +  255,39);

    LCD.Vertex2ii(133 +  255,39);
    LCD.Vertex2ii(133 +  256,45);

    LCD.Vertex2ii(133 +  256,45);
    LCD.Vertex2ii(133 +  257,51);

    LCD.Vertex2ii(133 +  257,51);
    LCD.Vertex2ii(133 +  258,57);

    LCD.Vertex2ii(133 +  258,57);
    LCD.Vertex2ii(133 +  259,63);

    LCD.Vertex2ii(133 +  259,63);
    LCD.Vertex2ii(133 +  260,70);

    LCD.Vertex2ii(133 +  260,70);
    LCD.Vertex2ii(133 +  261,77);

    LCD.Vertex2ii(133 +  261,77);
    LCD.Vertex2ii(133 +  262,82);

    LCD.Vertex2ii(133 +  262,82);
    LCD.Vertex2ii(133 +  262,87);

    // hood connecting
    LCD.Vertex2ii(133 +  272,95);
    LCD.Vertex2ii(133 +  273,97);

    LCD.Vertex2ii(133 +  273,97);
    LCD.Vertex2ii(133 +  273,102);


    LCD.Vertex2ii(133 +  203,92);
    LCD.Vertex2ii(133 +  201,94);

    LCD.Vertex2ii(133 +  201,94);
    LCD.Vertex2ii(133 +  201,97);

    LCD.Vertex2ii(133 +  201,97);
    LCD.Vertex2ii(133 +  200,99);

    LCD.Vertex2ii(133 +  200,99);
    LCD.Vertex2ii(133 +  201,103);

    // Roof Right Line
    LCD.Vertex2ii(133 +  259,220);
    LCD.Vertex2ii(133 +  260,221);

    LCD.Vertex2ii(133 +  260,221);
    LCD.Vertex2ii(133 +  262,188);

    LCD.Vertex2ii(133 +  262,188);
    LCD.Vertex2ii(133 +  259,212);

    LCD.Vertex2ii(133 +  259,212);
    LCD.Vertex2ii(133 +  259,201);

    LCD.Vertex2ii(133 +  259,201);
    LCD.Vertex2ii(133 +  260,190);

    LCD.Vertex2ii(133 +  260,190);
    LCD.Vertex2ii(133 +  260,177);

    LCD.Vertex2ii(133 +  260,177);
    LCD.Vertex2ii(133 +  261,166);

    LCD.Vertex2ii(133 +  261,166);
    LCD.Vertex2ii(133 +  261,144);

    LCD.Vertex2ii(133 +  261,144);
    LCD.Vertex2ii(133 +  262,136);

    LCD.Vertex2ii(133 +  262,136);
    LCD.Vertex2ii(133 +  263,131);

    LCD.Vertex2ii(133 +  263,131);
    LCD.Vertex2ii(133 +  263,127);

    // Roof Left Line
    LCD.Vertex2ii(133 +  214,220);
    LCD.Vertex2ii(133 +  214,191);

    LCD.Vertex2ii(133 +  214,191);
    LCD.Vertex2ii(133 +  213,182);

    LCD.Vertex2ii(133 +  213,182);
    LCD.Vertex2ii(133 +  213,173);

    LCD.Vertex2ii(133 +  213,173);
    LCD.Vertex2ii(133 +  212,164);

    LCD.Vertex2ii(133 +  212,164);
    LCD.Vertex2ii(133 +  212,140);

    LCD.Vertex2ii(133 +  212,140);
    LCD.Vertex2ii(133 +  211,135);

    LCD.Vertex2ii(133 +  211,135);
    LCD.Vertex2ii(133 +  211,130);

    LCD.Vertex2ii(133 +  211,130);
    LCD.Vertex2ii(133 +  210,127);

    // Left Headlight
    LCD.Vertex2ii(133 +  204,44);
    LCD.Vertex2ii(133 +  202,46);

    LCD.Vertex2ii(133 +  202,46);
    LCD.Vertex2ii(133 +  201,48);

    LCD.Vertex2ii(133 +  201,48);
    LCD.Vertex2ii(133 +  200,50);

    LCD.Vertex2ii(133 +  200,50);
    LCD.Vertex2ii(133 +  199,51);

    LCD.Vertex2ii(133 +  199,51);
    LCD.Vertex2ii(133 +  197,51);

    LCD.Vertex2ii(133 +  197,51);
    LCD.Vertex2ii(133 +  198,49);

    LCD.Vertex2ii(133 +  198,49);
    LCD.Vertex2ii(133 +  200,46);

    LCD.Vertex2ii(133 +  200,46);
    LCD.Vertex2ii(133 +  202,43);

    LCD.Vertex2ii(133 +  202,43);
    LCD.Vertex2ii(133 +  205,41);

    LCD.Vertex2ii(133 +  205,41);
    LCD.Vertex2ii(133 +  208,39);

    LCD.Vertex2ii(133 +  208,39);
    LCD.Vertex2ii(133 +  212,37);

    LCD.Vertex2ii(133 +  212,37);
    LCD.Vertex2ii(133 +  215,36);
    
    LCD.Vertex2ii(133 +  215,36);
    LCD.Vertex2ii(133 +  218,36);

    // Right Headlight
    LCD.Vertex2ii(133 +  256,36);
    LCD.Vertex2ii(133 +  258,36);

    LCD.Vertex2ii(133 +  258,36);
    LCD.Vertex2ii(133 +  259,37);

    LCD.Vertex2ii(133 +  259,37);
    LCD.Vertex2ii(133 +  261,37);

    LCD.Vertex2ii(133 +  261,37);
    LCD.Vertex2ii(133 +  262,38);

    LCD.Vertex2ii(133 +  262,38);
    LCD.Vertex2ii(133 +  264,38);

    LCD.Vertex2ii(133 +  264,38);
    LCD.Vertex2ii(133 +  265,39);

    LCD.Vertex2ii(133 +  265,39);
    LCD.Vertex2ii(133 +  267,40);

    LCD.Vertex2ii(133 +  267,40);
    LCD.Vertex2ii(133 +  268,41);

    LCD.Vertex2ii(133 +  268,41);
    LCD.Vertex2ii(133 +  270,42);

    LCD.Vertex2ii(133 +  270,42);
    LCD.Vertex2ii(133 +  271,44);

    LCD.Vertex2ii(133 +  271,44);
    LCD.Vertex2ii(133 +  272,45);

    LCD.Vertex2ii(133 +  272,45);
    LCD.Vertex2ii(133 +  273,46);

    LCD.Vertex2ii(133 +  273,46);
    LCD.Vertex2ii(133 +  274,48);

    LCD.Vertex2ii(133 +  274,48);
    LCD.Vertex2ii(133 +  275,49);

    LCD.Vertex2ii(133 +  275,49);
    LCD.Vertex2ii(133 +  276,51);

    LCD.Vertex2ii(133 +  276,51);
    LCD.Vertex2ii(133 +  275,51);

    LCD.Vertex2ii(133 +  275,51);
    LCD.Vertex2ii(133 +  274,50);

    LCD.Vertex2ii(133 +  274,50);
    LCD.Vertex2ii(133 +  272,48);

    LCD.Vertex2ii(133 +  272,48);
    LCD.Vertex2ii(133 +  271,45);

    LCD.Vertex2ii(133 +  271,45);
    LCD.Vertex2ii(133 +  270,44);

    LCD.End();

    LCD.ColorRGB(0xA10000);

    LCD.Cmd_FGColor(0x610000);
    LCD.TagMask(1);
    LCD.Cmd_Button(10,(FT_DISPLAYHEIGHT/4) + (FT_DISPLAYHEIGHT/4),100,50,23,FT_OPT_FLAT,"Drive");

    LCD.Cmd_FGColor(0x610000);
    LCD.TagMask(1);
    LCD.Cmd_Button(10,(FT_DISPLAYHEIGHT/4) + 2 * (FT_DISPLAYHEIGHT/4),100,50,23,FT_OPT_FLAT,"Sport");
    
    LCD.Cmd_FGColor(0x610000);
    LCD.TagMask(1);
    LCD.Cmd_Button((FT_DISPLAYWIDTH/4),(FT_DISPLAYHEIGHT/4) + (FT_DISPLAYHEIGHT/4),100,50,23,FT_OPT_FLAT,"Object");

    LCD.Cmd_FGColor(0x610000);
    LCD.TagMask(1);
    LCD.Cmd_Button((FT_DISPLAYWIDTH/4),(FT_DISPLAYHEIGHT/4) + 2 * (FT_DISPLAYHEIGHT/4),100,50,23,FT_OPT_FLAT,"Max");
    
    Serial.println();

    LCD.DLEnd();//end the display list
    LCD.Finish();//render the display list and wait for the completion of the DL

 }
