// ENVIA SEÑAL MORCE
//USANDO VARIABLE "CHAR"
//GITHUB:@JOSERAFA78
const int LED=7;
const int BUCER=2;
char palabra[]={'J','O','S','E'};//Digite la Palabra a Enviar.

void setup()
{
    Serial.begin(9600);
pinMode(LED,OUTPUT);
pinMode(BUCER,OUTPUT);
Serial.println("LETRAS CODIGO MORSE////");

}
void loop()
{
    int Elementos = (sizeof(palabra)/sizeof(palabra[0]));;//Determina cantidad del Arreglo
    for (int i = 0; i <= Elementos -1; i++)
    {
        letra(palabra[i]);
    }
        delay(3000);

}
//Seleccion en Caso
void letra(char letra){
    switch (letra) {
  case 'A':
            punto(1);
            raya(1);
            espacio();
    break;
  case 'B':
            raya(1);
            punto(3);
            espacio();
    break;
  case 'C':
            punto(1);
            raya(1);
            punto(1);
            raya(1);
            espacio();
    break;
  case 'D':
            raya(1);
            punto(2);
            espacio();
    break;
  case 'E':
            punto(1);
            espacio();
    break;
  case 'F':
            punto(2);
            raya(1);
            punto(1);
            espacio();
    break;
  case 'G':
            raya(2);
            punto(1);
            espacio();
    break;
  case 'H':
            punto(4);
            espacio();
    break;
  case 'I':
            punto(2);
            espacio();
    break;
  case 'J':
            punto(1);
            raya(3);
            espacio();
    break;
  case 'K':
            raya(1);
            punto(1);
            raya(1);
            espacio();
    break;
  case 'L':
            punto(1);
            raya(1);
            punto(2);
            espacio();
    break;
  case 'M':
            raya(2);
            espacio();
    break;
  case 'N':
            punto(1);
            raya(1);
            punto(1);
            raya(1);
            espacio();
    break;
  case 'O':
            raya(3);
            espacio();
    break;
  case 'P':
            punto(1);
            raya(2);
            punto(1);
            espacio();
    break;
  case 'Q':
            raya(2);
            punto(1);
            raya(1);
            espacio();
    break;
  case 'R':
            punto(1);
            raya(1);
            punto(1);
            espacio();
    break;
  case 'S':
            punto(3);
            espacio();
    break;
  case 'T':
            raya(1);
            espacio();
    break;
  case 'U':
            punto(2);
            raya(1);
            espacio();
    break;
  case 'V':
            punto(3);
            raya(1);
            espacio();
    break;
  case 'W':
            punto(1);
            raya(2);
            espacio();
    break;
  case 'X':
            raya(1);
            punto(2);
            raya(1);
            espacio();
    break;
  case 'Y':
            raya(1);
            punto(1);
            raya(2);
            espacio();
    break;
  case 'Z':
            raya(2);
            punto(2);
            espacio();
    break;
  case '0':
            punto(5);
            espacio();
    break;
  case '1':
            punto(1);
            raya(4);
            espacio();
    break;
  case '2':
            punto(2);
            raya(3);
            espacio();
    break;
  case '3':
            punto(3);
            raya(2);
            espacio();
    break;
  case '4':
            punto(4);
            raya(1);
            espacio();
    break;
  case '5':
            punto(5);
            espacio();
    break;
  case '6':
            raya(1);
            punto(6);
            espacio();
    break;
  case '7':
            raya(2);
            punto(3);
            espacio();
    break;
  case '8':
            raya(3);
            punto(2);
            espacio();
    break;
  case '9':
            raya(4);
            punto(1);
            espacio();
    break;
  case '.':
            punto(1);
            raya(1);
            punto(1);
            raya(1);
            punto(1);
            espacio();
    break;
  case ',':
            raya(2);
            punto(2);
            raya(1);
            espacio();
    break;
  case '?':
            punto(2);
            raya(2);
            punto(1);
            espacio();
    break;
  default:
   Serial.println("Error.Caracter no Reconocido.");
    break;
}
}

void punto(int cantidad){
    for (int i=0; i <= cantidad-1; i++){
        digitalWrite(LED,HIGH);  //se enciende el LED
        digitalWrite(BUCER,HIGH);  //se enciende el LED
        Serial.print(". ");
        delay(200);   //tiempo de parpadeo
        digitalWrite(LED,LOW);  //se apaga el LED
        digitalWrite(BUCER,LOW);  //se apaga el LED
        delay(200);
    }

}

void raya(int cantidad){
    for (int i=0; i <= cantidad-1; i++){
        digitalWrite(LED,HIGH);  //se enciende el LED
        digitalWrite(BUCER,HIGH);  //se enciende el LED
        Serial.print("_ ");
        delay(600);   //tiempo de parpadeo
        digitalWrite(LED,LOW);  //se apaga el LED
        digitalWrite(BUCER,LOW);  //se apaga el LED
        delay(600);
    }

}
void espacio(){
    delay(300);
    Serial.print("  / ");
}

