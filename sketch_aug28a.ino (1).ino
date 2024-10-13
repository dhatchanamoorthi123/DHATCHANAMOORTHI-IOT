void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
// Define pin numbers for the LED groups
#define GROUP_A_PIN 9
#define GROUP_B_PIN 10
#define GROUP_C_PIN 11
#define GROUP_D_PIN 12

// Time durations in milliseconds
#define WORK_PERIOD 1000   // 1 hour in milliseconds
#define COOLDOWN_PERIOD 1250 // 15 minutes in milliseconds
                 

void setup() {
  // Set up the LED group pins as outputs
  pinMode(GROUP_A_PIN, OUTPUT);
  pinMode(GROUP_B_PIN, OUTPUT);
  pinMode(GROUP_C_PIN, OUTPUT);
  pinMode(GROUP_D_PIN, OUTPUT);
}

void loop() {
  // Scenario 1: Group A, B, and C are ON, Group D is cooling down
  digitalWrite(GROUP_A_PIN, HIGH);
  digitalWrite(GROUP_B_PIN, HIGH);
  digitalWrite(GROUP_C_PIN, HIGH);
  digitalWrite(GROUP_D_PIN, LOW);  // Group D is OFF
  delay(WORK_PERIOD);

  // Scenario 2: Group B, C, and D are ON, Group A is cooling down
  digitalWrite(GROUP_A_PIN, LOW);  // Group A is OFF
  digitalWrite(GROUP_B_PIN, HIGH);
  digitalWrite(GROUP_C_PIN, HIGH);
  digitalWrite(GROUP_D_PIN, HIGH);
  delay(WORK_PERIOD);

  // Scenario 3: Group C, D, and A are ON, Group B is cooling down
  digitalWrite(GROUP_A_PIN, HIGH);
  digitalWrite(GROUP_B_PIN, LOW);  // Group B is OFF
  digitalWrite(GROUP_C_PIN, HIGH);
  digitalWrite(GROUP_D_PIN, HIGH);
  delay(WORK_PERIOD);

  // Scenario 4: Group D, A, and B are ON, Group C is cooling down
  digitalWrite(GROUP_A_PIN, HIGH);
  digitalWrite(GROUP_B_PIN, HIGH);
  digitalWrite(GROUP_C_PIN, LOW);  // Group C is OFF
  digitalWrite(GROUP_D_PIN, HIGH);
  delay(WORK_PERIOD);

  // Cooldown period between cycles
  //delay(COOLDOWN_PERIOD);
}
