# Proyecto: Sistema de Gestión para Boutique "Moda Viva"  
Una solución pensada para hacer brillar tu tienda de ropa local

## Objetivo general:
Crear un sistema amigable que registre cada venta con cariño y genere reportes diarios que cuenten la historia de tu negocio.

## OBJETIVO 1: Registrar ventas con alegría

- **HU-01:** Como vendedor, me encantaría poder registrar cada venta fácilmente y crear tickets bonitos para nuestros clientes.  
**Criterios de Aceptación:**  
- Dado que estoy en el módulo de ventas, cuando selecciono un producto y confirmo la venta, entonces el sistema genera un ticket visualmente agradable con todos los detalles de la compra.  
- Dado que un ticket fue generado, cuando lo imprimo o lo envío por correo, entonces debe contener el nombre del producto, cantidad, precio, total y un mensaje de agradecimiento.  

- **HU-02:** Como vendedor, sueño con buscar productos rápidamente (por nombre o código) para atender con una sonrisa.  
**Criterios de Aceptación:**  
- Dado que estoy vendiendo, cuando ingreso el nombre o código de un producto, entonces debe mostrarse instantáneamente con sus detalles.  
- Cuando no se encuentra un producto, se debe mostrar un mensaje amigable que invite a intentar de nuevo.  

- **HU-03:** Querido sistema, por favor avísame si algo no tiene stock antes de vender, así evitamos malentendidos.  
**Criterios de Aceptación:**  
- Dado que intento vender un producto sin stock, cuando lo agrego al carrito, entonces el sistema debe mostrar una alerta inmediata y bloquear la venta.  

- **HU-04:** Como vendedor, quiero hacer felices a los clientes aplicando sus descuentos especiales.  
**Criterios de Aceptación:**  
- Dado que estoy registrando una venta, cuando selecciono un cliente con descuento, entonces el sistema debe aplicar automáticamente el porcentaje correspondiente.  
- El descuento aplicado debe reflejarse claramente en el ticket.  

- **HU-05:** Como cliente, me ilusiona recibir mi ticket digital bien presentado como recuerdo de mi compra.  
**Criterios de Aceptación:**  
- Dado que se completó la venta, cuando el cliente solicita un ticket digital, entonces se debe enviar por correo o mostrar un QR para descarga.  
- El ticket debe tener un diseño atractivo y legible en dispositivos móviles.  

- **HU-06:** Como administrador, quiero repasar con café en mano todas las ventas del día.  
**Criterios de Aceptación:**  
- Dado que accedo al resumen diario, cuando selecciono la fecha de hoy, entonces el sistema me muestra todas las ventas agrupadas con totales.  
- El reporte debe poder exportarse o imprimirse con un solo clic.  

---

## OBJETIVO 2: Reportes que cuentan tu éxito

- **HU-07:** Como administrador, anhelo un reporte diario que me muestre cómo nos fue hoy.  
**Criterios de Aceptación:**  
- Dado que es fin de jornada, cuando accedo al sistema, entonces debo ver un resumen visual de ingresos, ventas y productos más vendidos.  

- **HU-08:** Sistema amigo, ¿podrías enviarme el reporte directo a mi correo como un mensaje especial?  
**Criterios de Aceptación:**  
- Dado que se generó un reporte diario, cuando termina el día, entonces se debe enviar automáticamente al correo configurado del administrador.  
- El correo debe incluir gráficos simples y adjuntar el PDF del reporte.  

- **HU-09:** Como administrador, me gustaría viajar en el tiempo viendo reportes de cualquier período.  
**Criterios de Aceptación:**  
- Dado que accedo al historial, cuando selecciono un rango de fechas, entonces el sistema muestra los reportes correspondientes.  
- Debo poder ver y descargar cada uno.  

- **HU-10:** Como administrador, quiero guardar mis reportes en PDF como fotos de los buenos momentos.  
**Criterios de Aceptación:**  
- Dado un reporte generado, cuando presiono “guardar como PDF”, entonces el archivo debe descargarse con diseño limpio y nombre claro.  

- **HU-11:** Como administrador, sueño con comparar días buenos y malos para aprender de ellos.  
**Criterios de Aceptación:**  
- Dado dos días seleccionados, cuando pido comparar, entonces se deben mostrar métricas clave en paralelo (ventas, ingresos, ticket promedio).  

- **HU-12:** Como administrador, quiero saber qué prendas fueron las estrellas de la semana.  
**Criterios de Aceptación:**  
- Dado que visualizo la semana, cuando abro el ranking de productos, entonces se muestran los más vendidos ordenados por cantidad.  

---

## OBJETIVO 3: Inventario siempre impecable

- **HU-13:** Querido sistema, por favor actualiza nuestro inventario automáticamente con cada venta.  
**Criterios de Aceptación:**  
- Dado que se realiza una venta, cuando se confirma, entonces el sistema debe descontar automáticamente las unidades del stock.  

- **HU-14:** Como administrador, quiero dar la bienvenida a nuevos productos con todos sus detalles.  
**Criterios de Aceptación:**  
- Dado que quiero agregar un producto, cuando ingreso su información, entonces debe guardarse correctamente y estar disponible para ventas.  

- **HU-15:** Sistema avisador, por favor dime con tiempo cuando algo se esté agotando.  
**Criterios de Aceptación:**  
- Dado que un producto llega a su stock mínimo, cuando accedo al panel, entonces debe aparecer una alerta visual o notificación.  

- **HU-16:** Como administrador, necesito ajustar precios según la temporada para mantenernos frescos.  
**Criterios de Aceptación:**  
- Dado que selecciono un producto, cuando edito su precio, entonces el cambio debe reflejarse de inmediato en el sistema y en ventas.  

- **HU-17:** Como vendedor, quiero poder consultar disponibilidad al instante para dar respuestas claras.  
**Criterios de Aceptación:**  
- Dado que busco un producto, cuando ingreso su nombre o código, entonces el sistema debe mostrar el stock actualizado.  

- **HU-18:** Sistema protector, no permitas que vendamos lo que ya no tenemos.  
**Criterios de Aceptación:**  
- Dado que intento vender un producto agotado, cuando confirmo la venta, entonces el sistema debe bloquearla con un mensaje claro.