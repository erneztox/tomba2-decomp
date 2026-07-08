# Análisis de MAIN.bin (Motor Principal de Tomba! 2)

A diferencia del `SCUS_944.54` que sirvió como un mero inicializador, la extracción de las cadenas de texto de `MAIN.bin` confirma que este archivo es verdaderamente el corazón del juego.

## Hallazgos Principales

### 1. El Juego Completo Reside Aquí
A lo largo de las más de 2000 cadenas de texto extraídas, hemos encontrado todos los textos y nombres internos que definen el contenido del juego:
- **Mensajes de Interfaz:** `Checking Tomba save data`, `MEMORY CARD load completed`, `OK to quit game?`.
- **Nombres de Ítems y Habilidades:** `Magic Wings`, `Crystal Panel`, `Glacier Boomerang`, `Pig Ball`.
- **Lugares y Misiones:** `Kujara Washing Shed`, `Mythical Tower of Wisdom`, `Water Temple`, `Who's the Liar?`.
- **Enemigos y Personajes:** `Last Evil Pig`, `Tiny Water Pig`, `Yan of the Hidden Village`, `100-Year-Old Man`.

### 2. Librerías Integradas
Al igual que en el SCUS, al final del binario encontramos la firma del compilador original:
`Library Programs (c) 1993-1997 Sony Computer Entertainment Inc., All Rights Reserved.`
Esto significa que `MAIN.bin` también fue compilado estáticamente con el mismo SDK (PsyQ 1997/GCC 2.8.1). Al tener 1588 funciones, gran parte del código final del archivo será código inyectado del SDK para manejar sonido, 3D y lectura del disco, mientras que el resto será la lógica de la aventura.

### 3. Estructura Arquitectónica
Dado que todos los nombres de ítems y misiones están hardcodeados en el ejecutable, podemos deducir que:
- Tomba! 2 no utiliza un motor de scripts externo en disco para la lógica principal de la aventura. Las validaciones de "Si Tomba tiene X objeto, abrir puerta Y" están escritas directamente en C y compiladas aquí.
- Deberíamos ser capaces de encontrar tablas masivas (arrays de structs) que contienen los nombres, IDs, y efectos de cada ítem del juego. Mapear estas tablas de datos será un paso clave para entender cómo los desarrolladores organizaron la memoria.

## Próximos Objetivos
Las 1588 funciones de este motor son nuestro campo de batalla final. Sabiendo que los nombres de los niveles, los monstruos y las piezas del inventario están definidos dentro de este código, cualquier rutina que procese físicas o texturas (como el parseador de `.sdat` o el intérprete de `.vram`) está escondida entre estos bloques recién extraídos.
