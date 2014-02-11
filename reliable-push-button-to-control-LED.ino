const int LED =13;
const int BUTTON = 7;

int state = 0;
int val = 0;
int old_val = 0;


void setup() 
{
   pinMode(LED, OUTPUT); 
   pinMode(BUTTON, INPUT);
}

void loop() 
{
 val = digitalRead(BUTTON);
 
 if((val == HIGH) && (old_val == LOW)) {
   state = 1 - state; 
   delay(10); 
 }
 
 old_val = val;
 
 if(state == 1) {
   digitalWrite(LED, HIGH);
   delay(10); 
 }else {
    digitalWrite(LED, LOW);
   delay(10); 
 }
