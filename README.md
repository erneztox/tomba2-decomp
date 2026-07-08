# Proyecto de Decompilación de Tomba! 2

Este es un proyecto de decompilación en curso para el juego de PlayStation 1 **Tomba! 2: The Evil Swine Return** (también conocido como Tombi! 2).

El objetivo de este proyecto es recrear con precisión el código fuente original en C. Para garantizar que no se introduzcan errores, el código resultante se compila utilizando la cadena de herramientas del compilador original PsyQ (`cc1`) combinada con capas de traducción modernas (`maspsx`) para producir un ejecutable exactamente igual (byte-perfect).

## Aviso Legal

> [!WARNING]
> Este repositorio **NO** contiene activos originales del juego, ejecutables ni materiales con derechos de autor. Para construir el proyecto, debes adquirir legalmente una copia del juego y extraer los archivos necesarios por ti mismo.

## Instrucciones de Instalación

Utilizamos un script automatizado en Python para extraer la ISO, dividir el ejecutable principal en código ensamblador y preparar el proyecto. También utilizamos Ghidra para la ingeniería inversa y la decompilación.

### 1. Requisitos Previos

- Python 3.8+
- Paquetes de Arch Linux/Linux: `p7zip` y `bchunk`.
- Arch Linux GNU Binutils para MIPS: `mips-linux-gnu-binutils` (requerido para ensamblar objetos de PS1 en Little Endian).
  - Instalar vía AUR: `yay -S mips-linux-gnu-binutils`
- Tu archivo comprimido `.7z` o tus archivos `.bin`/`.cue` obtenidos legalmente de tu disco de Tomba! 2.
- Ghidra 11.x+ (para decompilación).

### 2. Preparar la ROM

Coloca tus archivos `.bin` y `.cue` (o archivo `.7z`) dentro de la carpeta `rom/` en la raíz de este proyecto.

### 3. Ejecutar Configuración y Extracción

Ejecuta el script de configuración. Este script se encargará de:
1. Extraer el ejecutable principal (por ejemplo, `SCUS_944.54`).
2. Ejecutar `splat` para dividir el ejecutable en archivos puros de ensamblador (`asm/`).
3. Extraer los archivos propietarios del juego en el directorio `assets/` (desempaquetando el sistema de archivos interno).

```bash
python3 scripts/setup.py
```

### 4. Configuración de Ghidra y MCP Bridge

Para comenzar a analizar y extraer código C, utilizamos Ghidra con un puente (bridge) MCP personalizado.

1. **Importar el Ejecutable**: Abre Ghidra, crea un proyecto e importa `rom/extracted/SCUS_944.54`. 
   - Formato: `Raw Binary`
   - Lenguaje: `MIPS:LE:32:default`
2. **CRÍTICO: Configurar Base de la Imagen**: La PS1 carga este ejecutable en `0x80010000`. En Ghidra, ve a **Window > Memory Map**, haz clic en el ícono de **Move Image Base** (la casa con una flecha azul) y cambia la dirección de `00000000` a `80010000`.
3. **Auto Analyze**: Deja que Ghidra realice su análisis por defecto.
4. **Iniciar Servidor MCP**: Si instalaste el puente Ghidra-MCP, inícialo desde `Tools > GhidraMCP > Start MCP Server`. Esto permite que scripts externos obtengan código decompilado directamente de tu instancia de Ghidra.

## Arquitectura del Motor y Estructura del CD

Tomba! 2 utiliza un sistema personalizado de carga e indexación de archivos, omitiendo por completo las búsquedas estándar `CdSearchFile` de ISO9660 para sus recursos principales.

### Ejecutables
- **`SCUS_944.54`**: Un cargador ligero / sistema antipiratería. Inicializa la consola y pasa el control a `MAIN.EXE`.
- **`MAIN.EXE`**: El verdadero motor del juego (~716 KB). Contiene la física, lógica de gráficos GTE, análisis de archivos y las rutinas de descompresión LZSS.

### Índice Maestro y Recursos
- **`START.BIN`**: El manifiesto maestro. Una pequeña lista en texto plano que enlaza rutas de archivos del CD con IDs numéricos internos.
- **`TOMBA2.IDX`**: La base de datos de punteros maestra. El sector 0 indexa modelos 3D y animaciones en `TOMBA2.DAT`. El sector 1 indexa cargas en crudo de texturas de VRAM en `TOMBA2.IMG`.
- **Formatos Personalizados y Compresión**: Tomba! 2 elimina cabeceras estándar de PlayStation (`.TMD`, `.TIM`) para ahorrar memoria. Tanto `TOMBA2.DAT` como `TOMBA2.IMG` contienen fragmentos altamente comprimidos (LZSS). Usamos el script en `tools/extractor/extractor.py` para analizar `.IDX` de forma nativa, descomprimir las imágenes VRAM y extraer las mallas 3D al directorio `assets/`.

