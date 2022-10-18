##Coding Basics

Arduino Mikrokontroller werden in der Programiersprache C++ programmiert. Diese gilt zwar als relativ schwer, aber das Arduino Framework bietet viele Vereinfachungen.

Der aufbau eines Arduio Sketches sieht wie folgt aus:

```cpp

// Compiler Anweisung wie z.B. Das importieren einer Bibliothek. Dieser Code wird beim kompilieren ausgeführt.
#include <Servo.h> // Fügt die Servobibliothek ein, welche die Ansteuerung des Servos vereinfacht.

#define SERVO_PIN 8 // Definiert ein Macro mit dem Namen SERVO_PIN welcher den Inhalt "8" hat.

int globalInt = 0; // Globale Variable. Sie bleibt die gesamte Laufzeit erhalten und ist von überall aufrufbar

Servo test_servo; // Erstellt ein Objekt vom Typ Servo mit dem Namen test_servo

// Außerhalb von Funtionen könne nur Deklarationen stattfinden.

// Die setup() Funktion wird einmal beim starten des Arduino asugeführt.
void setup()
{
    int lokalSetupInt = 1; // Lokale Variable. Ist nur hier verfügbar und wird nach Ablauf der Funktion gelöscht.

    // Inerhalb einer Funktion können neben Deklarationen auch Anwesiungen sein.

    test_servo.attach(SERVO_PIN); // Koppelt den in SERVO_PIN hinterlegten Pin (8)
    // alternativ
    test_servo.attach(8);
}

// Die loop() Funktion wird nach der setup() Funktion in einer Unendlichkeits-Schleife ausgeführt.
void loop()
{
    int lokalLoopInt = 1; // Lokale Variable. Ist nur hier verfügbar und wird nach Ablauf der Funktion gelöscht. Im falle des Loops wird sie jeden Durchgang zurück gesetzt.

    servoblau.write(0); // Servo auf 0° stellen
 
    delay(3000); // Wartet 3 Sekunden (3000 ms)

    servoblau.write(180); // Servo auf 180° stellen

    delay(3000); // Wartet 3 Sekunden (3000 ms)
}

```