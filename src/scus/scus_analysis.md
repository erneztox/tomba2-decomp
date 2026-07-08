# Análisis del SCUS_944.54 (Bootloader)

Al extraer y analizar las 666 funciones y las cadenas de texto (strings) de este ejecutable, hemos llegado a conclusiones muy claras sobre su propósito dentro de Tomba! 2.

## Hallazgos Principales

1. **Es un Bootloader Mínimo:** 
   Como sospechábamos, este archivo no contiene el motor del juego. Tras extraer todas las cadenas de texto del binario, encontramos lo siguiente:
   - Cadenas del sistema de archivos: `CdSearchFile: searching %s...`
   - APIs de CD-ROM de PsyQ: `CdlReadS`, `CdlSeekP`, `CdlGetTD`, `CdlSetmode`, etc.
   - APIs gráficas base: `ResetGraph`, `SetDispMask`, `ClearOTagR`, `DrawSyncCallback`
   - El comando de carga: `cdrom:\MAIN.EXE;1`
   - Firma de las librerías: `Library Programs (c) 1993-1997 Sony Computer Entertainment Inc.`

2. **Librerías Estándar de PsyQ (Statically Linked):**
   Aproximadamente el 90% de las 666 funciones que extrajimos en esta carpeta **no fueron escritas por los desarrolladores de Tomba! 2**. Son simplemente las librerías estándar de C y del hardware de PlayStation (PsyQ SDK) que el compilador inyectó automáticamente. Fechas como `$Id: bios.c,v 1.86 1997/03/28` nos confirman la versión aproximada del SDK que usaron.

3. **La Función de Salto:**
   El código nativo del juego aquí es minúsculo: inicializa la consola, muestra la pantalla negra con el logo de PlayStation, ubica `MAIN.EXE` en el CD-ROM, lo carga en la memoria RAM (probablemente en la dirección `0x80010000` o superior), y luego ejecuta una instrucción de salto (`jal` o `jr`) para pasarle el control absoluto al motor del juego.

## ¿Nos ayuda esto a conseguir la estructura del proyecto?

**Sí y no.**

- **No nos ayuda con el motor del juego:** Dado que la física, la lectura de `.sdat` (modelos 3D), la lógica de los niveles, las paletas y los enemigos están 100% dentro de `MAIN.EXE`, el `SCUS` no nos da pistas sobre cómo está estructurado el código del juego en sí.
- **Sí nos ayuda con el entorno de compilación:** Analizar estas funciones estándar nos da la versión exacta de las librerías de Sony (PsyQ) que usaron. Al identificar cómo el compilador generó el ensamblador para estas librerías conocidas, podemos configurar nuestra propia cadena de herramientas (`tools/old-gcc/cc1`) para que haga coincidencias (matching) perfectas al byte cuando descompilemos `MAIN.EXE`.

## Siguientes Pasos
Este ejecutable se puede considerar "resuelto" a nivel arquitectónico. Las funciones aquí extraídas servirán como una enciclopedia de referencia de cómo lucen las librerías de PsyQ decompiladas. Nuestro enfoque para descubrir la estructura del juego en sí debe regresar a `MAIN.EXE`.
