#include <Arduino.h>
#include <Keypad.h> // Panggil library yang sudah diinstal

// --- Definisi Keypad ---
const byte ROWS = 4; // 4 baris
const byte COLS = 4; // 4 kolom

// Layout tombol di keypad Anda
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// --- Peta Pin "Dokumen Emas" Kita ---
// Ini adalah 6 pin "Aman" + 2 pin "Mengganggu"
byte rowPins[ROWS] = {D1, D2, D5, D6}; // Pin untuk Baris R1-R4
byte colPins[COLS] = {D7, D0, RX, TX}; // Pin untuk Kolom C1-C4

// Buat objek keypad
Keypad customKeypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// --- Setup ---
void setup() {
  // Serial.begin(115200); <-- DILARANG! PINNYA TERPAKAI.
  // Serial.println("Test"); <-- DILARANG!

  // LED_BUILTIN (D4) adalah satu-satunya teman kita
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH); // LED internal mati (HIGH = Mati)
}

// --- Loop ---
void loop() {
  // Baca tombol yang ditekan
  char key = customKeypad.getKey();

  // Jika ada tombol YANG BARU SAJA DITEKAN:
  if (key) {
    // Beri sinyal debug: Kedipkan LED biru SATU KALI
    
    digitalWrite(LED_BUILTIN, LOW);  // Nyalakan LED (LOW = Nyala)
    delay(50);                      // Jeda 50 milidetik (kedipan cepat)
    digitalWrite(LED_BUILTIN, HIGH); // Matikan LED
  }
}