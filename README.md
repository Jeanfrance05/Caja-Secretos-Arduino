# Caja-Secretos-Arduino
Caja de Secretos con Combinación Programable 🔐

Más allá de la memoria humana, este secreto está cifrado por un Arduino

Imagina una caja fuerte en miniatura que aprende tu clave la primera vez que la enciendes y luego se convierte en su propio guardián: cada intento de abrirla pasa por un interrogatorio digital de tres golpes de botón. Si aciertas, el sistema lo celebra con luz verde y un sonido de victoria. Si fallas... la caja te lo hace saber con una luz roja y un tono que no deja dudas.

Este proyecto nació como reto del curso de Electrónica de Voces que Inspiran, y combina tres mundos en un solo circuito:

⚡ Electrónica — botones, LEDs, buzzer y (opcionalmente) un servomotor, todos hablando con un Arduino Uno
🧠 Lógica digital — comparar secuencias, manejar estados (¿estoy aprendiendo la clave o verificándola?) y filtrar el "ruido" de los botones
💻 Programación — arreglos, funciones propias y control de flujo para que la caja "recuerde" y "decida"
📋 Cómo funciona

El sistema tiene dos modos:

Modo de configuración — al encender el Arduino, "escucha" tres pulsaciones de botón y las guarda como la combinación secreta.
Modo de verificación — a partir de ese momento, cada intento de tres botones se compara contra la combinación guardada.

Combinación correcta y Combinación incorrecta
LED verde se enciende, suena un tono de éxito y LED rojo se enciende, suena un tono de error y el sistema queda listo para un nuevo intento

Componente a utilizar
<img width="1128" height="267" alt="image" src="https://github.com/user-attachments/assets/4b17eecb-d54c-4366-83bf-0bb8c26f7e77" />

