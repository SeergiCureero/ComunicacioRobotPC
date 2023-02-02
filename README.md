# ComunicacioRobotPC
 En aquest projecte es tractarà de crear un programa que es pugui comunicar amb un robot ABB mitjançant Sockets i una connexió Ethernet.

<p>
Languages:
</p>
<a href="#cat">Català</a>
<br>
<a href="#eng">English</a>
<br>
<a href="#esp">Español</a>
<br>
<br>

<h1 id="cat">
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
<p>
El SO de l'ordinador serà Windows.
</p>

<h2>
Requeriments
</h2> 
<ul>
    <li>El programa ha de ser capaç de recollir la comanda de l'usuari correctament</li>
    <li>El programa ha de ser capaç de crear un servidor al que es puguin connectar les controladores</li>
    <li>El programa ha de ser capaç de comunicar-se eficientment i de manera segura amb les controladores</li>
</ul>

<h2>
Documentació
</h2>
<p>
La documentació necessaria la trobareu a la carpeta de Docs i/o com a enllaços a la següent llista:
</p>
<ul>
    <li>PDF Software Controlador ABB <a href="Docs/3HAC050798 AM Controller software IRC5-en.pdf">3HAC050798 AM Controller software IRC5-en</a>: descriu com és el procès de comunicació entre robot i pc (Veure punt 8 Communication)</li>
</ul>

<br>
<br>

<h1 id="eng">
The Project
</h1>
<p>
As my final Robotics project I've decided to make a foodtruck with 3 or so robots the cook the meal that the user wants (to keep it "simple" it would only have 2 options: burguer and hotdog).
The user will order through a toch screen (we will simulate touch inputs with mouse clicks) the likes of the ones seen in fast food restaurants. Once the user has finished ordering, the robots will start to cook and once it's all done they will deliver the food to the user.
</p>

<h2>
Objectives
</h2> 
<p>
The program (written in c++) has two parts:
The frontend, a GUI were the user has to choose a type of meal and customize it, and the backend, where all the communication between the robot and the PC will happen.
</p>
<p>
The PC OS will be Windows.
</p>

<h2>
Program Requirements
</h2> 
<ul>
    <li>Must be able to gather user input correctly</li>
    <li>Must be able to create a server for the robots to connect</li>
    <li>Must be able to communicate efficiently and securely with the robots</li>
</ul>

<h2>
Documentation
</h2>
<p>
You'll find the necessary documentation inside the Docs folder and/or in the following links:
</p>
<ul>
    <li>PDF Software ABB Controller <a href="Docs/3HAC050798 AM Controller software IRC5-en.pdf">3HAC050798 AM Controller software IRC5-en</a>: descrives the protocol and how to communicate between robot and PC (See point 8 Communication)</li>
</ul>

<br>
<br>

<h1 id="esp">
El Proyecto
</h1>
<p>
Como proyecto final de la materia de Robotica he decidido hacer un "foodtruck" con varios robots que cocinen el plato que el usuario escoja (para manternerlo sencillo el usuario solo podra escoger entre hamburguesa y hotdog). 
El pedido sera hecho a traves de una pantalla "tactil" (simularemos los inputs tactiles con clicks del ratón) como las que encontramos en restaurantes de comida rapida. Una vez confirmado el pedido los robots se pondran a cocinar y una vez hayan acabado entregaran la comida al usuario. 
</p>

<h2>
Objetivos
</h2> 
<p>
El programa consiste de dos partes:
El frontend, una GUI donde el usuario pueda seleccionar un tipo de comida y personalizarla, y el backend, donde se realitzaran todas las comunicacniones pc-robot.
</p>
<p>
El SO del ordenador será Windows.
</p>

<h2>
Requerimientos
</h2> 
<ul>
    <li>El programa tiene que ser capaz de recoger el pedido del usuario correctamente</li>
    <li>El programa tiene que ser capaz de crear un servidor al que se puedan conectar las controladoras</li>
    <li>El programa tiene que ser capaz de comunicarse eficientmente y de manera segura con las controladoras</li>
</ul>

<h2>
Documentación
</h2>
<p>
La documentación necesaria la encontrareis en la carpeta de Docs y/o en enlaces en la siguiente lista:
</p>
<ul>
    <li>PDF Software Controlador ABB <a href="Docs/3HAC050798 AM Controller software IRC5-en.pdf">3HAC050798 AM Controller software IRC5-en</a>: describe como es el proceso de comunicación entre robot y pc (Ver punto 8 Communication)</li>
</ul>