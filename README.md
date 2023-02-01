# ComunicacioRobotPC
 En aquest projecte es tractarà de crear un programa que es pugui comunicar amb un robot ABB mitjançant Sockets i una connexió Ethernet.

<h1>
El Projecte
</h1>
<p>
Com a projecte final de la matèria de Robotica he decidit fer un "foodtruck" amb varios robots que cuinin el plat que l'usuari esculli (per manternir-ho senzill l'usuari nomes podra escollir entre hamburguesa i hotdog). 
La comanda serà feta a traves d'una pantalla "tàctil" (simularem els inputs tàctils amb clicks del ratolí) com les que trobem a restaurants de menjar ràpid. Un cop confirmada la comanda els robots es posaran a cuinar i un cop hagin acabat entregaran el menjar a l'usuari. 
</p>

<h2>
Objectius
</h2> 
<p>
El programa (escrit en C++ a poder ser, encara que també s'està contemplant der-ho en Java) consisteix de dues parts:
El frontend, una GUI on l'usuari pugui seleccionar un tipus de menjar i personalitzar-ho, i el backend, on es realitzaràn totes les comunicacnions pc-robot.
</p>

<h2>
Requeriments
</h2> 
<ul>
    <li>El programa ha de ser capaç de recollir la comanda de l'usuari correctament</li>
    <li>El programa ha de ser capaç de crear un servidor al que es puguin connectar les controladores</li>
    <li>El programa ha de ser capaç de comunicar-se eficientment i de manera segura amb les controladores</li>
</ul>
