# Arduino Toggle LED Control Project

## Simulación
[Ver proyecto en Tinkercad](https://www.tinkercad.com/things/bvdRBLjBMXn-boton-onoff-pullup)

## Descripción
Código Arduino que controla un LED con un botón de alternancia (on/off).

## Componentes
- Arduino
- LED
- Botón pulsador
- Resistencias (si es necesario)

## Código Explicado

### Configuración de Pines
```cpp
int led = 13;        // Pin del LED
int boton = 4;       // Pin del botón
bool on_off = false; // Estado inicial del LED
```

### Función `setup()`
- Configura LED como salida
- Configura botón como entrada pull-up
- Inicializa LED apagado

### Función `loop()`
- Detecta cambios en el estado del botón
- Alterna estado del LED al presionar
- Utiliza método de anti-rebote con comparación de estados

## Características
- Toggle de LED con un solo botón
- Uso de `INPUT_PULLUP`
- Método de anti-rebote básico

## Personalización
- Cambiar pines según conexión física
- Modificar lógica de alternancia

## Licencia
Este proyecto está bajo la Licencia MIT - ver el archivo [LICENSE](LICENSE) para más detalles.

## Autor
[Pedro Carranza](https://github.com/draexx)
