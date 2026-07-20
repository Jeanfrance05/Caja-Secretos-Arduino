
const int B = 2;
const int B2 = 3;
const int B3 = 4;


const int LD1 = 12;
const int LD2 = 13;
const int BZ = 5;


int clave[3];
int intento[3];
int i;

void setup()
{
  pinMode(B, INPUT_PULLUP);
  pinMode(B2, INPUT_PULLUP);
  pinMode(B3, INPUT_PULLUP);

  pinMode(LD1, OUTPUT);
  pinMode(LD2, OUTPUT);
  pinMode(BZ, OUTPUT);

  guardarClave();
}

void loop()
  // Acierto: LED verde + sonido agudo
{
  leerIntento();

  if(comparar())
  {
    digitalWrite(LD2,HIGH);

    tone(BZ,1000);

    delay(1000);

    noTone(BZ);

    digitalWrite(LD2,LOW);
  }

  else
    // Error: LED rojo + sonido grave
  {
    digitalWrite(LD1,HIGH);

    tone(BZ,300);

    delay(1000);

    noTone(BZ);

    digitalWrite(LD1,LOW);
  }
}

	//cómo se graba la contraseña
void guardarClave()
{
  for(i=0;i<3;i++)
  {
    bool guardado=false;

    while(!guardado)
    {
      if(digitalRead(B)==LOW)
      {
        clave[i]=1;
        guardado=true;
        delay(300);
      }

      else if(digitalRead(B2)==LOW)
      {
        clave[i]=2;
        guardado=true;
        delay(300);
      }

      else if(digitalRead(B3)==LOW)
      {
        clave[i]=3;
        guardado=true;
        delay(300);
      }
    }
  }
}

void leerIntento()
{
  for(i=0;i<3;i++)
  {
    bool listo=false;

    while(!listo)
    {
      if(digitalRead(B)==LOW)
      {
        intento[i]=1;
        listo=true;
        delay(300);
      }

      else if(digitalRead(B2)==LOW)
      {
        intento[i]=2;
        listo=true;
        delay(300);
      }

      else if(digitalRead(B3)==LOW)
      {
        intento[i]=3;
        listo=true;
        delay(300);
      }
    }
  }
}

bool comparar()
{
  bool correcta=true;

  for(i=0;i<3;i++)
  {
    if(clave[i]!=intento[i])
    {
      correcta=false;
    }
  }

  return correcta;
}
