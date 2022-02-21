#include <DHT.h>
#define DHT11_PIN A0     
#define DHTTYPE DHT11   
DHT dht(DHT11_PIN, DHTTYPE);
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 12;
int f = 7;
int g = 8;

int GND1 = 6;
int GND2 = 11;
int GND3 = 10;
int GND4 = 9;

int dig1 = 0;
int dig2 = 0;
int dig3 = 0;
int dig4 = 0;

int Temp;

void setup()
{
  dht.begin();
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(GND1, OUTPUT);
  pinMode(GND2, OUTPUT);
  pinMode(GND3, OUTPUT);
  pinMode(GND4, OUTPUT);
}

void loop()
{
  Temp = dht.readTemperature();
    dig1 = Temp / 10;
    dig2 = Temp - (dig1 * 10);
    dig3 = 10;
    dig4 = 11;


    
        digitalWrite( GND4, HIGH);    //digit 4
        DisplayNumber(dig4);
        delay(4);
        digitalWrite( GND4, LOW);

        digitalWrite( GND3, HIGH);    //digit 3
        DisplayNumber(dig3);
        delay(4);
        digitalWrite( GND3, LOW);

        digitalWrite( GND2, HIGH);   //digit 2
        DisplayNumber(dig2);
        delay(4);
        digitalWrite( GND2, LOW);

        digitalWrite( GND1, HIGH);   //digit 1
        DisplayNumber(dig1);
        delay(4);
        digitalWrite( GND1, LOW);
  
}
void DisplayNumber(int x) {
  switch (x) {
    case 0: zero(); break;
    case 1: one(); break;
    case 2: two(); break;
    case 3: three(); break;
    case 4: four(); break;
    case 5: five(); break;
    case 6: six(); break;
    case 7: seven(); break;
    case 8: eight(); break;
    case 9: nine(); break;
    case 10: o(); break;
    case 11: C(); break;
  }
}



void zero()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, LOW);
  digitalWrite( g, HIGH);
}

void one()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, HIGH);
  digitalWrite( e, HIGH);
  digitalWrite( f, HIGH);
  digitalWrite( g, HIGH);
}

void two()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, HIGH);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, HIGH);
  digitalWrite( g, LOW);
}

void three()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, HIGH);
  digitalWrite( f, HIGH);
  digitalWrite( g, LOW);
}

void four()
{
  digitalWrite( a, HIGH);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, HIGH);
  digitalWrite( e, HIGH);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}

void five()
{
  digitalWrite( a, LOW);
  digitalWrite( b, HIGH);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, HIGH);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}

void six()
{
  digitalWrite( a, LOW);
  digitalWrite( b, HIGH);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}

void seven()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, HIGH);
  digitalWrite( e, HIGH);
  digitalWrite( f, HIGH);
  digitalWrite( g, HIGH);
}

void eight()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}

void nine()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, LOW);
  digitalWrite( d, LOW);
  digitalWrite( e, HIGH);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}
void o()
{
  digitalWrite( a, LOW);
  digitalWrite( b, LOW);
  digitalWrite( c, HIGH);
  digitalWrite( d, HIGH);
  digitalWrite( e, HIGH);
  digitalWrite( f, LOW);
  digitalWrite( g, LOW);
}

void C()
{
  digitalWrite( a, LOW);
  digitalWrite( b, HIGH);
  digitalWrite( c, HIGH);
  digitalWrite( d, LOW);
  digitalWrite( e, LOW);
  digitalWrite( f, LOW);
  digitalWrite( g, HIGH);
}