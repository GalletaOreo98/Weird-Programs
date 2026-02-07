# E-RAM

**Extended Runtime Adaptive Memory**

E-RAM es un framework experimental de **extensión adaptativa de memoria RAM por software**, diseñado para maximizar el uso efectivo de los recursos de memoria disponibles en tiempo de ejecución sin requerir modificaciones de hardware.

Este repositorio introduce un **framework experimental de ampliación de memoria RAM por software**, basado en técnicas avanzadas de **virtual memory offloading**, **page compression** y **heurísticas adaptativas de gestión de memoria** a nivel de sistema.

```bash
git clone https://github.com/GalletaOreo98/e-ram.git
cd e-ram
sudo ./install.sh
```

La solución intercepta y extiende el flujo tradicional de asignación de memoria mediante un **middleware de abstracción de memoria**, capaz de analizar patrones de acceso en tiempo real y redistribuir páginas de memoria entre RAM física, swap optimizado y capas de almacenamiento intermedio de baja latencia.

El resultado es un **incremento efectivo de la memoria utilizable**, permitiendo que el sistema ejecute cargas de trabajo que normalmente excederían la RAM instalada, manteniendo estabilidad y reduciendo el impacto en latencia.

### Nota

Este proyecto no pretende reemplazar la memoria física, sino **maximizar el aprovechamiento del espacio disponible**, desbloqueando capacidad latente que normalmente permanece infrautilizada por el sistema operativo.

> E-RAM existe para explorar los límites entre la memoria física y la memoria percibida.
> A veces, el verdadero cuello de botella no es el hardware, sino cómo lo usamos.



