// Die setup() Funktion wird einmal beim starten des Arduino asugeführt.
void setup()
{
  // Inizialisiert einen der Digital Pins des Arduino. In diesem Fall wird Pin 13 (LED_BUILTIN) als Ausgang (OUTPUT) festgelegt.
  pinMode(LED_BUILTIN, OUTPUT);
}

// Die loop() Funktion wird nach der setup() Funktion in einer Unendlichkeits-Schleife ausgeführt.
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);  // Schalte die LED ein (HIGH steht für das Spannungslevel)
  delay(1000);                      // Warte für eine Sekunde (1000 ms)
  digitalWrite(LED_BUILTIN, LOW);   // Schalte die LED aus. Diesmal auf das niedrige (LOW) Spannungslevel.
  delay(1000);                      // Warte für eine Sekunde (1000 ms)
}
