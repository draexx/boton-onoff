//
int led = 13; // Pin digital para el LED
int boton = 4;// Pin digital para el boton
bool on_off = false; // estado inicial del led
bool estadoBoton; // variable auxiliar para el estado del boton
void setup()
{
  pinMode(led, OUTPUT);// Configura el pin como salida
  pinMode(boton, INPUT_PULLUP);// Configura el pin como entrada Pullup
  digitalWrite(led, on_off);// Inicialmente apagado
}
void loop()
{
  int dato = digitalRead(boton);// Verifica si el botón ha cambiado de estado
  if (dato != estadoBoton) {
    estadoBoton = dato;//almacena el estado del boton
    // Solo cambiar el estado del LED si el botón está presionado
    if (estadoBoton == LOW) {
      on_off = !on_off;  // Cambiar estado del LED
      digitalWrite(led, on_off);  // Actualizar LED
    }
  }
}