### Superposiciones de Niveles (Archivos .BIN)
Archivos como `A00.BIN` son **ejecutables superpuestos compilados**, no solo archivos de recursos. Se cargan en una dirección fija de RAM y contienen una tabla virtual masiva de punteros absolutos en su cabecera, permitiendo a `MAIN.EXE` ejecutar lógica específica del nivel y obtener modelos localizados instantáneamente.

## Extracción de Recursos e Imágenes

Para extraer de forma nativa los modelos 3D comprimidos en LZSS (`.sdat`) y los volcados en crudo de texturas (`.vram`) directamente del juego sin usar un emulador, ejecuta el script extractor incluido:

```bash
python3 tools/extractor/extractor.py
```

Esto llenará la carpeta `assets/` con múltiples directorios `chunk_XX` que contienen los datos originales del juego.

### Extracción de Hojas de Sprites (Spritesheets)

En el proyecto hay dos scripts relacionados a las imágenes extraídas, cada uno con un propósito específico:

1. **`vram2png.py`**: Este script convierte los volcados brutos de VRAM (archivos de 1MB) en imágenes PNG sin aplicar paletas de color. Útil únicamente si quieres inspeccionar la distribución de la memoria de video.
2. **`sdat2img.py`** (Script Principal): Este script lee la geometría y los polígonos del motor (`.sdat`), busca la posición correcta de la memoria y la paleta de colores (CLUT) oficial que usa el juego, y genera hojas de sprites PNG perfectas a color de 256x256. 

Para obtener los personajes y texturas a color como en el juego original, debes usar el script inteligente:

```bash
python3 sdat2img.py
```

Este script arrojará las hojas de sprites listas y coloreadas dentro del directorio `assets/imagenes_perfectas/`.

## Proceso de Compilación

Hemos establecido un flujo de compilación totalmente automatizado que refleja el entorno original de 1999:

```bash
make
```

Lo que hace `make` internamente:
1. Toma el código C decompilado desde `src/`.
2. Lo compila utilizando el compilador original PsyQ (`tools/old-gcc/cc1`).
3. Procesa el ensamblador resultante mediante `tools/maspsx` para hacerlo compatible con ensambladores GNU modernos.
4. Ensambla el archivo objeto `.o` final usando `mips-linux-gnu-as` (con la bandera Little Endian `-EL`).

Los archivos objeto resultantes se encontrarán en `build/src/` como binarios `elf32-tradlittlemips`.

## Extracción de Audio

Dado que los archivos de audio CD-ROM XA de PS1 utilizan sectores especializados de 2352 bytes con canales entrelazados, su extracción requiere una herramienta especializada (`jpsxdec`). Hemos automatizado este proceso en Python:

```bash
python3 scripts/extract_music.py
```

Este script descargará automáticamente `jpsxdec`, analizará el disco y extraerá toda la música de fondo, audio de cinemáticas y voces como archivos `.wav` prístinos en el directorio `extracted_music/`.

## Comparación Local con asm-differ

Para verificar que tu código C produce exactamente el mismo ensamblador que el juego original, usamos `asm-differ`.

### 1. Instalar Dependencias
Si estás en Arch Linux, instala los paquetes de Python requeridos:
```bash
yay -S python-colorama python-watchdog python-levenshtein
```

### 2. Ejecutar la Comparación
Hemos automatizado el proceso de ensamblado y comparación en el `Makefile`. Para monitorizar y comparar una función de forma continua (ej. `func_8001DD04`):

```bash
make diff FUNC=func_8001DD04
```

Este comando:
1. Leerá automáticamente `asm/func_8001DD04.s`, inyectará el `macro.inc` necesario y lo ensamblará en el objeto base "esperado".
2. Compilará tu `src/func_8001DD04.c` en el objeto "construido".
3. Iniciará `asm-differ` en modo de vigilancia (`-w`), lo que recompilará y actualizará instantáneamente la comparación visual cada vez que guardes tu archivo C.

## Contribuir

Usamos verificación local y [decomp.me](https://decomp.me/) para el desarrollo comunitario de funciones.

1. Toma una función en ensamblador de `asm/`.
2. Reescribe el ensamblador MIPS a código C dentro de `src/`.
3. Para colaborar en línea, crea un "Scratch" usando nuestro **Preset oficial de decomp.me**: [https://decomp.me/preset/244](https://decomp.me/preset/244)
4. Usa `asm-differ` localmente para asegurar que sea exactamente igual.
5. ¡Una vez que coincida byte por byte al 100%, abre un Pull Request!
