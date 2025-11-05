#include <Arduino.h>
#include <Servo.h> // Panggil library Servo (bawaan)

// Buat objek servo untuk dikontrol
Servo myServo;  

// Definisikan pin tempat kita mencolokkan sinyal servo
int servoPin = D5; // Sesuai "Dokumen Emas", D5 adalah GPIO14

void setup() {
  Serial.begin(115200); // KITA BISA PAKAI SERIAL LAGI! HORE!
  delay(1000);
  Serial.println("\n\nFase 2.C: Tes Servo (Gerakan Presisi)");

  // 'Attach' atau "pasang" objek servo ke pin fisik
  myServo.attach(servoPin); 
  Serial.println("Servo terpasang di pin D5.");

  // Pindahkan servo ke posisi tengah (90 derajat) saat start
  myServo.write(90); 
  Serial.println("Servo bergerak ke 90 derajat.");
}

void loop() {
  // Gerakkan servo ke 0 derajat (posisi min)
  Serial.println("Bergerak ke 0 derajat...");
  myServo.write(0);
  delay(1500); // Beri waktu 1.5 detik bagi servo untuk bergerak

  // Gerakkan servo ke 180 derajat (posisi maks)
  Serial.println("Bergerak ke 180 derajat...");
  myServo.write(180);
  delay(1500); // Beri waktu 1.5 detik bagi servo untuk bergerak
}