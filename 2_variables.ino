#if 1
//variables
int age = 16; 
float accountBalance = 400.01; 
double debt = 200.45; 
byte heigth = 10; // 8 bit positive integer (0 - 255)
String husbandName = "Hamzat";// always use double quotes for string, this isn't JavaScript 
String wifeName = "Sharon"; 
char firstLetter = 'c hs'; // A - Z, a - Z, ' ', 

// const 

void setup() {
  Serial.begin(9600);
  Serial.println("Hello World" + String(' ') + String(firstLetter));
}

void loop() {
}

#endif